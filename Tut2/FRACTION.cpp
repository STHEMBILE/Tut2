#include<iostream>
#include"FRACTION.h"
using namespace std;

FRACTION::FRACTION (int num, int denom) 
{
	numer = num;

	denomr = denom;
}

FRACTION :: ~FRACTION() 
{

}

void FRACTION::setdem(int dem)
{
	denomr = dem;
}

void FRACTION::setnum(int num)
{
	numer = num;
}
int FRACTION:: getnum()
{
	return numer;
}

int FRACTION::getdem()
{
	return denomr;
}


FRACTION FRACTION::ADD(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.denomr + denomr*NUM1.numer / (denomr*NUM1.denomr));

}

FRACTION FRACTION::SUB(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.denomr - denomr*NUM1.numer / (denomr*NUM1.denomr));

}

FRACTION FRACTION::DIFF(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.denomr / denomr*NUM1.numer);

}

FRACTION FRACTION::MULT(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.numer / denomr*NUM1.denomr);

}


void FRACTION::DISPLY()
{
	int p, s;
	if (numer==0)
	{
		cout << "the value is zero" << endl;
	}

	else if (numer > denomr)
	{
		p = numer / denomr;
		s = numer % denomr;
		cout << "the value is " << p << "" << s << "/" << denomr << endl;
	}

	else
	{
		cout << "the value is " << numer << "/" << denomr << endl;
	}
}



FRACTION FRACTION::operator+(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.denomr + denomr*NUM1.numer / (denomr*NUM1.denomr));

}

FRACTION FRACTION::operator-(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.denomr - denomr*NUM1.numer / (denomr*NUM1.denomr));

}

FRACTION FRACTION::operator/(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.denomr / denomr*NUM1.numer);

}

FRACTION FRACTION::operator*(FRACTION NUM1)
{
	return FRACTION(numer*NUM1.numer / denomr*NUM1.denomr);

}
