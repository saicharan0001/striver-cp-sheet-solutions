#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxi = 0;
    int n;
    cin>>n;
    int count = 0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        count = count-a+b;
        maxi = max(maxi,count);
    }
    cout<<maxi;
    return 0;
}