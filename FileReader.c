#include "FileReader.h"


void getRandomWord(FILE *file,char* chosenWord)
{
    //Opens file from the file pointer.
    file = fopen("WordsForLingo.txt","r");
    if(file == NULL)
    {
        printf("Could not open file!\n");
        getchar();
		exit(0);
        return;
    }
	//Get lines from text file
	int wordIncrement = 0;
	char wordArray[256][7];
	char line[7];
	while(fgets(line, 7, file) != NULL)
    {
		if(line[0] != '\n')
	    {strcpy(&wordArray[wordIncrement],&line);
	    ++wordIncrement;}
    }
    //Closes file.
	fclose(file);
	
	//RANDOMIZE A WORD TO USE FOR LINGO
    srand(time(NULL));
    int gen = rand() % wordIncrement;
	strcpy(chosenWord,wordArray[gen]);
	//return wordArray[gen];
}
