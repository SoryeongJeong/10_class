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
	
	gptr = grade; /*�迭�� ù �κ�*/ 
	
	
	for (i=0;i<5;i++)
	{
		printf("grade[%d] = %d\n", i , *(gptr+i)); /*n��°*/ 
		average += *(gptr+i);
	}
	
	printf("average : %d", average/5);
	
	return 0;
}
