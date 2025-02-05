#include<bits/stdc++.h>
using namespace std;

const int MAX=1e6;
int a[MAX+1],n;

void solve(){
    int cur=1e9;
    long long ans=0;
    for(int i=1;i<=n;++i){
        cur=min(cur,a[i]);
        ans+=cur*3LL;
    }
    
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    
    solve();
    return 0;
}
