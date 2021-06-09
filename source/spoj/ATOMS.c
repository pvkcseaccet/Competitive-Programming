# include<stdio.h>
# include<stdlib.h>
 
int main(void)
{
	long long int n,m,k,atoms,count,temp;
	int test;
	scanf("%d",&test);
	while(test--)
	{
		count=0;
		scanf("%lld %lld %lld",&n,&m,&k);
		temp=m;
		m=k;
		k=temp;
		if (m/n >= k)
		{
			atoms=n*k;
			count+=1;
			while(m/atoms >= k)
			{
				atoms=atoms*k;
				count++;
			}
		}
		printf("%lld\n",count);
	}
	return(0);
}
 