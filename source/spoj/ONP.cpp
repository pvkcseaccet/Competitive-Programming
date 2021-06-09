/* ------------------------------------------------------
   Author   : pvkcse
   StudentAt: Accet,karaikudi
   Task     : ONP-SPOJ
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
	char alpha[400],symbol[400];
	unsigned long test,stack_top;
	cin>>test;
	for (int i=0;i<test;i++)
	{
		stack_top=0;
		scanf("%s",alpha);
		//cout<<endl;
		printf("\n");
		int loop=0;
		for(;alpha[loop];loop++)
		{
			if (alpha[loop] == '(')
				continue;
			else if(alpha[loop]==')')
			{
				printf("%c",symbol[stack_top]);
				stack_top--;
			}
			else if (alpha[loop]=='+' || alpha[loop]=='-' || alpha[loop]=='*' || alpha[loop]=='/' || alpha[loop]=='^')
			{
				stack_top++;
				symbol[stack_top]=alpha[loop];
			}
			else
				cout<<alpha[loop];
			//loop++;
		}
		cout<<endl;
	}
	return(0);
}  