#include <iostream> //input/output system for conhost (NT source)
#include <string> //support for data strings (NT source)
#include "functions.h" //custom header used for implementing functions
//C++ source file used for defining functions implemented in H_FUNCTIONS

int a; //@param a - integer number, to be defined by console input
int b; //@param b - integer number, to be defined by console input
int c; //@param c - integer number, to be defined by console input
int d; //@param d - integer number, to be defined by console input

void is_it_even(int& a, int& b) //@ref H_FUNCTIONS
{
	std::cout << "enter a value (int& a): ";
	std::cin >> a;
	std::cout << "enter a value (int& b): ";
	std::cin >> b;
	
	if (a % 2 == 0 && a > 0 || a % 2 == 0 && a < 0) //@arg a % 2 == 0 && a > 0 !! a < 0 - modulo 2 of int& a is 0 and int& a is greater or lesser than 0
		std::cout << "@param a is an even number" << std::endl;
	else if (a == 0) //@arg a == 0 - int& a has been assigned with a value of 0, therefore it cannot be pressumed to be an even number
		std::cout << "@param a has been assigned with a value of 0" << std::endl;
	else
		std::cout << "@param a is an uneven number" << std::endl;
	
	if (b % 2 == 0 && b > 0 || b % 2 == 0 && b < 0) //@arg a % 2 == 0 && a > 0 !! a < 0 - modulo 2 of int& b is 0 and int& b is greater or lesser than 0
		std::cout << "@param b is an even number" << std::endl;
	else if (b == 0) //@arg b == 0 - int& b has been assigned with a value of 0, therefore it cannot be pressumed to be an even number
		std::cout << "@param b has been assigned with a value of 0" << std::endl;
	else
		std::cout << "@param b is an uneven number" << std::endl;
}

std::string y_or_n; //yes/no string

void swap(int& c, int& d, int temp) //@ref H_FUNCTIONS
{
	std::cout << "enter a value (int& c): ";
	std::cin >> c;
	std::cout << "enter a value (int& d): ";
	std::cin >> d;

	std::cout << "int& c = " << c << ", int& d = " << d << std::endl;
	std::cout << "is this correct? [y/n]: ";
	std::cin >> y_or_n;

    if (y_or_n == "y") //@arg y_or_n == "y" - data string y_or_n has been assigned with a string of following content: "y"
		std::cout << "values of int& c and int& d have been swapped" << std::endl;
	    std::cout << "int& c = " << c << ", int& d = " << d << std::endl;
	else if (y_or_n == "n") //@arg y_or_n == "n" - data string y_or_n has been assigned with a string of following content: "n"
		swap(c, d);
	else
		std::cout << "undefined response" << std::endl;
}