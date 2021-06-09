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
 
inline int factorial(int num)
{
	if (num==0)
		return(1);
	else
		return(num*(factorial(num-1)));
}
 
int main(void)
{
	int n,k,loop;
	int arr[15];
	long long result;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		loop=0;
		result=factorial(n);
		while(loop<k)
		{
			readFast<int>(&arr[loop]);
			result=result/factorial(arr[loop]);
			loop++;
		}
		cout<<result<<endl;
	}
	return(0);
}