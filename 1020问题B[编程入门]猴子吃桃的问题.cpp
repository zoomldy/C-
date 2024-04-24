#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int count=1;
	for(int i=N-1;i>0;i--)
	{
		count=(count+1)*2;
		
	}
	printf("%d",count);
	return 0;
}
