# include<iostream>
# include<cstdio>
# include<map>
 
using namespace std;
map<long long int,long long int> first_map;
 
long long int func(long long int num)
{
	if (num==0)
	{
		return(0);
	}
	long long int calc=first_map[num];
	if(calc==0)
	{
		long long int calc=num-num%12;
		long long int answer=max(num,func(num/2)+func(num/3)+func(num/4));
		first_map[num]=answer;
	}
	return (first_map[num]);
}
 
int main(void)
{
long long int test_int;
//cin>>test_int;
while(cin>>test_int)
{
	cout<<func(test_int)<<endl;
}
return(0);
}
 