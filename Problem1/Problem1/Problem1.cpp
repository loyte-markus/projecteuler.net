// Problem1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int trueMultiple = 0;
	int falseMultiple = 0;
	int total = 0;

	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			trueMultiple++;
			total = total + i;
		}
		else {
			falseMultiple++;
		}
	}
	cout << "Multiples of 3 or 5: " << trueMultiple << endl;
	cout << "Non-multiples of 3 or 5: " << falseMultiple << endl;
	cout << "The total is: " << total << endl;
	system("Pause");
    return 0;
}

