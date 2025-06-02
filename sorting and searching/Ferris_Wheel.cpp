#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,ans=0;
    cin>>n>>k;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(long long i=0;i<n;i++){
        if(arr[i]+arr[i+1]<=k){
            ans++;
            i++;
        }else{
            ans++;
        }
    }
    cout<<ans;
}