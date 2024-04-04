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
	ope = " ";
	myFileReader >> ope;

	if (myFileReader) {
		if (ope.compare("quadratic") == 0 || ope.compare("+") == 0 || ope.compare("*") == 0 || ope.compare("/") == 0 || ope.compare("-") == 0 || ope.compare("rectangular->polar") == 0 || ope.compare("rectangular->exponential") == 0 || ope.compare("polar->exponential") == 0 || ope.compare("polar->rectangular") == 0 || ope.compare("exponential->polar") == 0 || ope.compare("exponential->rectangular") == 0)
		{
			while (!myFileReader.eof())
			{
				string number = " ";
				getline(myFileReader, number, '|');
				size++;
			}
		}
		else if (ope.compare("ln") == 0 || ope.compare("cot") == 0 || ope.compare("csc") == 0 || ope.compare("sin") == 0 || ope.compare("log") == 0 || ope.compare("sec") == 0 || ope.compare("tan") == 0 || ope.compare("cos") == 0)
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

	if (ope.compare("ln") == 0 && size == 1) {
		operation = 6;
		function = "ln";
	}
	else if (ope.compare("*") == 0) {
		operation = '*';
	}
	else if (ope.compare("cot") == 0 && size == 1) {
		operation = 12;
		function = "cot";
	}
	else if (ope.compare("quadratic") == 0 && size == 3) {
		operation = 13;
	}
	else if (ope.compare("/") == 0) {
		operation = '/';
	}
	else if (ope.compare("csc") == 0 && size == 1) {
		operation = 10;
		function = "csc";
	}
	else if (ope.compare("sec") == 0 && size == 1) {
		operation = 11;
		function = "sec";
	}
	else if (ope.compare("sin") == 0 && size == 1) {
		operation = 7;
		function = "sin";
	}
	else if (ope.compare("log") == 0 && size == 1) {
		operation = 5;
		function = "log";
	}
	else if (ope.compare("+") == 0) {
		operation = '+';
	}
	else if (ope.compare("-") == 0)
	{
		operation = '-';
	}
	else if (ope.compare("tan") == 0 && size == 1) {
		operation = 9;
		function = "tan";
	}
	else if (ope.compare("cos") == 0 && size == 1) {
		operation = 8;
		function = "cos";
	}
	else if (ope.compare("game1") == 0) {
		operation = 17;
	}
	else if (ope.compare("game2") == 0) {
		operation = 18;
	}
	else if (ope.compare("rectangular->polar") == 0 || ope.compare("rectangular->exponential") == 0 || ope.compare("polar->exponential") == 0 || ope.compare("polar->rectangular") == 0 || ope.compare("exponential->polar") == 0 || ope.compare("exponential->rectangular") == 0 && size == 2) {
		operation = 19;
		function = ope;
	}
	else {
		operation = 100;
		exit(0);
	}


	if (operation != 100) {
		if (myFileReader) {
			if (ope.compare("quadratic") == 0 || ope.compare("+") == 0 || ope.compare("*") == 0 || ope.compare("/") == 0 || ope.compare("-") == 0 || ope.compare("rectangular->polar") == 0 || ope.compare("rectangular->exponential") == 0 || ope.compare("polar->exponential") == 0 || ope.compare("polar->rectangular") == 0 || ope.compare("exponential->polar") == 0 || ope.compare("exponential->rectangular") == 0)
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
			else if (ope.compare("ln") == 0 || ope.compare("cot") == 0 || ope.compare("csc") == 0 || ope.compare("sin") == 0 || ope.compare("log") == 0 || ope.compare("sec") == 0 || ope.compare("tan") == 0 || ope.compare("cos") == 0)
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
	else {

	}

}

void Numbers::calc()
{
}

	Numbers::~Numbers() {

	}
