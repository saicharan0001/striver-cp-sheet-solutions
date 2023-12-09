#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int maxi = max(max(x,y),z);
    int mini = min(min(x,y),z);
    int temp = x+y+z-maxi-mini;
    cout<<abs(x-temp)+abs(y-temp)+abs(z-temp);
    return 0;
} 