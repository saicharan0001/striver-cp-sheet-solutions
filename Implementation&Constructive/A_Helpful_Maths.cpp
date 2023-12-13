#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string ans="";
    cin>>str;
    int i = 0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    while(i<str.size()){
       if(str[i]=='1')ones++;
       else if(str[i]=='2') twos++;
       else if(str[i]=='3') threes++;
       i++;
    }
    while(ones--){
      ans+='1';
      ans+='+';
    }
    while(twos--){
      ans+='2';
      ans+='+';
    }
    while(threes--){
        ans+='3';
        ans+='+';
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}