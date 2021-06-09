# include<stdio.h>
# include<stdio.h>
# define lli long long int
# define f(l_bound,u_bound) for(i=l_bound;i<u_bound;i++)
# define send_sig return
 
int main(void)
{
	int test,i,j;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		lli th,lth,sum,no_terms,com_diff,x,terms;
		scanf("%lld %lld %lld",&th,&lth,&sum);
		no_terms=(2*sum)/(th+lth);
		com_diff=(lth-th)/(no_terms-5);
		x=th-(2*com_diff);
		terms=x;
		printf("%lld\n",no_terms);
		for(j=0;j<no_terms;j++)
		{
			printf("%lld ",terms);
			terms=terms+com_diff;
		}
		printf("\n");
	}
	send_sig(0);
} 