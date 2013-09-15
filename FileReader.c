#include "FileReader.h"


char* getRandomWord(FILE *file)
{
    file = fopen("WordsForLingo.txt","r");
    if(file == NULL)
    {
        printf("Could not open file!\n");
        getchar();
		exit(0);
        return;
    }
	
	int wordIncrement = 0;
	char wordArray[256][7];
	char line[7];
	while(fgets(line, 7, file) != NULL)
    {
	    //printf ("%s", line);
		if(line[0] != '\n')
	    {strcpy(&wordArray[wordIncrement],&line);
	    ++wordIncrement;}
    }
	fclose(file);
	
	//RANDOMIZE A WORD TO USE FOR LINGO
    srand(time(NULL));
    int gen = rand() % wordIncrement;
	
	return wordArray[gen];
}
