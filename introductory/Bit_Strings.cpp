#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    double x = pow(2,n);
    double y = pow(10,9)+7;
    cout<<x%y;
}