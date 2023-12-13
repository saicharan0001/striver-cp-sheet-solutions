#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int prev = INT_MIN;
    int ans = 0;
    while(n--){
        int data;
        cin>>data;
        if(data>prev){
           count++;
           prev = data;
        }
        else{
            ans=max(ans,count);
            count = 1;
            prev = data;
        }
    }
    ans = max(ans,count);
    cout<<ans;
    return 0;
}