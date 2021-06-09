//Since N is too small prefix array is enough...!!!
# include<bits/stdc++.h>
# define space " "
# define endl "\n"
# define lli long long int
 
using namespace std;
 
int main(void)
{
    int test , pre_xor[2015] , hold[2015];
    cin>>test;
    pre_xor[0] = 0;
    for (int i=0;i<test;i++)
    {
        cin>>hold[i];
        pre_xor[i+1] = pre_xor[i]^hold[i];
    }
    int answer =  0 , start = 0, end = 0;
    for (int i=1;i<=test;i++)
    {
        for (int j=i;j<=test;j++)
        {
            if ((pre_xor[j]^pre_xor[i-1]) > answer)
            {
                answer = pre_xor[j] ^ pre_xor[i-1];
                start = i;
                end = j;
            }
        }
    }
    cout<<answer<<endl<<start<<space<<end<<space<<endl;
    return (0);
} 