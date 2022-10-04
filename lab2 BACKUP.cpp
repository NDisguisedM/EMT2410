//============================================================================
// Name        : Lab.cpp
// Author      : Nikolai Markov
// Version     : 1.0
// Copyright   : GPL V2
// Description : Backup version of the original Lab 2 project.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*------------------------------------------------------------------------------------------*/
	//Part 1
	cout << "Part 1" << endl;
	float myArrayPart1[5]={-3.9, 1.0, 6.7, 35.8, 60.9};
	cout << "This part doesn't print anything" << endl;
	float myMin, myMax;
	myMin = myMax = myArrayPart1[0]; //set the array's starting value to whatever the first value is
	int i;
	for(i=1; i<5; i++){
		if (myArrayPart1[i]>myMax){
	//update myMax container
			myMax = myArrayPart1[i];
		}
		if (myArrayPart1[i]<myMin){
	//update myMin container
			myMin = myArrayPart1[i];
		}
	}

/*-----------------------------------------------------------------------------------------------*/
	//Part 2
	cout << "Part 2" << endl;
	int userInputPart2;
	cout << "Enter 9 to display the maximun value" << endl;
	cout << "Enter 0 to display the minimum value" << endl;
	cin >> userInputPart2;

	//Print the myMax and myMin values when 9 and 0 are entered
	switch (userInputPart2)
	{
	case 9:
		cout << "Max value was: " << myMax << endl;
		break;
	case 0:
		cout << "Min value was: " << myMin << endl;
		break;
	default:
		cout << "Invalid character entered. Please try again:" << endl;
	}

/*-----------------------------------------------------------------------------------------------*/
	//Part 3
	cout << "Part 3" << endl;
	cout << "in this step, please enter the size of array" << endl;

	int j;                       // initialize j for immediate use.
	cin >> j;
	float expArray[j];

	cout << "Start entering numbers." << " Press enter after each number" << endl;
	cout << "Enter " << j << " numbers." << endl;

	int k;                       // initialize k for later use.
	for(int k = 0; k < j; k++){  // fot loop, k can't be greater than j since amount
		cin >> expArray[k];      // of allocated memory can't be smaller than the amount
		                      	 // I'm using
		}
	cout << "The array will now be printed" << endl;
	for(k=0; k<j; k++){			 // using a for loop separately to avoid the array being
								 // printed while user inputs
		cout << k << ")";
		cout << expArray[k] << endl; // Print the array to confirm it's working properly
	}
/*-----------------------------------------------------------------------------------------------*/

	return 0;
	}
