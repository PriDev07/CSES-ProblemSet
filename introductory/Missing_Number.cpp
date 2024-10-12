#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,sum=0,ans,check,oversome;
    cin>>n;
    oversome=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        cin>>check;
        sum+=check;
    }
    ans=oversome-sum;
    cout<<ans;
}