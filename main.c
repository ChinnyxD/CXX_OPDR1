#include <stdio.h>
#include "FileReader.h"

int main()
{
	FILE *file;
	char* wordArray;
	wordArray = getRandomWord(&file);
	StartLingo(wordArray);
	//printf("\n%c : End of program!",wordArray[5]);
	//char test = getchar();
	//printf("%s",test);
	return 0;
}
