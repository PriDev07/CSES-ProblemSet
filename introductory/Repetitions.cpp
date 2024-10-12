#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long int ans=0,lastans=0;
    for(int i=0;i<s.length();){
        if(s[i]==s[i+1]){
            lastans++;
            i++;
        }else{
            lastans=0;
            i++;
        }
        if(lastans>ans){
            ans=lastans;
        }
    }
    cout<<ans+1;
}