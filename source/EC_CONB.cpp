# include<iostream>
# include<cstdio>
 
using namespace std;
 
template <class fast_io>
inline void readFast(fast_io *a)
{
	char c=0;
	while(c<33)
		c=getchar_unlocked();
	*a=0;
	while(c>33)
	{
		*a=*a*10+(c-48);
		c=getchar_unlocked();
	}
}
 
inline int bin_rev(unsigned long long num)
{
	int rev=0;
	while(num>0)
	{
		rev=rev*2;
		rev=rev+num%2;
		num=num/2;
	}
	return rev;
}
 
int main(void)
{
	int test;
	unsigned long long a;
	readFast<int>(&test);
	while(test--)
	{
		readFast<unsigned long long>(&a);
		if (a%2==0)
			a=bin_rev(a);
		else
			a=a;
		cout<<a<<endl;
	}
	return(0);
}