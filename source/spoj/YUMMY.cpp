# include<bits/stdc++.h>
# define lli long long int
# define endl "\n"
 
using namespace std;
 
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    int n;
    int pre_comp_values[] = {1,1,1,4,6,19,43,120,307,866,2336,6588,18373,52119,147700,422016};
    cin>>test;
    for (int i=1;i<=test;i++)
    {
        cin>>n;
        cout<<"Case #"<<i<<": "<<pre_comp_values[n-1]<<endl;
    }
    return (0);