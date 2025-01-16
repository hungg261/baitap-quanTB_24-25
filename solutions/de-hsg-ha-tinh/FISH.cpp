#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=1e6;
int a[MAX+1],n;

void solve(){
    int cur=a[1];
    int ans=cur*3;
    for(int i=2;i<=n;++i){
        if(a[i-1]>a[i]){
            cur=a[i];
        }
        
        ans+=cur*3;
    }
    
    cout<<ans<<'\n';
}

signed main(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    
    solve();
    return 0;
}