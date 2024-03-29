/* -----------------------------------------------------------------------------
   Author   : pvkcse
   StudentAt: Alagappa chettiar college of engineering and technology,karaikudi
   Task     : LCMSUM - Spoj         
   -----------------------------------------------------------------------------*/


# include<cstdio>
# include<iostream>
# define lli long long int
using namespace std;
lli lt=1000000;
lli euler_tot[1000010];
lli r[1000010];
 
void calculate_euler_tot()
{
	for (int i=1;i<=lt;i++)euler_tot[i]=i;
	for (int i=2;i<=lt;i++)
		if (euler_tot[i] == i)
			for(int k=i*2;k<=lt;k=k+i)
				euler_tot[k]=euler_tot[k]-euler_tot[k]/i;
		for (int i=2;i<=lt;i++)
			if (euler_tot[i] == i)
				euler_tot[i]=i-1;
	for (int i=1;i<=lt;i++)
		for(int j=i;j<=lt;j=j+i)
			r[j]=r[j]+(i*euler_tot[i]);
}
 
int main(void)
{
	calculate_euler_tot();
	int test,num,i;
	lli sum;
	scanf("%d",&test);
	while(test-- >0)
	{
		scanf("%d",&num);
		sum=(1+r[num])*num/2;
		printf("%lld\n",sum);
	}
	return(0);
} 