/* -----------------------------------------------------------------------------
   Author   : pvkcse
   StudentAt: Alagappa chettiar college of engineering and technology,karaikudi
   Task     : MCOINS-SPOJ
   Algo		: DP           
   -----------------------------------------------------------------------------*/
 
//Header Files(including Some C HeaderFiles)
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<string>
#include<cfloat>
#include<cmath>
#include<iostream>
#include<fstream>
#include<cassert>
#include<iterator>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
#include<cassert>
 
//Some Simple Macro Substitutions
#define MEM(a,b) memset(a,(b),sizeof(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b)  ((a) < (b) ? (a) : (b))
#define MP make_pair
#define pb push_back
#define inf 1000000000
#define mod 1000000007
#define lli long long int
#define li long int
#define ch char
#define gi(a) readFast<int>(&a)
#define gl(a) readFast<li>(&a)
#define gll(a) readFast<lli>(&a)
 
using namespace std;
 
//Function To Fetch The Input From Buffer
//Fast IO BEGINS...
template <class fast_io>
inline fast_io readFast(fast_io *a)
{
	//To Read A Character from Buffer
	char c=0;
	bool sign=false;
	while(c<33 && c!='-')
		//Alternate function in the place of getchar_unlocked(Unix) in Windows
		c=fgetc(stdin);
	*a=0;
	if (c=='-')
	{
		sign=true;
		c=fgetc(stdin);
	}
	while(c>33)
	{
		*a=*a*10+(c-48);
		c=fgetc(stdin);
	}
	if (sign)
		return -*a;
	else
		return *a;
} //Fast IO ENDS...
 
bool dp[1000010];
int n=1000010;
 
void solve()
{
	int l,k,m,num;
	gi(l);
	gi(k);
	gi(m);
	dp[0]=true;
	for (int i=0;i<n;i++)
	{
		dp[i]=false;
		if (i-1>=0 && dp[i-1]==false)
		{
			dp[i]=true;
		}
		else
		{
			if (i-l>=0 && dp[i-l]==false)
			{
				dp[i]=true;
			}
			else
			{
				if (i-k>=0 && dp[i-k]==false)
				{
					dp[i]=true;
				}
			}
		}
	}
	for (int i=0;i<m;i++)
	{
		gi(num);
		if (dp[num]==true)
		{
			cout<<"A";
		}
		else
		{
			cout<<"B";
		}
	}
	cout<<endl;
}
 
int main(void)
{
	solve();
	return (0);
}