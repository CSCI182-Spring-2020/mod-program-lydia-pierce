
/*
CSCI 182 - Assignment 1
Day2_ModProgram.cpp
Manually create a Mod function for use

Lydia Pierce
v1.0 1/29/2020
*/

#include <iostream>



//Get the min value of two input values
int GetMinValue(int valueA, int valueB)
{
	if (valueA < valueB)
		return valueA;
	else
		return valueB;
}

int Mod1(int valA, int valB)
{
	if (valA < valB)
		return valB;
	else if (valB == 0)
		return -1;
	else
	{
		while (valA >= valB)
		{
			valA = valA - valB;
		}
		return valA;
	}
}

int Mod2(int value1, int value2)
{
	if (value1 < value2)
		return value2;
	else if (value2 == 0)
		return -1;
	else
	{
		int divide = value1 / value2;
		int remainder = value1 - (value2 * divide);
		return remainder;
	}
}

int main()
{
	//    std::cout << "Hello World!\n";

	int a = 19;
	int b = 19;

	// Find the minimum value and pretty print it to the screen
	std::cout << "Min Value: " << GetMinValue(a, b) << "\n";

	// Find the remainder when a is divided by b and pretty print it to the screen
	if (Mod1(a, b) + Mod2(a, b) >= 0)
	{
		std::cout << "According to Mod1, the remainder when " << a << " is divided by " << b << " is " << Mod1(a, b) << ".\n";
		std::cout << "According to Mod2, the remainder when " << a << " is divided by " << b << " is " << Mod2(a, b) << ".\n";
	}
	else 
	{
		std::cout << "Mod1 and Mod2 are undefined when b is " << b << ".\n";
	}
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
