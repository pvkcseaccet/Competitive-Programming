/* -----------------------------------------------------------------------------
   Author   : pvkcse
   StudentAt: Alagappa chettiar college of engineering and technology,karaikudi
   Task     : ABSP1 - Spoj         
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
#define LL long long int
#define li long int
#define ch char
#define gi(a) readFast<int>(&a)
#define gl(a) readFast<li>(&a)
#define gll(a) readFast<lli>(&a)
# define inf 1e18+7

using namespace std;


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


 
using namespace std;
 
int main(void)
{
	LL N , T;
	for (scanf("%lld",&T);T--;)
	{
		scanf("%lld",&N);
		LL revenue[N+1],pref[N+1],dup[N+1];
		memset(pref,0,N+1);
		for (int i=0;i<N;i++)
		{
			LL top;
			scanf("%lld",&top);
			revenue[i]=top;
		
		}
		std::sort(revenue , revenue+N);
		pref[N-1] = revenue[N-1];
		for (int i=N-2;i>=0;i--)
			pref[i] = pref[i+1]+revenue[i];
		if (N==2)
		{
			printf("%lld",abs(revenue[0]-revenue[1]));
			return 0;
		}
	
		LL ans=0,cus=0;
		for (int i=0;i<N-1;i++)
		{	
			ans += abs((revenue[i]*(N-i-1)) - pref[i+1] );	
		}
		printf("%lld\n",ans);
	}
	return (0);
} 