#include <stdio.h>


/**
* Get random word from file. It also selects a random word from the text file. The text file should be in the same directory as the exe file.
*@param *file The file pointer which will be used to read text file.
*@param *wprdArray The pointer to store a random word
*@return Returns a pointer of a selected word from the txt file
*/
void getRandomWord(FILE *file,char *wordArray);
