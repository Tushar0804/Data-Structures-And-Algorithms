// Write a C program to enter a binary number in a randomly order and then segregate 
// the numbers such that all ones come to one side and all zeroes come to another side.

#include <stdio.h>
#include <string.h>

char* seg_01(char *s)
{
	char seg_0[25] = "";
	char seg_1[25] = "";
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == '0')
			strcat(seg_0, "0");
		else
			strcat(seg_1, "1");
	}
	return strcat(seg_0,seg_1);
}

int main()
{
	char num[50];
	printf("Enter a random binary number : ");
	fgets(num,50,stdin);
	
	printf("\nNumber after segregation is : %s \n", seg_01(num));
		
	return 0;
}
