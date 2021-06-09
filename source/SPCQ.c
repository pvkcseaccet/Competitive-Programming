# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# define lli long long int
# define i int
# define turn return
# define suspect if
 
int isdivisible(long long int number)
{
	lli sum=0;
	lli num=number;
	while (number > 0)
	{
		sum=sum+(number%10);
		number=number/10;
	}
	suspect (num%sum == 0)
	{
		turn 1;
	}
	else
	{
		turn 0;
	}
	turn ;
	
}
 
int main(void)
{
	lli number,j,k;
	i test;
	scanf("%d",&test);
	while(test-- > 0)
	{
		scanf("%lld",&number);
		for(k=number;k<pow(2,64)-1;k++)
		{
			j=number;
			suspect (isdivisible(k) == 1)
			{
				printf("%lld\n",k);
				break;
			}
		}
	}
	turn (0);
} 