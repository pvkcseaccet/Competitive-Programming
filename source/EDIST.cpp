/* -----------------------------------------------------------------------------
   Author   : pvkcse
   StudentAt: Alagappa chettiar college of engineering and technology,karaikudi
   Task     : EDIST (Edit Distance) - Spoj         
   -----------------------------------------------------------------------------*/


# include<bits/stdc++.h>
 
int min(int a,int b,int c)
{
    if (a<b && a<c) return a;
    else if (b<c) return b;
    return c;
}
using namespace std;
 
int main(void)
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int test;
    int m , n ;
    static int dp[2015][2015];
    char sm[2015],sn[2015];
    cin>>test;
    while(test--){
    cin>>sm>>sn;
    m = strlen(sm);
    n = strlen(sn);
    for (int i=0;i<=m;i++)
    {
        dp[i][0] = i;
    }
    for (int i=1;i<=n;i++)
    {
        dp[0][i] = i;
    }
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (sm[i-1] == sn[j-1])
            {
                dp[i][j] = min(1+dp[i-1][j],1+dp[i][j-1],dp[i-1][j-1]);
            }
            else
            {
                dp[i][j] = min(1+dp[i-1][j],1+dp[i][j-1],1+dp[i-1][j-1]);
            }   
        }   
    }
    cout<<dp[m][n]<<endl;
    }
    return (0);
} 