#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int temp;
            cin>>temp;
            if(temp){
               ans = abs(i-3)+abs(j-3);
               cout<<ans;
               return 0;
            }
        }
    }
    return 0;
}