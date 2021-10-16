/*
Name : Ariel Ong (arieolong@my.unt.edu)
Date: 10 - 9 - 2020
Professor Shrestha
Description: This program will use 2D arrays to calculate and display each student's average over four assignments
  */

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{	
	//Declaring integers
	const int ROWS = 3; 
	const int COLS = 4;
	float sum = 0;
	string names [ROWS] = {"John", "Sallie", "Mary"}; //row of name

	char gradebook [ROWS][COLS] = {   //what is inside the gradebook
		{90, 40, 65, 80}, //ROW FOR JOHN
		{95, 93, 91, 88}, //ROW FOR SALLIE
		{72, 57, 84, 91} //ROW FOR MARY 
	};
	
	int i;  //declaring i
	int j;  //declaring j
	float average; //declaring average as float 
	
	for(i = 0; i < ROWS; i++) //for loop for calculating sum by row
	{
		sum  = 0;     

		for(j = 0; j < COLS; j++) //for loop for calculating by column
		{
			sum = gradebook[i][j] + sum;	//inserting values into array

		}
		average = sum/COLS;     //dividing by the number of grades the student has 
		cout << "Average of " <<  names[i] << ": " << fixed << setprecision(2) << average << endl; 
			//output
	}

	
	return 0;
}
