#ifndef FRACTION_H
#define FRACTION_H

class FRACTION
{
private:
	int numer;
	int denomr;

public:
	FRACTION(int num = 0, int denom = 1);
	~FRACTION();
	void setnum(int);
	int getnum();
	void setdem(int);
	int getdem();
	void DISPLY();

	FRACTION ADD(FRACTION num1);
	FRACTION SUB(FRACTION num1);
	FRACTION DIFF(FRACTION num1);
	FRACTION MULT(FRACTION num1);


	FRACTION operator + (FRACTION num1);
	FRACTION operator - (FRACTION num1);
	FRACTION operator / (FRACTION num1);
	FRACTION operator * (FRACTION num1);
};
#endif;