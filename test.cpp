#include <iostream>
#include "equation.h"

void addtest()
{
	double result = add(2,3);
	if(result != 5)
	{
		std::cout << "Add(2,3) shuould be 5 but is " << result << std::endl;
	}
	else
	{
		std::cout << "Addtest passed" << std::endl;
	}
}

void multiplytest()
{
	double result = multiply(2,3);
	if(result != 6)
	{
		std::cout << "multiply(2,3) shuould be 6 but is " << result << std::endl;
	}
	else
	{
		std::cout << "multiplytest passed" << std::endl;
	}
}

void powtest()
{
	double result = pow(2,3);
	if(result != 8)
	{
		std::cout << "pow(2,3) shuould be 8 but is " << result << std::endl;
	}
	else
	{
		std::cout << "powtest passed" << std::endl;
	}
}

void equationtest()
{
	double result = equation();
	if(result != 512)
	{
		std::cout << "equation(2,3) shuould be 8 but is " << result << std::endl;
	}
	else
	{
		std::cout << "equationtest passed" << std::endl;
	}
}



int main()
{
	addtest();
	multiplytest();
	powtest();
	equationtest();
	return 0;
}
