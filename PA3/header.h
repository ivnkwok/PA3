/*
Programmer: Ivan Kwok
Class: CptS 121, Fall 2022; Lab Section 12
Programming Assignment: PA3
Date: September 15, 2022
Description: File I/O Practice
*/
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double read_double(FILE* infile);
int read_integer(FILE* infile);
double calculate_sum(double num1, double num2, double num3, double num4, double num5);
double calculate_mean(double sum, int num);
double calculate_deviation(double num, double mean);
double calculate_variance(double dev1, double dev2, double dev3, double dev4, double dev5, int num);
double calculate_standard_deviation(double variance);
double find_max(double num1, double num3, double num4, double num5);
double find_min(double num1, double num3, double num4, double num5);
void print_double(FILE* outfile, double num);
