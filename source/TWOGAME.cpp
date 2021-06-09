# include<iostream>
# include<cstdio>
 
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
	long long a,b;
	long long temp;
	int test;
	readFast<int>(&test);
	while(test--)
	{
		readFast<long long>(&a);
		readFast<long long>(&b);
		(a>b)?b=(a+b)-(a=b):b=b;
		while(b)
		{
			temp=a;
			a=b;
			temp=temp%b;
			b=temp;
		}
		while(a%2==0)
		{
			a=a/2;
		}
		(a==1)?cout<<"Y":cout<<"N";
		cout<<endl;
	}
	return(0);
}
 