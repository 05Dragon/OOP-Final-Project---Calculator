#include "game1.h"
using namespace std;

//Display the menu
void game1::menu()
{
    cout << endl;
    cout << "Select an option" << endl;
    cout << "Option A: 1 digit numbers" << endl;
    cout << "Option B: 2 digit numbers" << endl;
    cout << "Option C: 3 digit numbers" << endl;
    cout << "Option D: 4 digit numbers" << endl;
}


//Generates the values for the game and adds them to an array
double* game1::generateValues(double* values, int min, int max)
{
    for (int i = 0; i < SIZE; i++)
    {
        values[i] = min + rand() % (max - min + 1);
    }
    return values;
}

//Makes the user select and option and checks if it is valid
int game1::select(char option)
{
    cin >> option;
    while (option != 'A' && option != 'B' && option != 'C' && option != 'D')
    {
        cout << "This is a invalid option, please try again" << endl;
        cin >> option;
    }
    return option;
}

//This is where the game is played, the timer is created, the correct answer to the question is calculated and the answer inputed is checked.
void game1::game()
{
    fstream reader; //Creates a reader
    reader.open("Results.txt"); //Opens the file where the result is found

    cout << endl;

    //Counts to ten seconds while printing after each second happens
    for (int i = 0; i < 10; i++)
    {
        sleep_until(system_clock::now() + 1s);
        cout << i + 1 << "..." << endl;
    }

    //According to the operation, calls the proper function
    if (ope == '+')
    {
        num = calcGamePlus(tempNums);
    }
    if (ope == '*')
    {
        num = calcGameMultiply(tempNums);
    }
    if (ope == '-')
    {
        num = calcGameSubtract(tempNums);
    }

    //Reads the result
    reader >> result;

    //Checks if the answer inputed by the user is correct. It tells the user if its correct, incorrect or if the input is invalid
    if (num == result)
    {
        cout << "The correct answer is: " << result << endl;
        cout << "You inputed: " << num << endl;
        cout << "The answer is correct" << endl;
    }
    else if (num != result && num != -10000)
    {
        cout << "The correct answer is: " << result << endl;
        cout << "You inputed: " << num << endl;
        cout << "The answer is wrong" << endl;
    }
    else if (num == -10000)
    {
        cout << "Invalid input, your answer must be a number" << endl;
    }

    //Closes the reader
    reader.close();
}

//Virtual function that collects the answe from the user, if the answer is not a number (it is immediately returned
//to game where it is printed that this is an invalid input). If it is a valid input, it calls the function in the Addition class
double game1::calcGamePlus(double* tempNums)
{
    cout << "What is the result?" << endl;

    if (cin >> num)
    {
        Addition::calcGamePlus(tempNums); //Calls virtual function in the Addition class
        return num;
    }
    else
    {
        return -10000;
    }
}

//Virtual function that collects the answe from the user, if the answer is not a number (it is immediately returned
//to game where it is printed that this is an invalid input). If it is a valid input, it calls the function in the Multiplication class
double game1::calcGameMultiply(double* tempNums)
{
    cout << "What is the result?" << endl;

    if (cin >> num)
    {
        Multiplication::calcGameMultiply(tempNums); //Calls virtual function in the Mutiplication class
        return num;
    }
    else
    {
        return -10000;
    }
}

//Virtual function that collects the answe from the user, if the answer is not a number (it is immediately returned
//to game where it is printed that this is an invalid input). If it is a valid input, it calls the function in the Subtraction class
double game1::calcGameSubtract(double* tempNums)
{
    cout << "What is the result?" << endl;

    if (cin >> num)
    {
        Subtraction::calcGameSubtract(tempNums);  //Calls virtual function in the Subtraction class
        return num;
    }
    else
    {
        return -10000;
    }
}

//This function selects a random operation and shows the user what they need to calculate, also puts the numbers to be calculated in an array tempNums which will be sent to
//the respective class where the result will be calculated
void game1::calculateNums(double* numbers)
{
    int operation = 1 + rand() % (3 - 1 + 1); //Generates a random number from 1 to 3

    //The random number is matched with an operation and "ope" is made equal to this
    for (int i = 0; i < gameSize; i++)
    {
        if (operation == 1)
        {
            ope = '+';
        }
        else if (operation == 2)
        {
            ope = '-';
        }
        else if (operation == 3)
        {
            ope = '*';
        }
        //Tells the user the calculation to be performed, add the number to tempNums array and calls the game() function.
        //Determines how many times out of three the game has been played and changes the numbers on the tempNums array depending on it
        if (i == 0)
        {
            cout << numbers[0] << " " << ope << " " << numbers[1] << " = ?" << endl;
            tempNums[0] = numbers[0];
            tempNums[1] = numbers[1];
            game();
        }
        else if (i == 1)
        {
            cout << numbers[2] << " " << ope << " " << numbers[3] << " = ?" << endl;
            tempNums[0] = numbers[2];
            tempNums[1] = numbers[3];
            game();
        }
        else if (i == 2)
        {
            cout << numbers[4] << " " << ope << " " << numbers[5] << " = ?" << endl;
            tempNums[0] = numbers[4];
            tempNums[1] = numbers[5];
            game();
        }
    }
}

//Constructor for the game, inititializes variables
game1::game1()
{
    num = 0;
    result = 0;
    numbers = new double[SIZE];
    tempNums = new double[2];
}

//Starts the game, prints a welcome message and calls the functions needed for proper function. It also sets the minimum and
//maximum values depending on the option selected
void game1::start()
{
    cout << "Welcome to CalculatorEngine, where being fast matters the most!!" << endl;
    srand(time(0)); //Allows the creation of random numbers
    char option = ' ';
    int min = 0;
    int max = 0;

    menu(); // Calls menu() function
    option = select(option); //Calls option() and gets the value selected

    //Depending on the option selected sets the minimim and maximum numbers and starts the game
    switch (option)
    {
    case 'A':
        cout << "You chose option A (1 digit numbers)" << endl;
        cout << "Let's begin" << endl;
        min = 1;
        max = 9;
        numbers = generateValues(numbers, min, max);
        calculateNums(numbers);
        break;
    case 'B':
        cout << "You chose option B (2 digit numbers)" << endl;
        cout << "Let's begin" << endl;
        min = 10;
        max = 99;
        numbers = generateValues(numbers, min, max);
        calculateNums(numbers);
        break;
    case 'C':
        cout << "You chose option C (3 digit numbers)" << endl;
        cout << "Let's begin" << endl;
        min = 100;
        max = 999;
        numbers = generateValues(numbers, min, max);
        calculateNums(numbers);
        break;
    case 'D':
        cout << "You chose option D (4 digit numbers)" << endl;
        cout << "Let's begin" << endl;
        min = 1000;
        max = 9999;
        numbers = generateValues(numbers, min, max);
        calculateNums(numbers);
        break;
    }
    delete[] numbers; //Deletes dynamically allocated array
    delete[] tempNums; //Deletes dynamically allocated array
}

//Destructor for game1
game1::~game1()
{
}