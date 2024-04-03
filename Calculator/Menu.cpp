//Summon Header files and libraries
#include "Menu.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Addition.h"
#include "Subtraction.h"
#include "Division.h"
#include "Multiplication.h"
#include "Numbers.h"
#include "NaturalLog.h"
#include "Logarithmic.h"
#include "Sine.h"
#include "Cosine.h"
#include "Tangent.h"
#include "Cosecant.h"
#include "Secant.h"
#include "Cotangent.h"
#include "QuadraticEquation.h"
#include "Graph.h"
#include "ImagineryNumbers.h"
#include "Game1.h"
#include "SecretNumberguess.h"
using namespace std;

Menu::Menu()
{
    //Display all options and call appropriate functions
    std::cout << "Welcome to the supreme calculator" << endl;
    Numbers numbers;
    Addition addition;
    Subtraction subtraction;
    Division division;
    Multiplication multiplication;
    Logarithmic log;
    NaturalLog ln;
    Sine sin;
    Cosine cos;
    Tangent tan;
    Cosecant csc;
    Secant sec;
    Cotangent cot;
    QuadraticEquation quadratic;
    Graph graph;
    ImagineryNumbers imagineryNumbers;
    game1 game1;
    SecretNumberguess game2;
    int counter = 0;
    int size = 0;

    if (numbers.getOpe() == '*' || numbers.getOpe() == '/' || numbers.getOpe() == '+' || numbers.getOpe() == '-')
    {
        std::cout << numbers.getArray()[0];
        for (int i = 1; i < numbers.getSize(); i++)
        {
            std::cout << " " << numbers.getOpe() << " " << numbers.getArray()[i];
        }
        std::cout << endl;
    }
    else if (numbers.getOpe() == 5 || numbers.getOpe() == 6 || numbers.getOpe() == 7 || numbers.getOpe() == 8 || numbers.getOpe() == 9 || numbers.getOpe() == 10 || numbers.getOpe() == 11 || numbers.getOpe() == 12) {
        string function = numbers.getFunction();
        std::cout << function << " " << numbers.getArray()[0];
        std::cout << endl;
    }
    
    switch (numbers.getOpe()) {
    case '+':
        addition.calc();
        break;
    case '-':
        subtraction.calc();
        break;
    case '*':
        multiplication.calc();
        break;
    case '/':
        division.calc();
        break;
    case 5:
        log.calc();
        break;
    case 6:
        ln.calc();
        break;
    case 7:
        sin.calc();
        break;
    case 8:
        cos.calc();
        break;
    case 9:
        tan.calc();
        break;
    case 10:
        csc.calc();
        break;
    case 11:
        sec.calc();
        break;
    case 12:
        cot.calc();
        break;
    case 13:
        quadratic.calc();
        break;
    case 17:
        game1.start();
        break;
    case 18:
        game2.guessgame();
        break;
    case 19:
        imagineryNumbers.calc();
    case 20:
        //graph.calc();
        break;
    default:
        std::cout << "Please try again";
        break;
    }

    std::cout << endl;
}
//Implement destructor
Menu::~Menu()
{
}