#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N_DATA 10

void get_data(double[]);
void print_data(double[]);
double get_mean(double[]);
double get_std_dev(double[], double);

int main(void) {

	double data[20];
	double mean = 0.0;

	srand((unsigned)time(NULL));
	get_data(data);
	print_data(data);
	mean = get_mean(data);

	printf("평균값은 %lf\n", mean);
	printf("표준편차값은 %lf", get_std_dev(data, mean));

	return 0;
}

void get_data(double data[]) {

	for (int i = 0; i < N_DATA; i++) {
		data[i] = rand() % 100;
	}
}

void print_data(double data[]) {

	printf("( ");

	for (int i = 0; i < N_DATA; i++) {
		printf("%.2lf ", data[i]);
	}
	printf(")\n");
}

double get_mean(double data[]) {

	double sum = 0.0;

	for (int i = 0; i < N_DATA; i++) {
		sum += data[i];
	}
	return sum / N_DATA;
}

double get_std_dev(double data[], double mean) {
	
	double sum = 0.0;

	for (int i = 0; i < N_DATA; i++) {
		sum += (data[i] - mean) * (data[i] - mean);
	}
	return sqrt(sum / N_DATA);
}