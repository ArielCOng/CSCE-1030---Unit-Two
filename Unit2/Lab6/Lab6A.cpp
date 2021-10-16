/*
Author: Ariel Ong (arielong@myunt.edu)

Date: 10 - 9 - 2020

Instructor: Professor Shrestha

Description: This program will calculate teh standard deviation of ten grades entered. It wil calculate the standard deviation by using the formula given.
 */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//Declaring Variables
	const int SIZE = 10; 
        int i;

	float grades[SIZE]; //declaring floating-point number array that can hold ten grades
	float mean;
	float sum = 0;
	float stanDev = 0; //standard deviation of grades
	
	for (i = 0; i < SIZE; ++i)  //loop for prompting all ten grades and for finding sum of grades
	{
		cout << "Enter grade for student " << i + 1 <<": "; 
		cin >> grades[i];

		sum = sum + grades[i];
	}

	mean = sum/SIZE;  //calculates mean

	for (i = 0; i < SIZE; ++i) //loop that finds the power of the difference
	{
		stanDev = pow(grades[i]-mean, 2) + stanDev;  
	}

	stanDev = sqrt((stanDev/SIZE)); //square root of the standard deviation divided by 10

	cout << "Your standard deviation is " << stanDev << endl; //output

	return 0;
}
