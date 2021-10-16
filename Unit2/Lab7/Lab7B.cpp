/*
        Name:  Ariel Ong (arielong@my.unt.edu)
        Date: 10 - 15 - 2020
        Instructor: Professor Shrestha
	Description: This program compares the inputed guess to the random number. 
*/

#include <iostream>
#include <cstdlib>
#include <time.h> 
using namespace std;

/*
        Function: getRandom

        Parameters: None

        Return: Random Number between 1 and 100

        Description: This function generates a seeded random number between 1 and 100, inclusive.

  */

int getRandom()
{
	srand(time(0));   //to make it truly random
	int randNum = (rand() % 100) + 1;   //includes 100 and 1 
	return randNum;  //the random number

}

/*
        Function: compare(int guess)

        Parameters: The guess the user input (integer)

        Return: A cout statement on its balue

        Description: This function computes whether the guess is the same as the random number.

  */
void compare(int guess)
{

	if (guess > getRandom()) //if guess is bigger than the generated number 
	{
	    cout << "Incorrect. Random Number is " << getRandom() << ". Your guess was greater than the random number."  << endl; 

	}
	
	else if (guess < getRandom())  // If the guess is less than the generated number
	{
		cout << "Incorrect. Random Number is " << getRandom() << ". Your guess was less than the random number." << endl;
	}

	else   //if the guess is the same as the generated number
	{ 
		cout << "Correct. The random number is " << getRandom() << endl; 
	}
	return;
}


int main(){

	int guess; //setting guess as integer
	cout << "Insert guess: "; //output
	cin >> guess; 
        compare(guess);//calling cmpare function

	return 0;
}
