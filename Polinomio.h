#pragma once

// Polinomio.h

#include<iostream>
#include<cstdio>

using namespace::std;

#include"Polinomio.h"
#include"Monomio.h"

const int MAX = 3;

class Polinomio
{
public:

	Polinomio(); // Constructor
	Polinomio(const Monomio & aMonomio); // Parameter Constructor
	Polinomio(const Polinomio & aPolinomio); // Copy Constructor
	~Polinomio(); // Destructor

	// Setter
	void setMonomio(const Monomio & aMonomio);

	// Getter
	Monomio getMonomio(int index) const;
	
	// Array Operator
	Monomio operator [](int index);

	// Evaluate function
	void evaluate();

	friend ostream & operator << (ostream & output, const Polinomio & aPolinomio); // Prints
	friend istream & operator >> (istream & input, Polinomio & aPolinomio); // Inputs


private:

	Monomio monomio[MAX];
	int total;
};

