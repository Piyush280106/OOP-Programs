#include<stdio.h>
int main()
{
	int no,i=1,t;
	printf("Enter Number:");
	scanf("%d",&no);
	printf("Table:\n");
	while(i<=10)
	{
		t=no*i;
		printf("%d",t);
		printf("\n");
		i++;
	}
}
