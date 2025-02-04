#include<bits/stdc++.h>
using namespace std;

const int MAX=2e5;
int n,m,temp[MAX+1],t[MAX+1];
multiset<int,greater_equal<int>>h;

void solve(){
    for(int i=0;i<m;++i){
        auto pos=h.upper_bound(t[i]);
        
        if(pos==h.end())cout<<"-1\n";
        else{
            cout<<*pos<<'\n';
            h.erase(pos);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        int cur;
        cin>>cur;
        
        h.insert(cur);
    }
    for(int i=0;i<m;++i){
        cin>>t[i];
    }
    
    solve();
    return 0;
}
