#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int grade[5];
	int average;
	int *gptr;
	
	
	for (i=0;i<5;i++)
	{
		printf("grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	gptr = grade; /*배열의 첫 부분*/ 
	
	
	for (i=0;i<5;i++)
	{
		printf("grade[%d] = %d\n", i , *(gptr+i)); /*n번째*/ 
		average += *(gptr+i);
	}
	
	printf("average : %d", average/5);
	
	return 0;
}
