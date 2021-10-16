/*
Author: Ariel Ong (arielong@my.unt.edu)
Date: 9-25-2020
Instructor: Professor Shrestha
Description: This program will allow the user to multiply, add or find absolute difference of two user-entered integers

Function: Sum/Product/Absolute Difference
Parameters: Two User-input numbers
Return: What the user is lookign for: sum, product, absolute difference
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	enum Operation {Multiply = 'M', Addition = 'A', Difference = 'D'}; //Declaring Operation type
	int result;                             //result and num1 and num 2 are  integers
	int num1, num2;
	Operation my_operation;
	char choice;                          

	cout << "Enter two integers: "; cin >> num1 >> num2;   //Prompt for userinput
	

	do
	{
		cout << "'M' for Multiplication, 'A' for Addition, 'D' for Absolute Value of difference. Now, insert operation you want performed: " << endl; //Informing user of possible inputs
	       
		cin >> choice;               //asking for choice
	
		choice = toupper(choice);          //so that userinput will match values assigned to enumerated variables

		my_operation = static_cast<Operation>(choice);     //changing choice to an operation value and making it equal to my_operation
		
		switch (my_operation)
		{
			case Multiply:                              //Multiplying
				result = num1 * num2; 
				break;
			case Addition:                             //Adding
				result = num1 + num2;
				break;
			case Difference:                            //Absolute Value
				result = abs(num1 - num2);
				break;
			default:
				cout << " ERROR: Insufficient input; enter again" <<endl; //error statement
			        break;	
		}	
	
	}while ( choice != 'M' &&  choice != 'D' && choice != 'A');

	cout <<"The result of the operation is " << result << endl;

	return 0;
}
