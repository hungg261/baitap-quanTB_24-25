#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=1e5;
int a[MAX+5],n,mark[1001];

void solve(){
    int ans=0;
    for(int i=0;i<=1000;++i){
        ans+=mark[i]*(mark[i]-1)/2;
        for(int j=i+1;j<=1000;++j){
            if(__builtin_popcount(i^j)==1){
                ans+=mark[i]*mark[j];
            }
        }
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        ++mark[a[i]];
    }
    
    solve();
    return 0;
}
