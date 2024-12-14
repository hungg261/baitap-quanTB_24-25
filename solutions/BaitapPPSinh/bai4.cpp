#include<bits/stdc++.h>
using namespace std;

void solve(int len,int n,int cur,int cnt){
    if(cnt<n-len&&cnt>n/2)return;
    if(len==n){
        if(cnt!=n/2)return;
        for(int i=0;i<n;++i){
            cout<<!!(cur&(1<<i));
        }
        cout<<'\n';
        return;
    }
    
    solve(len+1,n,cur*2,cnt);
    solve(len+1,n,cur*2+1,cnt+1);
}

signed main(){
    cout<<"Nhap do dai n: ";
    int n;
    cin>>n;
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve(0,n,0,0);
    return 0;
}