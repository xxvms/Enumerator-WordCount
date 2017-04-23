// Enumerator-WordCount.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <conio.h>

enum itsaWord {NO, YES};

int main()
{
	itsaWord isWord = NO;
	char ch = 'a';
	int wordCount = 0;

	std::cout << "Enter a phrase:\n";
	do {
		ch = getche();
		if (ch == ' ' || ch == '\r')
		{
			if (isWord == YES)
			{
				wordCount++;
				isWord = NO;
			}
		}
		else
			if (isWord == NO)
				isWord = YES;
	} while (ch != '\r');
	std::cout << "\n --- Word count is " << wordCount << "---\n";

	system("pause");
    return 0;
}

