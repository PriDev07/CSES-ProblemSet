#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n<=3 && n!=1){
        cout<<"NO SOLUTION";
    }else{
        if(n%2==0){
            for(long long int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(long long int i=1;i<=n-1;i+=2){
                cout<<i<<" ";
            }
        }else{
            for(long long int i=2;i<=n-1;i+=2){
                cout<<i<<" ";
            }
            for(long long int i=1;i<=n;i+=2){
                cout<<i<<" ";
            }
        }
    }
}