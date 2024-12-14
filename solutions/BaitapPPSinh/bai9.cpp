#include<bits/stdc++.h>
using namespace std;

void solve(int len,int n,int cur,int cnt1,int k){
    if(cnt1>k)return;
    if(len==n){
        if(cnt1!=k)return;
        for(int i=0;i<n;++i){
            cout<<!!(cur&(1<<i));
        }
        cout<<'\n';
        return;
    }
    
    solve(len+1,n,cur*2,cnt1,k);
    solve(len+1,n,cur*2+1,cnt1+1,k);
}

signed main(){
    cout<<"Nhap do dai n: ";
    int n;
    cin>>n;
    
    cout<<"Nhap so k: ";
    int k;
    cin>>k;
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve(0,n,0,0,k);
    return 0;
}