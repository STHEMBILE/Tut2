#include <iostream>
#include "FRACTION.h"

using namespace std;




int main()

{
	FRACTION FRAC1(1, 2);

	FRACTION FRAC2(2, 5);

	FRACTION RESULT = FRAC1 + FRAC2;

	RESULT.DISPLY();
	system("pause");
	return 0;
}