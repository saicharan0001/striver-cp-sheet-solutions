#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(7);
    for (int i = 0; i < 7; i++)
        cin >> vec[i];
        int count = 1;
    int i =0;
    while(true){
        n-=vec[i];
        if(n<=0) break;
        i=(i+1)%7;
    }
    cout<<i+1;
    return 0;
}