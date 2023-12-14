#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    string str;
    cin>>str;
    vector<int> vec(255,0);
    for(int i=0;i<str.size();i++){
            vec[int(str[i])]++;
    }
    string temp="";
    for(int i=0;i<255;i++){
        if(vec[i]){
            if(vec[i]%n!=0) {
                cout<<-1;
                return 0;
            }
            else {
                int x = vec[i]/n;
                while(x--){
                    char s = char(i);
                    temp+=s;
                }
            }
        }
    }
    string ans = "";
    while(n--){
         ans+=temp;
    }
    cout<<ans;
    return 0;
}