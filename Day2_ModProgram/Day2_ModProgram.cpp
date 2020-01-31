
/*
CSCI 182 - Assignment 1
Day2_ModProgram.cpp
Manually create a Mod function for use

Lydia Pierce
v1.0 1/31/2020
*/

#include <iostream>



/// <summary>
/// Get the min value of two input values.
/// </summary>
/// <param name="valueA"></param>
/// <param name="valueB"></param>
/// <returns></returns>
int GetMinValue(int valueA, int valueB)
{
	if (valueA < valueB)
		return valueA;
	else
		return valueB;
}

/// <summary>
/// This function finds the remainder after dividing two values.
/// </summary>
/// <param name="valA"></param>
/// <param name="valB"></param>
/// <returns></returns>
int Mod1(int valA, int valB)
{
	// If the divisor is less than valA, it divides it 0 times, and the reminder is the divisor.
	if (valA < valB)
		return valB;
	// If the divisor is 0, it is undefined and returns a -1
	else if (valB == 0)
		return -1;
	// Subtract valB from valA repeatedly until valA is smaller than valA. Then return valA, and that is the remainder.
	else
	{
		while (valA >= valB)
		{
			valA = valA - valB;
		}
		return valA;
	}
}

/// <summary>
/// This function finds the reminder when value1 is divided by value2.
/// </summary>
/// <param name="value1"></param>
/// <param name="value2"></param>
/// <returns></returns>
int Mod2(int value1, int value2)
{
	// If the divisor is greater than value1, the remainder is the divisor.
	if (value1 < value2)
		return value2;
	// If the divisor is zero, it is undefined and returns -1 to print a different message.
	else if (value2 == 0)
		return -1;
	// value2 divides value1 a certain number of times. That number is multiplied by value2 and subtracted from value1 to get the remainder.
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

	int A = 400;
	int b = 220;

	// Find the minimum value and pretty print it to the screen.
	std::cout << "Min Value: " << GetMinValue(A, b) << "\n";

	// Find the remainder when a is divided by b and pretty print it to the screen.
	if (Mod1(A, b) + Mod2(A, b) > -1)
	{
		std::cout << "According to Mod1, the remainder when " << A << " is divided by " << b << " is " << Mod1(A, b) << ".\n";
		std::cout << "According to Mod2, the remainder when " << A << " is divided by " << b << " is " << Mod2(A, b) << ".\n";
	}
	// In the case where the divisor is zero, it returns as undefined.
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
