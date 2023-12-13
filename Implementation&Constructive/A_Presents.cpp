#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    vector<int> vec(n);
    while(n--){
    int data;
    cin>>data;
    vec[data-1]=i;
    i++;
    }
    for(auto it:vec)cout<<it<<" ";
    return 0;
}