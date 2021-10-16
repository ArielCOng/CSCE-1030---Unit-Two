/*
Author: Ariel Ong
Date : 10 - 23 -2020
Instructor: Professor Shrestha
Description: Complies and outputs current price of grocery store product; it adjusts some prices according to inflation.
*/

#include <iostream>
using  namespace std;

const int SIZE = 6; //declaring size as 6 and as a constant

void print_prices(const float prices[], int size);//function declaration for print_prices
void  update(float price[], const bool raisePrice[], int size); //function declaration for print_prices

int main() //main program
{
	bool raise_price[SIZE]; //declaring riase_price[SIZE] as bool
	float prices[SIZE] = {4.25, 0.99, 3.29, 1.80, 2.19, 6.59}; //initializing prices[SIZE]
	


	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2); //sets number of decimal places

	cout << "Orignial: "; //couts print_prices array

	print_prices(prices, SIZE); //calls print_prices

	srand(time(NULL)); //makes rand truly random

	for (int i = 0; i < SIZE; i++) //initializes raise_price randmly 
	{
		raise_price[i] = rand() % 2;
	}
	
	update(prices, raise_price, SIZE); //calls update function


	cout << "Updated : "; //couts newly updated functions

	print_prices(prices, SIZE);

	return 0;

}
/*
 *Function: print_prices
 *Parameter: float array that represents prices, int that represents size of array
 *Return: returns nothing but original prices are printed out
 *Description: This program prints out the float numbers in the prices[SIZE] function
 */
void print_prices(const float prices[], int size) //function definition
{
	for (int i = 0; i < size; i++)    //for loop to determine each value
	{
		cout << "$" << prices[i] << " ";
	}
	cout << endl;

	return;

}
/*
 *Function: print_prices
 *Parameter: float array that represents prices, int that represents size of array
 *Return: returns nothing but original prices are printed out
 *Description: This program prints out the float numbers in the prices[SIZE] function
 */

void  update(float price[], const bool raisePrice[], int size) //function definition
{
	for( int i = 0; i < size; i++) //for loop to go through array
		{
			
			if (raisePrice[i] == 1)
			{
				price[i] = 1.10 * price[i]; //in order to get price[i] woth 10% price incrs

			}




		}
	return;
	}
