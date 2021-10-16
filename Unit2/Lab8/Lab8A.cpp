/*
Author: Ariel Ong
Date : 10 - 22 -2020
Instructor: Professor Shrestha
Description: The program uses the two inputs, updates them to be used, and then finds the average of the two values. 
 */

#include <iostream>
using  namespace std;

const int PASS_GRD = 70;
float get_grades(float& grd1, float& grd2);        // function get_grade
void curve_grades(float avgGrade, float& grade1, float& grade2); //function curve_grade

int main()  //main program
{
	float grd1, grd2, avg; //declaring float

	avg = get_grades(grd1, grd2); //calling get_grade function to make it equal to avg
	cout << "grd1 = " << grd1 << " grd2 = " << grd2 << endl; //prompting for input

	if (avg < PASS_GRD) //if statement
	{
		curve_grades(avg, grd1, grd2); //calling curve_grades

	}
	else
	{
		cout << "No curve" << endl; //else staement if avg is more than 70
	}

	cout << "grd1 = " << grd1 << " grd2 = " << grd2 << endl; // final cout statement

	return 0;
}

/* Function: get_grades
 *
 * Parameters: grd1, grd2
 *
 * Return: average of the two grades inputted
 *
 * Description: This function prompts for two grades and then returns the average of them.

 */
float get_grades(float& grd1, float& grd2) //function for float get_grades 
{
	cout << "Enter first grade: ";   //function body, prompting for input
	cin >> grd1;

	cout << "Enter second grade: ";
	cin >> grd2;

	return (grd1 + grd2)/2; //returning the average of the two numbers

}

/*Function: curve_grades
 *
 * Parameters: float representign average, float representing grade1, float representing grade2
 *
 * Return = updated grades after curve
 *
 * Description: this program will curve the grades according to the curve processesd inthe function. 
 */
void curve_grades(float avg, float& grad1, float& grad2)
{
	float curve; //setting curve to a value 
	
	curve = PASS_GRD - avg; //curbe is equal to 70-avg

	grad1 = (curve + grad1); //new val

	grad2 = (curve + grad2);
}
