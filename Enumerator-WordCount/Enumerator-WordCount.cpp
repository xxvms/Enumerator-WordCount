// Enumerator-WordCount.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <conio.h> // for getche()

enum itsaWord {NO, YES}; // NO = 0, YES = 1

int main()
{
	itsaWord isWord = NO; //YES when is a word
						 //NO when in whitespace
	char ch = 'a';		// character read from keyboard
	int wordCount = 0;  //number of words read

	std::cout << "Enter a phrase:\n";
	do {
		ch = getche(); // get character
		if (ch == ' ' || ch == '\r') // if white space 
		{
			if (isWord == YES) // and reading a word,
			{					// then is end of the word
				wordCount++;	// count the word (increase the wordCount by 1)
				isWord = NO;   // reset FLAG to NO
			}					// otherwise it is normal character
		}	
		else
			if (isWord == NO)	//if start of word,
				isWord = YES; // then set flag to YES
	} while (ch != '\r'); // Quit on Entry KEY - enter
	std::cout << "\n --- Word count is " << wordCount << "---\n"; // display results

	system("pause");
    return 0;
}

