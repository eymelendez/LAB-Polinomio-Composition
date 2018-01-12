// MAIN_Polinomio.cpp

#include<iostream>

using namespace::std;

#include"Polinomio.h"
#include"Monomio.h"

/*
	File Name: MAIN_Polinomio.cpp
	Author: Edwin Y. Melendez Lopez #89139
	Description: A class that that has parts of another class to create and evalute a polinomio.

	History:	
			04/17/2017 - Program Created. EML
			04/17/2017 - Monomio.h file Added. EML
			04/17/2017 - Monomio.cpp file Added. EML
			04/17/2017 - Polinomio.h created. EML
			04/17/2017 - Polinomio.cpp created. EML
			04/18/2017 - Evaluate fuction created and finished
			04/19/2017 - Everything tested and runs perfectly... Succesful!
			
	*/

	
int main() {

	Polinomio array;

	cin >> array;
	// cout << array;
	cout << endl;


	system("cls");

	cout << "Monomios Entered: \n";
	cout << array;

	cout << "\n";
	array.evaluate();

	system("pause");

	return 0;

} // end main. 17 de abril de 2017 - Successful!