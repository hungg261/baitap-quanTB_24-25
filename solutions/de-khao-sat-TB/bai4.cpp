#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=30000;
int n;
string a,b;
vector<int>store;

void solve(){
    for(int i=0;i<n;++i){
        if(a[i]!=b[i]){
            store.push_back(i+1);
            for(int j=i+1;j-1<n;j+=i+1){
                a[j-1]=a[j-1]=='0'?'1':'0';
            }
        }
    }
    cout<<store.size()<<'\n';
    for(int k:store)cout<<k<<' ';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>a>>b;
    
    solve();
    return 0;
}
