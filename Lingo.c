#include "Lingo.h"

void StartLingo(char * word)
{	
    //Starting Lingo
	int array[6];
    int remainingTries = 6;
		
    while(remainingTries > 0)
    {
		//Gen word
		char currentWord[7];
		int i = 0;
		for(i=0;i<6;i++)
		{
			if(array[i] == 1)
			{
				currentWord[i] = word[i];
			}
			else
			{
				currentWord[i] = '_';	
			}
		}
		
		// Always show the first letter
		currentWord[0] = word[0];
		currentWord[6] = '\0';	
		
		printf("\nCurrent word: %s (Attempts left: %d)",currentWord,remainingTries);
		char inputWord[7];

		printf("\nInput: ");
		gets(inputWord);
		
		
		//CHECK IF CHARACTERS ARE CORRECT
		int j = 0;
		for(j=0;j<6;j++)
		{
			if(word[j] == inputWord[j])
			{
				array[j] = 1;
			}      
		}
		
		if(strcmp(word, inputWord ) == 0)
		{
			printf("\nThe word %s has been guessed! Press enter to exit!\n", word);
			getchar();
			break;
		}
		
		remainingTries--;
	}
	
	if (remainingTries == 0)
	{
		printf("\nGame over. Press enter to exit!\n");
		getchar();
	}
}


