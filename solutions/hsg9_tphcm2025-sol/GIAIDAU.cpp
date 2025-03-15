#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN=1e5;
int a[MAXN+5],n,q,prefix[MAXN+5];

void solve(){
    int u,v;
    cin>>u>>v;
    
    int mid=(prefix[u-1]+prefix[v])/2;
    int idx=upper_bound(prefix+u,prefix+v+1,mid)-prefix;
    
    int ans1=llabs(prefix[u-1]+prefix[v]-2*prefix[idx]),
        ans2=llabs(prefix[u-1]+prefix[v]-2*prefix[idx-1]);
    cout<<min(ans1,ans2)<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("GIAIDAU.INP","r",stdin);
    freopen("GIAIDAU.OUT","w",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        prefix[i]=prefix[i-1]+a[i];
    }
    
    while(q--){
        solve();
    }
    return 0;
}
