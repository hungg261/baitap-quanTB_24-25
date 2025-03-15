#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN=2e5;
int a[MAXN+5],n;

int temp[MAXN+5];
void compress(){
    for(int i=1;i<=n;++i){
        temp[i]=a[i];
    }
    
    sort(temp+1,temp+n+1);
    for(int i=1;i<=n;++i){
        a[i]=lower_bound(temp+1,temp+n+1,a[i])-temp;
    }
}

int BIT[MAXN+5];
void update(int idx,int value){
    while(idx<=n){
        BIT[idx]+=value;
        idx+=idx&(-idx);
    }
}

int get(int idx){
    int res=0;
    while(idx>0){
        res+=BIT[idx];
        idx-=idx&(-idx);
    }
    return res;
}

void solve(){
    int ans=0;
    for(int i=1;i<=n;++i){
        ans+=get(n)-get(a[i]);
        update(a[i],1);
    }
    
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("SAPXEP.INP","r",stdin);
    freopen("SAPXEP.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    
    compress();
    solve();
    return 0;
}
