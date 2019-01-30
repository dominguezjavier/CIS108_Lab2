#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "What is your age. " << endl;
	int age;
	cin >> age;

	age = (age + 10);
	cout << "You are" << age << "In ten years you will be" << (age = age + 10) << endl;
