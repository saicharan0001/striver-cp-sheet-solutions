#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin>>t;
    unordered_map<char,int> mpp;
    mpp[t[0]]=1;
    mpp[t[1]]=1;
    int n = 5;
    while(n--){
        string str;
        cin>>str;
        if(mpp[str[0]]==1||mpp[str[1]]==1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}