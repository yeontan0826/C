#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10

void get_data(double[]);
void print_data(double[]);
double get_mean(double[]);
double get_std_dev(double[], double);

int main() {

	double data[20];
	double mean = 0.0;

	srand((unsigned)time(NULL));
	get_data(data);
	print_data(data);
	mean = get_mean(data);

	printf("평균값 : %lf\n", mean);
	printf("표준편차값 : %1f\n", get_std_dev(data, mean));

	return 0;
}

void get_data(double data[]) {
	for (int i = 0; i < SIZE; i++) {
		data[i] = rand() % 100;
	}
}

void print_data(double data[]) {
	 
	printf("( ");
	 
	for (int i = 0; i < SIZE; i++) {
		printf("%.2f ", data[i]);
	}

	printf(")\n");
}

double get_mean(double data[]) {
	
	double sum = 0;

	for (int i = 0; i < SIZE; i++) {
		sum += data[i];
	}

	return sum / SIZE;
}

double get_std_dev(double data[], double mean) {

	double sum = 0.0;

	for (int i = 0; i < SIZE; i++) {
		sum += (data[i] - mean) * (data[i] - mean);
	}

	return sqrt(sum / SIZE);
}