# include<iostream>
# include<cstdio>
# include<cmath>
 
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
	int test;
	double x,y;
	readFast<int>(&test);
	for(int i=0;i<test;i++)
	{
		readFast<double>(&x);
		readFast<double>(&y);
		printf("%0.3f\n",2*sqrt(x*x-y*y));
	}
	return(0);
} 