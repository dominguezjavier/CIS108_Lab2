#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "What is today's temperaturer in degrees Fahrenheit? " << endl;
	int degrees;
	cin >> degrees;
	 
	int cels = (degrees - 32 * 5 / 9);
	cout << "The temperature today is" << degrees << "Farenheit." << endl;
	cout << "How ever it is" << cels << "celsius today. Have a great day. " << endl;

}