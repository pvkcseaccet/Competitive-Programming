/* -----------------------------------------------------------------------------
   Author   : pvkcse
   StudentAt: Alagappa chettiar college of engineering and technology,karaikudi
   Task     : ABSP1 - Spoj         
   -----------------------------------------------------------------------------*/


# include<iostream>
# include<cstdio>
# include<algorithm>
# define ull unsigned long long
# define send_sig return
# define F(L_Bound,U_Bound) for(llu iterate=L_Bound;iterate<U_Bound;iterate++)
using namespace std;
 
template <class fast_io>
inline void readFast(fast_io *a)
{
	char c=0;
	while(c<33)
		c=fgetc(stdin);
	*a=0;
	while(c>33)
	{
		*a=*a*10+(c-48);
		c=fgetc(stdin);
	}
}
 
int main(void)
{
	unsigned long long range,reverse,low_price,test;
	int i,j,k;
	readFast<unsigned long long>(&range);
	while (range != 0)
	{
	//i=j=k=0;
	for (test=0;test<range;test++)
	{
		unsigned long long candy_list[range],price_list[range];
		for (i=0;i<range;i++)
		{
			readFast<unsigned long long>(&candy_list[i]);
		}
		for (j=0;j<range;j++)
		{
			readFast(&price_list[j]);
		}
		stable_sort(price_list,price_list+range);
		stable_sort(candy_list,candy_list+range);
		reverse=range-1;
		low_price=0;
		for (k=0;k<range;k++)
		{
			low_price+=candy_list[k]*price_list[reverse];
			reverse--;
		}
		printf("%llu\n",low_price);
		scanf("%llu",&range);
	}
	}
	send_sig (0);
	
}
 
 