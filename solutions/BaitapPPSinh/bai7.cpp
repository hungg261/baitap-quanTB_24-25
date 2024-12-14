#include<bits/stdc++.h>
using namespace std;

void solve(int len,int n,int cur,int cnt0,int cnt1){
    // if(abs(cnt0-cnt1)<n-len)return;
    if(len==n){
        if(cnt0!=cnt1)return;
        for(int i=0;i<n;++i){
            cout<<!!(cur&(1<<i));
        }
        cout<<'\n';
        return;
    }
    
    if(cur%2==0){
        solve(len+1,n,cur*2,cnt0+1,cnt1);
        solve(len+1,n,cur*2+1,cnt0,cnt1);
    }
    else{
        solve(len+1,n,cur*2+1,cnt0,cnt1+1);
        solve(len+1,n,cur*2,cnt0,cnt1);
    }
}

signed main(){
    cout<<"Nhap do dai n: ";
    int n;
    cin>>n;
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve(1,n,0,0,0);
    solve(1,n,1,0,0);
    return 0;
}