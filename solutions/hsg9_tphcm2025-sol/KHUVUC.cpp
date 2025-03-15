#include<bits/stdc++.h>
#define left sussy
#define right baka
#define int long long
using namespace std;

const int MAXN=1e5;
int a[MAXN+5],n,left[MAXN+5],right[MAXN+5];

void compute(){
    left[1]=a[1];
    for(int i=2;i<=n;++i){
        left[i]=__gcd(left[i-1],a[i]);
    }
    
    right[n]=a[n];
    for(int i=n-1;i>=1;--i){
        right[i]=__gcd(right[i+1],a[i]);
    }
}

void solve(){
    compute();
    int ans=0;
    for(int i=1;i<=n;++i){
        ans=max(ans,__gcd(left[i-1],right[i+1]));
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("KHUVUC.INP","r",stdin);
    freopen("KHUVUC.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    
    solve();
    return 0;
}
