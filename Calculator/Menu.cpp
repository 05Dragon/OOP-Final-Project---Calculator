#include "Menu.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "NaturalLog.h"
#include "Division.h"
#include "Multiplication.h"
#include "Numbers.h"
#include "Cotangent.h"
#include "QuadraticEquation.h"
using namespace std;

Menu::Menu()
{
    std::cout << "Welcome to the supreme calculator" << endl;
    Numbers numbers;
    Division division;
    Multiplication multiplication;
    NaturalLog ln;
    Cotangent cot;
    QuadraticEquation quadratic;
    int counter = 0;
    int size = 0;

    if (numbers.getOpe() != 0)
    {
        std::cout << numbers.getArray()[0];
        for (int i = 1; i < numbers.getSize(); i++)
        {
            std::cout << " " << numbers.getOpe() << " " << numbers.getArray()[i];
        }
        std::cout << endl;
    }
    else if (numbers.getOpe() < 10) {
        string function = numbers.getFunction();
        std::cout << function << " " << numbers.getArray()[0];
        std::cout << endl;
    }
    
    switch (numbers.getOpe()) {
    case '+':
        std::cout << "Addition";
        break;
    case '-':
        std::cout << "Subtraction";
        break;
    case '*':
        multiplication.calc(numbers.getArray(), numbers.getSize());
        break;
    case '/':
        division.calc(numbers.getArray(), numbers.getSize());
        break;
    case 'log':
        std::cout << "Logarithm";
        break;
    case 0:
        ln.ln(numbers.getArray(), numbers.getSize());
        break;
    case 'sin':
        std::cout << "Sin";
        break;
    case 'cos':
        std::cout << "Cos";
        break;
    case 'tan':
        std::cout << "Tan";
        break;
    case 'csc':
        std::cout << "Csc";
        break;
    case 'sec':
        std::cout << "Sec";
        break;
    case 8:
        cot.calc(numbers.getArray(), numbers.getSize());
        break;
    case 9:
        quadratic.calc(numbers.getArray(), numbers.getSize());
        break;
    case 'G1':
        std::cout << "Tomas' game";
        break;
    case 'G2':
        std::cout << "Game 2";
        break;
    case 'G3':
        std::cout << "Game 3";
        break;
    case 'G4':
        std::cout << "Game 4";
        break;
    default:
        std::cout << "Please try again";
        break;
    }

    std::cout << endl;
}

Menu::~Menu()
{
}