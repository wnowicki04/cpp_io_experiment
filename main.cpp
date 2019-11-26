#include <iostream> //input/output system for conhost (NT source)
#include <string> //support for data strings (NT source)
#include "functions.h" //custom header used for implementing functions

int main()
{
	//body of the main function, every previously defined function entered here with required parameters will be executed in conhost debugger
	std::cout << "Copyright (c) wnowicki04, 2019." << std::endl;
	
	is_it_even(a, b); //@ref H_FUNCTIONS
	swap(c, d); //@ref H_FUNCTIONS

	std::cout << "thank you for using this program" << std::endl;
	std::cout << "source: https://www.github.com/wnowicki04/cpp_io_experiment/" << std::endl;
	getchar();
	return 0;
}