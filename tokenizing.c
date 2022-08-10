// v2
#define CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 300 /*Declare global variable "buffer size" value = 300*/ 
#include "tokenizing.h" /* include the header file */

#include<stdio.h>
int main() //Program starts
{
	printf(" *** Start of Tokenizing Phrases Demo ***\n");
	char  phrases[BUFFER_SIZE]; //Declaring variable phrases with size equal to BUFFER SIZE
	char* nextPhrase = NULL; /*Another variable declared*/
	int phrasesCounter;
	do // loop begins
	{
		printf("Type a few phrases separated by comma (q - to quit): \n");
		fgets(phrases, BUFFER_SIZE, stdin); /* fgets reads the value of phrases */
		phrases[strlen(phrases) - 1] = '\0';
		if ((strcmp(phrases, "q") != 0)) /* String "phrases" is compared with q */
		{
			nextPhrase = strtok(phrases, ",");
			phrasesCounter = 1; /* value assigned 1 to the variable phrasesCounter */
			while (nextPhrase) 
			{
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0); /* loop condition checked */
	printf("*** End of Tokenizing Phrases Demo ***\n\n"); //display message
	return 0;
}
