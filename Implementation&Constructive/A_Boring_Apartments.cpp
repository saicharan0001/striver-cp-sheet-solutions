#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans = 0;
    int x = (n%10)-1;
    ans = 10*x;
    int count =0;
    while(n){
        n=n/10;
       count++;
    }
    ans = ans + count*(count+1)/2;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}