#include <stdio.h>
#include "FileReader.h"

int main()
{
    //Creates File pointer
	FILE *file;
	//The word that will be guessed will be stored here
	char chosenWord[10];
	//Reads the text file and gets a random word
	getRandomWord(&file,&chosenWord);
	//Starts the lingo game with a random word as a input
	StartLingo(chosenWord);
	return 0;
}
