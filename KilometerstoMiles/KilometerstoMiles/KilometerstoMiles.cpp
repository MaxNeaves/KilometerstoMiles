/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: KilometerstoMiles
 * This program converts a number from kilometers to miles.
 */

#include "stdafx.h"
#include <iostream>
using namespace std;

const float FLTMILES = 0.621371;

int main()
{
	float fltKilometers = 1.0;
	float fltMiles = 0.621371;

	cout << "Enter the number of kilometers: ";
	cin >> fltKilometers;

	fltMiles = fltKilometers * FLTMILES;

	cout << fltKilometers << " kilometer(s) is " << fltMiles
		<< " miles" << endl;
    return 0;
}

