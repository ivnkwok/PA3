#include "header.h"

double read_double(FILE* infile) {
	double num;
	fscanf(infile, "%lf", &num);
	return num;
}

int read_integer(FILE* infile) {
	int num;
	fscanf(infile, "%d", &num);
	return num;
}

double calculate_sum(double num1, double num2, double num3, double num4, double num5) {
	return num1 + num2 + num3 + num4 + num5;
}

double calculate_mean(double sum, int num) {
	return num == 0 ? -1 : sum / num;
}

double calculate_deviation(double num, double mean) {
	return num - mean;
}

double calculate_variance(double dev1, double dev2, double dev3, double dev4, double dev5, int num) {
	double temp = pow(dev1, 2) + pow(dev2, 2) + pow(dev3, 2) + pow(dev4, 2) + pow(dev5, 2);
	return calculate_mean(temp, num);
}

double calculate_standard_deviation(double variance) {
	sqrt(variance);
}

double find_max(double num1, double num2, double num3, double num4, double num5) {
	double max = num1;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	if (num4 > max) {
		max = num4;
	}
	if (num5 > max) {
		max = num5;
	}
	return max;
}
double find_min(double num1, double num2, double num3, double num4, double num5) {
	double min = num1;
	if (num2 < min) {
		min = num2;
	}
	if (num3 < min) {
		min = num3;
	}
	if (num4 < min) {
		min = num4;
	}
	if (num5 < min) {
		min = num5;
	}
	return min;
}

void print_double(FILE* outfile, double num) {
	fprintf(outfile, "%.2lf\n", num);
}