/*
Author: Ariel Ong
Date : 10 - 23 -2020
Instructor: Professor Shrestha
Description: This program will output Matrix1 and Matrix2 and Matrix3. It will come up with Maxtrx3 by adding Matrix 1 and Matrix 2 together
*/

#include <iostream>
using  namespace std;

const int COLS = 5; //declaring COLS as constant integer
void printMatrix( const int matrix[][COLS], const int SIZE); //function declaration for printMatrix
void addMatrices(const int matrix_1[][COLS], const int matrix_2[][COLS], int matrix_3[][COLS], const int SIZE); //function declaration for addMatrices

int main() //main program
{
	const int ROWS = 3; //declaring ROWS as const int and defining it as 3

	int matrix1[ROWS][COLS]; //declaring
	int matrix2[ROWS][COLS]; //declaring
	int matrix3[ROWS][COLS]; //declaring
	
	for( int i = 0; i < ROWS; i++)
	{
		for( int j = 0; j < COLS; j++)
		{
			matrix1[i][j] = (rand() % 11) + 10; //giving value to matrix1
			matrix2[i][j] = (rand() % 16) + 25; //giving value to matrix2
		}

	}

	cout << "MATRIX1:" << endl; 
	printMatrix(matrix1, ROWS); //outputting matrix 1
	cout << endl;

	cout << "MATRIX2:" << endl;
	printMatrix(matrix2, ROWS); //outputting matrix2
        cout << endl;
	
	cout << "MATRIX3:" << endl;
        addMatrices(matrix1, matrix2, matrix3, ROWS); //outputting matrix3, which is the sum matrix 1 and matrix 2 
       	cout << endl;

	return 0; 
}

/* Function: printMatrix
 *
 * Parameters: constant integer matrix representing chosen matrix and number of rows
 *
 * Return: nothing, but the chosen matrix is printed
 *
 * Description: This function prints out the desired matrix in matrix form

 */

void printMatrix( const int matrix[][COLS], int SIZE) //function definition
{
	for ( int i = 0; i < SIZE; i++)
        {
                for( int j = 0; j < COLS; j++)
                {
			cout << matrix[i][j] << " ";
		}
		cout << endl; //new line for every row
	}
}

/* Function: addMatrices
 *
 * Parameters: constant integer matrix representing matrix2, constant integer matrix representing matrix3, and integer representing number of rows
 *
 * Return: nothing but prints out sum of matrix 1 and matrix 2 under matrix3
 *
 * Description: This function adds matrix 1 and matrix 2 under the name matrix3

 */

void addMatrices(const int matrix_1[][COLS], const int matrix_2[][COLS], int matrix_3[][COLS], int SIZE) //function definition
{
	 for ( int i = 0; i < SIZE; i++)
        {
                for( int j = 0; j < COLS; j++)
                {
                        matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];
			cout << matrix_3[i][j] << " ";  //printing out sum betwee matrix 1 and 2
                }
                cout << endl; //newline for new row
        }
}

