// Monomio.cpp

#include<iostream>
#include<cstdio>

using namespace::std;

#include"Monomio.h"

// Constructor
Monomio::Monomio()
{
	coefficient = 1;
	exponent = 1;
}

// Parameter Constructor
Monomio::Monomio(int a, int n)
{
	setCoefficient(a);
	setExponent(n);

}

// Copy Constructor
Monomio::Monomio(const Monomio & tempMonomio)
{
	setCoefficient(tempMonomio.getCoefficient());
	setExponent(tempMonomio.getExponent());
}

// Destructor
Monomio::~Monomio()
{

}

// Setters
void Monomio::setCoefficient(int a)
{
	coefficient = a;
}

void Monomio::setExponent(int n)
{
	if (n > 0)
	{

	exponent = n;

	}
	else 
	{
		cout << "Entre un numero mayor de cero. ";

	}
	
}

// Getters
int Monomio::getCoefficient() const
{
	return coefficient;
}

int Monomio::getExponent() const
{
	return exponent;
}

// Assign Operator
Monomio & Monomio::operator = (const Monomio & tempMonomio)
{
	this->coefficient = tempMonomio.getCoefficient();
	this->exponent = tempMonomio.getExponent();

	return *this;
}

Monomio Monomio::operator ^ (int exp)
{
	exponent = exp;
	return *this;

}

// Sum Operator
Monomio Monomio::operator + (const Monomio & tempMonomio)
{

	int sum;

	if (exponent == tempMonomio.exponent)
	{
		sum = (coefficient + tempMonomio.coefficient);

	}
	else
	{
		cout << "ERROR, for it to be sum, they must be of the same exponent. ";
		exit(1);

	}

	Monomio Sum(sum, exponent);
	
	return Sum;
	
}


Monomio Monomio::operator - (const Monomio & tempMonomio)
{

	int subtract;

	if (exponent == tempMonomio.exponent)
	{
		subtract = (coefficient - tempMonomio.coefficient);

	}
	else
	{
		cout << "ERROR, for it to be sum, they must be of the same exponent. ";
		exit(1);

	}

	Monomio Subtract(subtract, exponent);

	return Subtract;

	
}

Monomio Monomio::operator * (const Monomio & tempMonomio)
{
	int exp = exponent + tempMonomio.exponent;
	int coe = coefficient * tempMonomio.coefficient;

	Monomio monomio(coe, exp);

	return monomio;

	
}

ostream & operator << (ostream & output, const Monomio & tempMonomio)
{
	output << tempMonomio.coefficient  << "x^ " << tempMonomio.exponent;
	
	return output;
}

istream & operator >> (istream & input, Monomio & tempMonomio)
{

	cout << "Enter the coeficient: " << endl;
	input >> tempMonomio.coefficient;

	cout << "Enter the exponent: " << endl;
	input >> tempMonomio.exponent;

	return input;

	
}
