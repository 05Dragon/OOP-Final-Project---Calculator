#include "Menu.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Addition.h"
#include "Division.h"
#include "Multiplication.h"
#include "Numbers.h"
#include "NaturalLog.h"
#include "Logarithmic.h"
#include "Sine.h"
#include "Cosecant.h"
#include "Secant.h"
#include "Cotangent.h"
#include "QuadraticEquation.h"
#include "Graph.h"
#include "ImagineryNumbers.h"
using namespace std;

Menu::Menu()
{
    std::cout << "Welcome to the supreme calculator" << endl;
    Numbers numbers;
    Addition addition;
    Division division;
    Multiplication multiplication;
    Logarithmic log;
    NaturalLog ln;
    Sine sin;
    Cosecant csc;
    Secant sec;
    Cotangent cot;
    QuadraticEquation quadratic;
    Graph graph;
    ImagineryNumbers imagineryNumbers;
    int counter = 0;
    int size = 0;

    if (numbers.getOpe() == '*' || (numbers.getOpe() == '/'))
    {
        std::cout << numbers.getArray()[0];
        for (int i = 1; i < numbers.getSize(); i++)
        {
            std::cout << " " << numbers.getOpe() << " " << numbers.getArray()[i];
        }
        std::cout << endl;
    }
    else if (numbers.getOpe() == 6 || numbers.getOpe() == 12) {
        string function = numbers.getFunction();
        std::cout << function << " " << numbers.getArray()[0];
        std::cout << endl;
    }
    
    switch (numbers.getOpe()) {
    case '+':
        addition.calc(numbers.getArray(), numbers.getSize());
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
    case 5:
        log.calc(numbers.getArray(), numbers.getSize());
        break;
    case 6:
        ln.calc(numbers.getArray(), numbers.getSize());
        break;
    case 7:
        sin.calc(numbers.getArray(), numbers.getSize());
        break;
    case 'cos':
        std::cout << "Cos";
        break;
    case 'tan':
        std::cout << "Tan";
        break;
    case 10:
        csc.calc(numbers.getArray(), numbers.getSize());
        break;
    case 11:
        sec.calc(numbers.getArray(), numbers.getSize());
        break;
    case 12:
        cot.calc(numbers.getArray(), numbers.getSize());
        break;
    case 13:
        quadratic.calc(numbers.getArray(), numbers.getSize());
        break;
    case 14:
        imagineryNumbers.calc(numbers.getArray(), numbers.getSize());
    case 15:
        imagineryNumbers.calc(numbers.getArray(), numbers.getSize());
    case 16:
        imagineryNumbers.calc(numbers.getArray(), numbers.getSize());
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
    case 18:
        graph.calc(numbers.getArray(), numbers.getSize());
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