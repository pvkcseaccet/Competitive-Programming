/* ------------------------------------------------------
   Author   : pvkcse
   StudentAt: Accet,karaikudi
   Task     : OPCPIZZA-SPOJ
   ------------------------------------------------------ */
 
#include<cstdio>
#include<bits/stdc++.h>
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
 
#define MEM(a,b) memset(a,(b),sizeof(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b)  ((a) < (b) ? (a) : (b))
#define MP make_pair
#define pb push_back
#define inf 1000000000
#define M 1000000007
#define lli long long int
#define li long int
//#define i int
#define ch char
#define gi(a) readFast<i>(&a)
#define gl(a) readFast<li>(&a)
#define gll(a) readFast<lli>(&a)
 
using namespace std;
 
 
/*Alternate function using fgetc() used in the place of getchar_unlocked() */
template <class fast_io>
inline fast_io readFast(fast_io *a)
{
	register char c=0;
	register bool sign=false;
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
		*a=*a*10+(c-48);
		c=fgetc(stdin);
	}
	if (sign)
		return -*a;
	else
		return *a;
}
 
 

int main(void)
{
	int test,pizza,price,friends,forward,reverse,ans,i,j;
	//lli num,ans=0;
	scanf("%d",&test);
	while (test--)
	{
		scanf("%d %d",&friends,&price);
		int money_list[friends];
		for(i=0;i<friends;i++)
		{
			scanf("%d",&money_list[i]);
		}
		stable_sort(money_list,money_list+friends);
		forward=0;
		reverse=friends-1;
		ans=0;
		int temp_val;
		while (reverse>forward)
		{
			temp_val=money_list[forward]+money_list[reverse];
			if (temp_val == price )
			{
				ans++;
				forward++;
				reverse--;
			}
			else if(temp_val < price)
			{
				forward++;
			}
			else
			{
				reverse--;
			}
		}
		printf("%d\n",ans);
	}
	return (0);
}
 