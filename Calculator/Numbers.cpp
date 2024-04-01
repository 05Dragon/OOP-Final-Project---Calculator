#include "Numbers.h"
#include "fstream"
#include "string"
#include "iostream"
#include <cstring>
#include <string>

Numbers::Numbers()
{
	fstream myFileReader;
	myFileReader.open("Numbers.txt");

	myArray = nullptr;
	Size = 0;
	operation = '_';
	function = " ";
	int size = 0;
	string ope = " ";
	myFileReader >> ope;

	if (myFileReader) {
		if (ope.compare("quadratic") == 0 || ope.compare("graph") == 0 || ope.compare("+") == 0 || ope.compare("*") == 0 || ope.compare("/") == 0)
		{
			while (!myFileReader.eof())
			{
				string number = " ";
				getline(myFileReader, number, '|');
				size++;
			}
		}
		else if (ope.compare("ln") == 0 || ope.compare("cot") == 0 || ope.compare("csc") == 0 || ope.compare("sin") == 0 || ope.compare("log") == 0 || ope.compare("sec") == 0)
		{
			string number = " ";
			myFileReader >> number;
			size++;
			function = ope;
		}
	}
	myFileReader.close();

	double* array = new double[size];
	myFileReader.open("Numbers.txt");

	myFileReader >> ope;

	if (ope.compare("ln") == 0) {
		operation = 6;
	}
	else if (ope.compare("*") == 0) {
		operation = '*';
	}
	else if (ope.compare("cot") == 0) {
		operation = 12;
	}
	else if (ope.compare("quadratic") == 0) {
		operation = 13;
	}
	else if (ope.compare("/") == 0) {
		operation = '/';
	}
	else if (ope.compare("graph") == 0) {
		operation = 18;
	}
	else if (ope.compare("csc") == 0) {
		operation = 10;
	}
	else if (ope.compare("sec") == 0) {
		operation = 11;
	}
	else if (ope.compare("sin") == 0) {
		operation = 7;
	}
	else if (ope.compare("log") == 0) {
		operation = 5;
	}
	else if (ope.compare("+") == 0) {
		operation = '+';
	}

	if (myFileReader) {
		if (ope.compare("quadratic") == 0 || ope.compare("graph") == 0 || ope.compare("+") == 0 || ope.compare("*") == 0 || ope.compare("/") == 0)
		{
			for (int i = 0; i < size; i++)
			{
				string number = " ";
				getline(myFileReader, number, '|');
				double n = 0;
				n = stod(number);
				array[i] = stod(number);
			}
		}
		else if (ope.compare("ln") == 0 || ope.compare("cot") == 0 || ope.compare("csc") == 0 || ope.compare("sin") == 0 || ope.compare("log") == 0 || ope.compare("sec") == 0)
		{
			function = ope;
			for (int i = 0; i < size; i++)
			{
				string number = " ";
				myFileReader >> number;
				double n = 0;
				n = stod(number);
				array[i] = stod(number);
			}
		}
	}

	myArray = array;
	Size = size;

}

void Numbers::calc(double* myArray, int size)
{
}

	Numbers::~Numbers() {

	}
