/*
Author: Shivangi Vyas
Student Id: 1001570499
Code 6: What function you wanna execute?
Date due: 03/29/18; 11:59pm
*/


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "MyLib.h"

int main(void)
{
	
	
	int choice;
	char OutputArray[500];
	printf("\nHere are your options...\n\n1. Convert Decimal to Binary\n2. Sentence Cleanup\n3. SKU Converter\n4. SKU Dasher\n\nPlease enter a valid menu choice:  ");
	scanf("%d",&choice);
	getchar();
	
	switch (choice)
	{
		case 1: ConvertDecimalToBinary(OutputArray);
				printf("%s\n\n",OutputArray);
		break;
		
		case 2: SentenceCleanup(OutputArray);
				printf("%s\n\n",OutputArray);
		break;
		
	
		case 3: SKUConvertor(OutputArray);
				printf("%s\n\n",OutputArray);              
		break;
		case 4:SKUdasher(OutputArray);
				printf("%s\n\n",OutputArray);
		break;
		
		default: printf("You didn't pick a valid choice.\n");
		
		
	}
	return 0;
}

