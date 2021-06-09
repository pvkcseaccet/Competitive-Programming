/* ------------------------------------------------------
   Author   : pvkcse
   StudentAt: Accet,karaikudi
   Task     : PCPC12J-SPOJ
   ------------------------------------------------------ */

# include<bits/stdc++.h>
# define lli long long int
# define endl "\n"
# define pc(a) putchar_unlocked(a)
 
using namespace std;
 
int main(void)
{
    int test;
    int t , n;
    cin>>test;
    for (;test-- >0;)
    {
        lli freq[101] , hold[10010],ma=-1,mi=-1;
        bool answered = false;
        memset(freq,0,sizeof(freq));
        cin >> n;
        for (int i=0;i<n;i++)
        {
                cin>>hold[i];
                freq[hold[i]]+=1;
        }
        lli ans = -1;
        for (int i=0;i<n;i++)
        {
            //cout<<freq[hold[i]]<<" "<<hold[i]<<endl;
            if (freq[hold[i]]%hold[i] == 0)
            {
                if (freq[hold[i]]>ma||(freq[hold[i]]==ma && hold[i]<mi)) 
                {
                    ans = hold[i];
                    mi = ans;
                    ma=freq[hold[i]];
                }
            }
        }
        cout<<ans<<endl;
    }
    return (0);
} 