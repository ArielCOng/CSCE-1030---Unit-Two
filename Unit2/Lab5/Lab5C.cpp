/*Author: Ariel Ong (arielong@my.unt.edu)

Date: 9/25/2020

Instructor: Professor Shrestha

Description: This program will count the number of letters of the alphabet, digits, whitespaces and special characters in a user entered string/ Special characters include  anything that is not a digits and whitespaces as well.

Function: This program will count the number of characters and special characters

Parameters: String entered by User

Return: Number of characters and special characters in the string
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string user_string; //declaring user_string as a string
	int num_char;       //number of normal characters
	int special_char = 0;   //number of special characters
	int i; 		    //loop variable/number of times program will run
	char k;             //will be set equal to user_string, just to make writing code easier 
	int sum_digit = 0;  //total number of digits
	int sum_alpha = 0;  //total number of alphabets
	int sum_space = 0;  //total number of spaces

	cout << "Enter your message: "; //prompting for user input
	getline (cin,  user_string);    //get line will get ALL of the message
	
	for (i = 0; i < user_string.length(); ++i )
	{
		k = user_string[i]; 
		if (isalpha(k)){     //if statement for if userstring has letters
			sum_alpha++;
		}
		else if (isdigit(k)) //in order to count the number of digits inside
		{
			sum_digit++;
		}	
		else if (isspace(k)) //in order to count the number of spaces inside
		{
			sum_space++;
		}
		else
		{
			special_char++;  //characters other than spaces, digits, and alphabets
		}
	}

	num_char = (sum_digit + sum_alpha + sum_space); //add the sum of digits, spaces, and letters
	

	cout << "You have " << num_char << " characters." << endl;  //show the number of characters
	cout << "You have " << special_char << " special characters." << endl; //show the total number of special characters
	

	return 0;
	} 

