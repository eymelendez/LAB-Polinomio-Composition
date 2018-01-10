// MAIN_Monomio.cpp

#include<iostream>
#include<cmath>
using namespace::std;

#include"Monomio.h"

/*
	File Name: MAIN_Monomio.cpp
	Author: Edwin Y. Melendez Lopez #89139
	Description: A class that that uses operators of sums, subtracts and multiplication to evalute two monomios.

	History:	
			04/10/2017 - Program Created. EML
			04/10/2017 - Monomio.h file Created. EML
			04/10/2017 - Monomio.cpp file Created. EML
			04/10/2017 - MAIN_Monomio.cpp file Created. EML
			04/11/2017 - Added Sum and Subtract conditions. EML
			04/17/2017 - Program finished successfully. EML
			
	*/



int main() 
{

	Monomio M1, M2, M3;
	int x, result;

	cout << "Entre los valores del primer monomio: " << "\n\n";
	cin >> M1;

	cout << "Entre los valores del segundo monomio: " << "\n\n";
	cin >> M2;

	M3 = M1 + M2;
	cout << endl << "F(x) + G(x) = " << M3 << endl;

	M3 = M1 - M2;
	cout << endl << "F(x) - G(x) = " << M3 << endl;

	M3 = M1 * M2;
	cout << endl << "F(x) * G(x) = " << M3 << endl;

	M3 = M2 ^ 7;
	cout << endl << "G(x)^7 = " << M3 << "\n\n";

	cout << endl << "Entre el valor de x: ";
	cin >> x;

	result = M1.getCoefficient() * pow(x, M1.getExponent());

	cout << endl << "F(" << x << ") = " << result << endl; 


	system("pause");

	return 0;

} // end main. 10 de abril de 2017 - Successful!