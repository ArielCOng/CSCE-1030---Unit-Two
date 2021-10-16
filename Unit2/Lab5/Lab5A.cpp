/*
Author: Ariel Ong (arielong@my.unt.edu)
Date: 9/25/2020
Instructor: Professor Shrestha
Description: This program will find the sum of all numbers between any two seeded randomly generated numbers, inclusively, where the randomly generated numbers are also included in the sum. 
Function: This program will find the sum of all the numbers between the two numbers randomly generated; the two numbers will be included in the sum
Parameters: numbers randomly generated
Return: sum between the two numbers, including the two numbers
*/ 

#include <iostream>
#include<cstdlib>
using namespace std; 
int main ()
{
	
	int firstNumber;    //firstNumber will have a range between 1 and 10, meaning 10 possible choises
	int secondNumber;   //secondNumber will have a range between 11 and 20, meaning 10 possible choicses as well
	int sum;	    //declaring 
	int i;		    //Instructions did not specify the termination condition, so integer i is will be used for termination condition

	i = 0;

	while ( i < 5 )     //Instructions did not specify the termination condition, so the program will run the fove different seets of numbers and their sums
	{
		firstNumber = (rand()% 10) + 1;	     //10 possible choices starting from one. (1,2,3,4,5,6,7,8,9,10)
       		secondNumber = (rand()% 10) + 11;    //10 possible choices starting from 11. (11,12,13,14,15,16,17,18,19,20
	
		sum =( (secondNumber * (secondNumber +1)) - (firstNumber * (firstNumber -1)))/2;
	

		cout << "The first number is '" << firstNumber << "'" << endl;
		cout << "The second number is '" << secondNumber << "'" << endl;
		cout << "The sum of all the numbers between the two numbers, plus the two numbers, is  '" << sum << "'" << endl;
		cout << endl;

		firstNumber = (rand()% 10) + 1;     
	        secondNumber = (rand()% 10) + 11; 
	
		i++;
	}

	return 0;
}
