// Problem2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int firstNum = 1;
int secondNum = 2;
int total = secondNum;
int fiboNum;

int main()
{
	while (1) {
		fiboNum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = fiboNum;
		if (fiboNum < 4000000 && fiboNum % 2 == 0) {
			total = total + fiboNum;
		}
		else if (fiboNum > 4000000) {
			break;
		}
	}
	cout << "The total is: " << total << endl;
	system("Pause");
	return 0;
}

