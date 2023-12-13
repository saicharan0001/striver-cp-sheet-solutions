#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    unordered_map<char,int> mpp;
    mpp['a']=1;mpp['e']=1;mpp['o']=1;mpp['u']=1;mpp['i']=1;mpp['A']=1;mpp['E']=1;mpp['I']=1;mpp['O']=1;mpp['U']=1;mpp['y']=1;mpp['Y']=1;
    string ans="";
    for(int i=0;i<str.size();i++){
        if(mpp[str[i]]){continue;}
        else{
            ans+='.';
            if(str[i]<='Z'&&str[i]>='A') str[i]=str[i]-('A'-'a');
            ans+=str[i];
        }
    }
    cout<<ans;
    return 0;
}