/* -----------------------------------------------------------------------------
   Author   : pvkcse
   StudentAt: Alagappa chettiar college of engineering and technology,karaikudi
   Task     : HEADSHOT - Spoj         
   -----------------------------------------------------------------------------*/

# include<iostream>
# include<cstdio>
# include<cstring>
# include<string>
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
	char *st=new char[1001];
	int length;
	//cin>>st;
	gets(st);
	length=strlen(st);
	int live=0,die=0;
	if(st[0]=='0' && st[length-1]=='0')
		live++;
	else if(st[0]=='0' && st[length-1]=='1')
		die++;
		
	for(int i=1;i<length;i++)
	{
		if (st[i]=='1')
			continue;
		else if(st[i]=='0' && st[i-1]=='0')
			live++;
		else if (st[i]=='0' && st[i-1]=='1')
			die++;
	}
	if (live==length || live==die)
		cout<<"EQUAL"<<endl;
	else if (live>die)
		cout<<"SHOOT"<<endl;
	else if(live<die)
		cout<<"ROTATE"<<endl;
	return(0);		
} 