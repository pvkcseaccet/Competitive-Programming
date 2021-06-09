/* -----------------------------------------------------------------------------
   Author   : pvkcse
   StudentAt: Alagappa chettiar college of engineering and technology,karaikudi
   Task     : FARIDA (Princess Farida) - Spoj         
   -----------------------------------------------------------------------------*/


# include<bits/stdc++.h>
# define lli long long int
# define endl "\n"
# define space " "
 
using namespace std;
 
int main(void)
{
    int test;
    int n;
    lli a[100010];
    lli dp[100010];
    cin>>test;
    for (int i=0;i<test;i++)
    {
        cin>>n;
        for (int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        dp[0] = 0;
        dp[1] = a[0];
        dp[2] = max(dp[1],a[1]);
        for (int j=3;j<=n;j++)
        {
            dp[j] = max(dp[j-2]+a[j-1],dp[j-1]);
        }
        cout<<"Case "<<i+1<<": "<<dp[n]<<endl;
    }
    return (0);
} 