#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int ans = 0;
   while(n--){
      string str;
      cin>>str;
      if(str[0]=='+'||str[2]=='+'){
          ans++;
      }
      else ans--;
   }
   cout<<ans;
    return 0;
}