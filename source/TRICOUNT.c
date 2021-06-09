# include<stdio.h>
 
int main(void)
	{
	int test,i;
	long long unsigned n,sum;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%llu",&n);
		if(n%2==0)
		{
			sum=(n*(n+2)*((2*n)+1))/8;
		}
		else
		{
			sum=((n*(n+2)*((2*n)+1))-1)/8;
		}
		printf("%llu\n",sum);
	}
	return(0);
}
 
 