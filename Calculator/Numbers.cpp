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

	myArray =nullptr;
	Size = 0;
	operation = '_';
	function = " ";
	int size = 0;
	string ope = " ";
	myFileReader >> ope;

	if (myFileReader) {
		if (ope.compare("ln") != 0 || ope.compare("cot") != 0 || ope.compare("quadratic") == 0)
		{
			while (!myFileReader.eof())
			{
				string number = " ";
				getline(myFileReader, number, '|');
				size++;
			}
		}
		else if (ope.compare("ln") == 0 || ope.compare("cot") == 0 || ope.compare("quadratic") != 0)
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
		operation = 0;
	}
	else if (ope.compare("*") == 0) {
		operation = '*';
	}
	else if (ope.compare("cot") == 0) {
		operation = 8;
	}
	else if (ope.compare("quadratic") == 0) {
		operation = 9;
	}

	if (myFileReader) {
		if (ope.compare("ln") != 0 || ope.compare("cot") != 0 || ope.compare("quadratic") == 0)
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
		else if (ope.compare("ln") == 0 || ope.compare("cot") == 0 || ope.compare("quadratic") != 0)
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

	/*
	fstream myFileReader;
	myFileReader.open("Numbers.txt");

	//myFileReader >> operation >> function;

	int size = 0;
	string number = " ";
	if (myFileReader) {
		while (!myFileReader.eof())
		{
			myFileReader >> number;
			size++;
		}
	}

	int* array = new int[number.length()];
	string a = "(";
	if (myFileReader)
	{
		for (int i = 0; i < number.length(); i++)
		{
			if (number.compare(i, number.length(), a) == true) {
				array[i] = i;
			}
		}
		for (int i = 0; i < number.length(); i++)
		{
			cout << array[i];
		}
		
		//myArray = array;
		//Size = size;

		for (int i = 1; i < Size; i++)
		{
			cout << " " << operation << " " << myArray[i];
		}
		cout << endl;


		if (operation == '/' && !(function == "ln")) {
			Division::calc(myArray, Size);
		}
		else if (operation == '/' && function == "ln")
		{
			ln(myArray, Size);
		}
		cout << endl;
		
	}*/

}

void Numbers::calc(double* myArray, int size)
{
}

	Numbers::~Numbers() {

	}
