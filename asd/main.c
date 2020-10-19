#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n
    printf("\nEnter the p10:\n");
	int k1[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&k1[i]);
	}
	for(i=0;i<5;i++)
	{
		k1[i]=(k1[i]<<1);
	}
	printf("\nEnter the p10:\n");
	for(i=0;i<5;i++)
	{
		printf("%d",k1[i]);
	}

    return 0;
}
