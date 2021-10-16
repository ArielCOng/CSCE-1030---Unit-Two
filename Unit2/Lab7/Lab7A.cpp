/*
	Name:  Ariel Ong (arielong@my.unt.edu) 
	Date: 10 - 15 - 2020
	Instructor: Professor Shrestha
	Description:This program will calculate the bonus of an employee based on base salary and years of experience.	
 */

#include <iostream>
using namespace std; 


double compute_bonus(double base_salary, int experience);

int main()
{
	double base_salary; //declaring base salary and experience
	int experience;

	cout << "Enter base salary: $";  //prompting for base salary
       	cin >> base_salary;
	cout << endl;

	cout << "Enter years of experience: ";
        cin >>	experience; //prompting for years of experience
	
	 cout << "Your bonus is: $" << compute_bonus(base_salary, experience) << endl << endl; //final output, returning bonus amout


        return 0;
}


/*
        Function: Deposit

        Parameters: A double representing account salary
                    An integer representing years of experience

        Return: A double representing the bonus

        Description: This function computes the bonus after inputs.

  */

        double compute_bonus(double base_salary, int experience) { 

                double bonus;  //declaring realBonus as double, realBonus is the bonus based off of experience and salary

                if (experience > 15)  //if statement for years of experience
                {
                        bonus  = base_salary * 0.05;
                }
                else
                {
                        bonus = base_salary * 0.025;
                }

                return bonus;   //returning realBonus

        }
	



