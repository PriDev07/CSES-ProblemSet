#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int ans=0;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            ans+=arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }
    }
    cout<<ans;
}