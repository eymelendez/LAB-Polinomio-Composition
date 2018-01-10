// Monomio.h

#pragma once

#include<iostream>
#include<cstdio>

using namespace::std;

class Monomio
{
public:
	Monomio(); // Constructor
	Monomio(int a, int n); // Parameter Constructor
	Monomio(const Monomio & tempMonomio); // Copy Constructor
	~Monomio(); // Destructor

	// Setters
	void setCoefficient(int a);
	void setExponent(int n);

	// Getters
	int getCoefficient() const;
	int getExponent() const;

	// Operators

	Monomio &operator = (const Monomio &); // Assign Operator

	Monomio operator ^ (int exp); // ^ operator

	Monomio operator + (const Monomio & tempMonomio); // Sum Operator
	Monomio operator - (const Monomio & tempMonomio); // Substract Operator
	Monomio operator * (const Monomio & tempMonomio); // Multiplication Operator

	friend ostream &operator << (ostream &, const Monomio &); // Prints
	friend istream &operator >> (istream &, Monomio &); // Inputs


private:

	int coefficient;
	int exponent;

};



