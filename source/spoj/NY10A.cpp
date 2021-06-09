/*=================================================================
   AUTHOR   : PVKCSE
   STUDENTAT: ACCET,KARAIKUDI
   TASK     : NY10A - SPOJ
   EMAIL    : pvkcsetup@hotmail.com
  =================================================================*/
 
//Includes /*HEADER FILES*/
# include<cstdio>
# include<bits/stdc++.h> //STILL IT FEARS TATS Y...
# include<cstring>
# include<cstdlib>
# include<cctype>
# include<string>
# include<cfloat>
# include<cmath>
# include<iostream>
# include<fstream>
# include<cassert>
# include<iterator>
# include<vector>
# include<queue>
# include<map>
# include<algorithm>
# include<set>
# include<sstream> //for istringstream and osstringstream
# include<stack>
 
//I'M TOOOOOOOOOOOO :-P LAZY You Know.. =D :)
//SOME SIMPLE MACRO DEFINITIONS
# define MEM(a,b) memset(a,(b),sizeof(a))
# define MAX(a,b) ((a) > (b) ? (a) : (b))
# define MIN(a,b)  ((a) < (b) ? (a) : (b))
# define MP make_pair
# define pb push_back
# define inf 1000000000
# define mod 1000000007
# define lli long long int
# define li long int
# define gi(a) readFast<int>(&a)
# define gl(a) readFast<li>(&a)
# define gll(a) readFast<lli>(&a)
# define gdb(a) readFast<double>(&a)
# define pi(a) printf("%d\n",a)
# define intmax numeric_limits<int>::max()
# define longmax numeric_limits<li>::max()
# define llimax numeric_limits<lli>::max()
# define gs(a) scanf("%s",a)
# define gc(a) scanf("%c",a)
# define gis(a) scanf("%d",a)
# define glls(a) scanf("%lld",a)
# define NL printf("\n")
# define pll(a) printf("%lld",a)
# define ps(a) printf("%s",a)
# define fr(i,e) for (i=0;i<e;i++)
# define frf(i,s,e) for (i=s;i<=e;i++)
# define frb (j,s) for (j=s;j>0;j--)
# define All(v) v.begin(),v.end()
# define SystemTest() lli test;gll(test);while(test--)
 
//typedef vector<int>::const_iterator lv;
//typedef string::const_iterator ls;
 
using namespace std;
 
//FAST IO BEGINS HERE
template <class fast_io>
inline fast_io readFast(fast_io *a)
{
    char c=0;
    bool sign=false;
    while(c<33 && c!='-')
        c=fgetc(stdin);
    *a=0;
    if (c=='-')
    {
        sign=true;
        c=fgetc(stdin);
    }
    while(c>33)
    {
        *a=*a*10+(c-'0');
        c=fgetc(stdin);
    }
    if (sign)
        return -*a;
    else
        return *a;
}//FAST IO ENDS HERE
 
lli MyPower(lli base, lli exp)
{
    lli multiple=exp;
    lli answer = base;
    multiple=multiple>>1;
    while (multiple)
    {
        answer *= answer;
        if ((multiple & exp) != 0)
            answer *= base;
        multiple>>=1;
    }
    return answer;
}
 
int main(void)
{
	lli n;
	string tosses;
	string tries[] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT","HHH"};
	SystemTest()
	{
		int index;
		int answer[8];
		cin>>n;
		cin>>tosses;
		for (int i=0;i<8;i++)
		{
			index = 0;
			answer[i]=0;
			while ((index=(int)tosses.find(tries[i],index))!=std::string::npos)
			{
				index+=1;
				answer[i]++;
			}
		}
		printf("%d ",n);
		for (int i=0;i<8;i++)
			printf("%d ",answer[i]);
		printf("\n");
	}
	return (0);
}