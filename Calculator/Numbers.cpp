#include "Numbers.h"
#include "fstream"
#include "string"
#include "iostream"
using namespace std;

Numbers::Numbers() {

	fstream myFileReader;
	myFileReader.open("Numbers.txt");

	int size = 0;

	myFileReader >> operation;
	
	// cout << operation << endl;

	if (myFileReader) {
		while (!myFileReader.eof())
		{
			string number = " ";
			getline(myFileReader, number, '|');
			size++;
		}
	}

	// cout << size << endl;

	myFileReader.close();
	myFileReader.open("Numbers.txt");
	myFileReader >> operation;

	double* array = new double[size];

	if (myFileReader)
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

	myArray = array;
	Size = size;

	cout << myArray[0];
	for (int i = 1; i < Size; i++)
	{
		cout << " " << operation << " " << myArray[i];
	}
	cout << endl;

	if (operation == '/') {
		calc(myArray, Size);
	}
	cout << endl;
}

Numbers::~Numbers() {

}
