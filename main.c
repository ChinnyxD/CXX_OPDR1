#include <stdio.h>
#include "FileReader.h"

int main()
{
    //Creates File pointer
	FILE *file;
	//The word that will be guessed will be stored here
	char* wordArray;
	//Reads the text file and gets a random word
	wordArray = getRandomWord(&file);
	//Starts the lingo game with a random word as a input
	StartLingo(wordArray);
	return 0;
}
