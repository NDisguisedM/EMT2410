//============================================================================
// Name        : Lab3FinalVersion.cpp
// Author      : Nikolai Markov
// Version     : V 3.5.2
// Copyright   : GPL V2
/* Description : Lab 3: Ask user for 5 values, find Max and Min, ask user to
               : input 9 or 0, if 9 display max, if 0, display min          */
//============================================================================

#include <iostream>
using namespace std;

//---FUNCTION DECLARATIONS-----------------------------------------------------------------------//

int findMin(float[]);				// Find Maximum function declaration
int findMax(float[]); 				// Find Minimum function declaration
//Thanks to a c++ forum post, "float[]" makes the functions work, cuz the parameter is an array
int swout(int, int, int); 			//Switch Output function declaration

//---/////////////////////////////////////////////////////////////////////////////////////////---//

int main() {
//---INTEGER VARIABLES FOR USE IN COUT-------------------------------------------------------//

	int x; // used to store value returned by findMin
	int y; // user to store value returned by findMax
	int z; // used to store value returned by swout
	int swoutInput; // Input for Switch Output function

//---/////////////////////////////////////////////////////////////////////////////////////////---//

	cout << "Starting!\n";					   //indicating the start of the program
	float userInput[5];    					   //array Declaration
	cout << "Please enter 5 numbers\n";        //user instruction
	cout << "Each number must be separated using 'Enter'\n"; //user instruction
	for(int count = 0; count < 5; count++)     //taking in numbers for the array
	{
		cin >> userInput[count];
	}

	x = findMin(userInput); 				   //storing the return of findMin in x
	y = findMax(userInput); 				   //storing the return of findMax in y

	cout << "Enter 9 for max, or 0 for min " << "\n"; //user instruction to choose min or max
	cin >> swoutInput;						   //taking in user input for switch

	z = swout(swoutInput, x, y); 			   //storing the return of swout in z
	cout <<"Your number is: " << z << "\n";	   //printing min or max depending of user's choice
	cout << "Done!\n"; 			 			   //indicating the end of the program
	return 0;
}

//---FUNCTION DEFINITIONS-------------------------------------------------- ---------------------//

//FindMin
int findMin(float userInput[5])
{
	int min; 								   //local variable min
	for(int count3 = 0;  count3 < 5; count3++){//a for loop
		if(userInput[count3] < min){		   //comparing min and the array's current number
			min = userInput[count3];		   //if array's number is smaller, it's the new min
		}
	}
	return min;								   //the 'min' value will be stored in 'x'
}

//FindMax
int findMax(float userInput[5])
{
	int max;								   //local variable max
	for(int count4 = 0; count4 < 5; count4++){ //a for loop
		if(userInput[count4] > max){		   //comparing max and the array's current number
			max = userInput[count4];		   //if array's number is bigger, it's the new max
		}
	}
	return max; 							  //the 'max' value will be stored in 'y'
}

//Swout
int swout(int swoutInput, int x, int y) 	  //need 'x'(findMin) and 'y'(findMax)
{
	float j;								 //local variable j
	switch(swoutInput){						 //switch
	case 0:									 //in case user types 0,
		j = x;								  //return min value
		break;
	case 9:									 //in case user types 9,
		j = y;								  //return min value
		break;
	default:								 //otherwise,
		cout << "Unexpected user input\n";	  //print an arror message
	}
	return j;								 //return j to be stored in 'z'
}
