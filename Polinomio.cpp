// Polinomio.cpp

#include<iostream>
#include<cstdio>

using namespace::std;

#include"Monomio.h"
#include"Polinomio.h"

// Contructor
Polinomio::Polinomio()
{
	total = 0;
}

// Parameter Constructor
Polinomio::Polinomio(const Monomio & aMonomio)
{
	total = 0;
	setMonomio(aMonomio);
}

// Copy Constructor
Polinomio::Polinomio(const Polinomio & aPolinomio)
{
	for (int i = 0; i < aPolinomio.total; i++)
	{
		setMonomio(aPolinomio.monomio[i]);
	}
}

// Destructor
Polinomio::~Polinomio()
{
	// cout << "Destroying objetos" << endl
}
// Setter
void Polinomio::setMonomio(const Monomio & aMonomio)
{
	int index = total;

	if (total <= MAX) 
	{
		monomio[index] = aMonomio;
		total++;

	}
	else 
	{
		cout << "Max was reach!\n";

	}
}

// Getter
Monomio Polinomio::getMonomio(int index) const
{
	if (index >= 0 && index <= total) 
	{
		return monomio[index];

	}
	else 
	{
		cout << "Index out of bound!\n";
		exit(1);
	}
	
}

// Array Operator
Monomio Polinomio::operator[](int index)
{
	if (index >= 0 && index <= total) 
	{
		return monomio[index];
	}
	else 
	{
		cout << "Index out of bound!\n";
		exit(1);

	}
}

// Uses the x value entered by the user to evaluate the polinomio.
void Polinomio::evaluate()
{
	int x; 
	int n = 0;

	cout << "Entre x: ";
	cin >> x;

	for (int i = 0; i <= total; i++) 
	{
		n = n + monomio[i].eval(x);
	}

	cout << "F(" << x << ") = " << n << endl;
}

// Output Operator
ostream & operator<<(ostream & output, const Polinomio & aPolinomio)
{
	output << "Equation F(x) = ";
	output << aPolinomio.monomio[0];

	for (int i = 1; i <= aPolinomio.total; i++) 
	{
		output << " + " << aPolinomio.monomio[i];
	}

	return output;
}

// Input Operator
istream & operator >> (istream & input, Polinomio & aPolinomio)
{
	Monomio monomio;

	cout << "How many monomios are? ";
	input >> aPolinomio.total;

	for (int i = 0; i <= aPolinomio.total; i++) 
	{
		cout << "\nMonomio #" << i + 1 << endl;
		input >> aPolinomio.monomio[i];

		aPolinomio.setMonomio(monomio);
	}

	return input;
	
}
