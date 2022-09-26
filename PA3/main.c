#include "header.h"

int main(void) {
	FILE *infile = fopen("input.dat", "r");
	FILE* outfile = fopen("output.dat", "w");

	double gpa1, gpa2, gpa3, gpa4, gpa5, gpaSum, gpaMean;
	double year1, year2, year3, year4, year5, yearSum, yearMean;
	double age1, age2, age3, age4, age5, ageSum, ageMean;

	//student 1
	read_integer(infile);
	gpa1 = read_double(infile);
	year1 = read_integer(infile);
	age1 = read_double(infile);

	//student 2
	read_integer(infile);
	gpa2 = read_double(infile);
	year2 = read_integer(infile);
	age2 = read_double(infile);

	//student 3
	read_integer(infile);
	gpa3 = read_double(infile);
	year3 = read_integer(infile);
	age3 = read_double(infile);

	//student 4
	read_integer(infile);
	gpa4 = read_double(infile);
	year4 = read_integer(infile);
	age4 = read_double(infile);

	//student 5
	read_integer(infile);
	gpa5 = read_double(infile);
	year5 = read_integer(infile);
	age5 = read_double(infile);

	gpaSum = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
	gpaMean = calculate_mean(gpaSum, 5);

	yearSum = calculate_sum(year1, year2, year3, year4, year5);
	yearMean = calculate_mean(yearSum, 5);

	ageSum = calculate_sum(age1, age2, age3, age4, age5);
	ageMean = calculate_mean(ageSum, 5);
}