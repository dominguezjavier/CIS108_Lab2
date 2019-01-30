#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "What is the title of your book? " << endl;
	int title;
	cin >> title;
	cout << "Who is the author of your book? " << endl;
	int author;
	cin >> author;
	cout << "What year was your book published? " << endl;
	int year;
	cin >> year;
	cout << "What is the total number of pages in your book? " << endl;
	int pages;
	cin >> pages;

	int age_of_book = (2019 - year);
	cout << "This book is " << age_of_book << endl;

	if (age_of_book < 10) {
		std::cout << "This book is younger than ten years old. " << std::endl;
	}

	else if (age_of_book > 10) {
		std::cout << "This book is at east ten years old. " << std::endl;
	}

	if (pages < 100) {
		std::cout << "This book is a short book. " << std::endl;
	}

	else if (pages = 100 && 300) {
		std::cout << "This book is an average book. " << std::endl;
	}

	else {
		std::cout << "This book is a long book. " << std::endl;
	}
}