//============================================================================
// Name        : Maths.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// Recursive C++ program to count number of
// digits in a number
#include <bits/stdc++.h>
using namespace std;
// Log based C program to count number of
// digits in a number
#include <math.h>
#include <stdio.h>

int countDigit(long long n)
{
	return floor(log10(n) + 1);
}

// Driver code
int main(void)
{
	long long n = 345289467;
	printf("Number of digits : %d",
		countDigit(n));
	return 0;
}
