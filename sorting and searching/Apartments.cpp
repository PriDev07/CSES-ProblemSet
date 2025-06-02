#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> vi,ai;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vi.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        ai.push_back(x);
    }
    sort(vi.begin(),vi.end());
    sort(ai.begin(),ai.end());
    int l=0,r=0,ans=0;
    while(l<n && r<m){
        if(abs(vi[l]-ai[r])<=k){
            ans++;
            l++;
            r++;
        }
        else if(ai[r]<vi[l]) {r++;}
        else {l++;}
    }
    cout<<ans;
}