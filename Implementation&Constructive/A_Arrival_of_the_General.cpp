#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int min_pos = -1;
    int max_pos = -1;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        if(data<=mini){
            mini = data;
            min_pos = i;
        }
        if(data>maxi){
            maxi = data;
            max_pos = i;
        }
    }
    if(max_pos<min_pos){
        cout<<max_pos+n-1-min_pos;
    }
    else cout<<max_pos+n-2-min_pos;
    return 0;
}