//============================================================================
// Name        : Pointers.cpp
// Author      : Courtney Jackson
// Version     :
// Copyright   :
// Description : Integer Pointers Program
//============================================================================

#include <iostream>

using namespace std;

int main() {
	// Declare variables for storage
	int valueA;
	int valueB;
	int valueC;

	// Declare pointers
	int* ptrA;
	int* ptrB;
	int* ptrC;

	// Using new operator
	ptrA = new int;
	ptrB = new int;
	ptrC = new int;

	// Instructing user to input three integers
	cout << "Input first integer: ";
	cin >> valueA;

	cout << "Input second integer: ";
	cin >> valueB;

	cout << "Input third integer: ";
	cin >> valueC;

	// Store values in allocated memory
	*ptrA = valueA;
	*ptrB = valueB;
	*ptrC = valueC;

	// Display the value of the variables
	cout << "\nValues in the variables:" << endl;
	cout << "valueA: " << valueA << endl;
	cout << "valueB: " << valueB << endl;
	cout << "valueC: " << valueC << endl;

	// Display the values of the pointers
	cout << "\nValues in the pointers:" << endl;
	cout << "*ptrA: " << *ptrA << endl;
	cout << "*ptrB: " << *ptrB << endl;
	cout << "*ptrC: " << *ptrC << endl;

	// Display memory locations
	cout << "\nPointer's memory locations:" << endl;
	cout << "ptrA: " << ptrA << endl;
	cout << "ptrB: " << ptrB << endl;
	cout << "ptrC: " << ptrC << endl;

	// Using delete operator to release allocated memory
	delete ptrA;
	delete ptrB;
	delete ptrC;

	// Prevent dangling pointers
	ptrA = nullptr;
	ptrB = nullptr;
	ptrC = nullptr;

	return 0;
}

