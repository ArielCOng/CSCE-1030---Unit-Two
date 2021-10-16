/*
Author: Ariel Ong (arielong@myunt.edu)

Date: 10 - 9 - 2020

Instructor: Professor Shrestha

Description: This program will create the reverse c-string of the original string that was inputed and compare the two to see if they are the same (palindrome).
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	//declaring variables
	string my_str;
	char reverse[21];
	int i, rev; 
	
	cout << "Enter a string up to 20 characters long: ";
	cin >> my_str;

	rev = my_str.length()-1;  //last letter of string

	for (i= 0; i < my_str.length(); i++)   //reverses order of characters in my_strings to reverse 
	{
		reverse[rev - i] = my_str.at(i); 
	}
	
	reverse[ my_str.length()] = '\0';         //adding null
	cout << "reverse is " << reverse << endl;
	
	bool equal = true;      //declaring boolean

	for (i= 0; i < my_str.length(); i++) //loop comparse characters of both cstrings
	{
		if( my_str.c_str()[i] != reverse[i])
		{
			equal = false;
			break;
		}		
		
	}
	
	if (equal == true)         //if-else to see if it is a palindrome
	{
		cout << my_str << " is a palindrome" << endl;
	}
	else
	{
		cout << my_str << " and " << reverse << " are not the same" << endl;
	}
	return 0;

}
