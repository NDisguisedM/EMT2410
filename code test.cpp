//============================================================================
// Name        : Lab1.cpp
// Author      : Nikolai Markov
// Version     :V 0.2.7 stable
// Copyright   : GPL V2
// Description : Prints a "Hello World" message 5 times, then prints "Hello
//               World" as many times as the user inputs
//============================================================================

#include <iostream>
using namespace std;

auto message = ") Hello world";
int messageNumber;
/*----------------------------------------------------------------------------------------------*/
// Part 1
int main(){

	for(messageNumber=1; messageNumber<=5; messageNumber++)
		cout << messageNumber << message << endl;
/*----------------------------------------------------------------------------------------------*/
// Part 2
	int userInput;
	cout << "This part will display message as many times as you enter." << endl;

	cout << "input a number between 1 and 10";
	cin >> userInput;
	for(messageNumber=1; messageNumber<=userInput; messageNumber++){
		cout << messageNumber << message << endl;}
return 0;
}
