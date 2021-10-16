/*
        Name:  Ariel Ong (arielong@my.unt.edu)
        Date: 10 - 15 - 2020
        Instructor: Professor Shrestha
        Description: This program compares the sums of two strings together. 
*/

#include <iostream>
#include <string>
using namespace std;

/*
        Function: isLarger 

        Parameters: str1 and str2

        Return: Boolean value 

	Description: This function compares the sum of both strings and returns a boolean value based on the values of the two sums. 
  */

bool isLarger(string str1, string str2)
{
	bool larger; //declaring variables 
	int i;   
	int sum1 = 0; 
	int sum2 = 0;

	for (i = 0; i <  str1.length(); ++i){ //for loop for first string

		sum1 = sum1 + str1[i];   //calculating sum for string 1

	}
	
	 for (i = 0; i <  str2.length(); ++i){ //for loop for first strng

                sum2 = sum2 + str2[i];   //calculating sum for string 2

        }

	 if (sum1 > sum2) //comparing sums 
	 {
		larger = true;
	 }
	 else 
	 {
		larger = false;
	 }

	return larger; 
}

int main ()
{
	string str1;  //declaring variables 
	string str2;
	bool larger;

	cout << "Enter string one: "; //prompting for the first string
	getline (cin, str1); 

	cout << "Enter string two: "; //prompting for the second string
	getline (cin, str2); 

	larger = isLarger(str1, str2); 

	if (larger) //if else statement for boolean
	{
		cout << "str1 has larger ASCII sum." << endl; //str1 > str2
	}
	else
	{
		cout << "str1 does not have larger ASCII sum. " << endl; //str1 > str2
	}

	return 0;
}
