#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int count = 1;
    vector<int> res;
    int temp = 0;
    while (n)
    {
        int d = n % 10;
        if (d)
        {
            res.push_back(count * d);
        }
        count *= 10;
        n /= 10;
    }
    cout<<res.size()<<endl;
    for(auto it:res)cout<<it<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}