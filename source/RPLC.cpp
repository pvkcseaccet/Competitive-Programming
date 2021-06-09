# include<bits/stdc++.h>
# define lli long long int
# define endl "\n"
 
using namespace std;
 
int main(void)
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int test;
    lli answer , energy , cokes ,ans;
    cin>>test;
    for (int i=1;i<=test;i++)
    {
        ans =10000100;
        answer = 0;
        cin>>cokes;
        for (int j=0;j<cokes;j++)
        {
            cin>>energy;
            answer += energy;
            if (answer < 0 && answer<ans) ans = answer;
        }
        cout<<"Scenario #"<<i<<": ";
        if (ans<0) cout<<-1*(ans)+1<<endl;
        else cout<<"1"<<endl;
    }
    return (0);
} 