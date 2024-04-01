#include "Graph.h"
#include <iostream>

Graph::Graph()
{
}

void Graph::calc(double* myArray, int size) {

    double left_limit = myArray[0];
    double right_limit = myArray[1];
    double slope = myArray[2];
    double intercept = myArray[3];

    // Calculate the range
    double range = right_limit - left_limit;

    // Calculate the step size for the x-axis
    double step_size = range / 20;  // We'll print 20 points

    // Print the x-axis
    std::cout << "|";
    for (int i = 0; i < 20; i++) {
        std::cout << "-";
    }
    std::cout << "|\n";

    for (double x = left_limit; x <= right_limit; x += step_size) {
        // Calculate the corresponding y value
        double y = (slope * x) + intercept;

        // Calculate the position of the '*' symbol
        int position = static_cast<int>((y / range) * 20);

        // Print the line with the '*' symbol at the correct position
        std::cout << "|";
        for (int i = 0; i < 20; i++) {
            if (i == position) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "|\n";
    }

    // Print the x-axis again
    std::cout << "|";
    for (int i = 0; i < 20; i++) {
        std::cout << "-";
    }
    std::cout << "|\n";
}

Graph::~Graph()
{
}