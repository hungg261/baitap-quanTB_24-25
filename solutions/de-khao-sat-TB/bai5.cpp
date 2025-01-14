#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN=1000,MAXM=1000;
int n,m,ans=0;
bool S[MAXN+1][MAXN+1];
struct pack{
    int u,v,w;
} a[MAXM];

bool op(pack&A,pack&B){
    return A.w<B.w;
}

bool visited[MAXN+1];
bool dfs(int u,int prv){
    if(visited[u])return true;
    visited[u]=true;
    
    for(int v=1;v<=n;++v){
        if(v!=prv&&(S[u][v]||S[v][u])){
            if(dfs(v,u))return true;
        }
    }
    return false;
}

void solve(){
    for(int i=1;i<=m;++i){
        fill(visited,visited+n+1,false);
        S[a[i].u][a[i].v]=true;
        if(!dfs(a[i].u,0)){
            cout<<"("<<a[i].u<<","<<a[i].v<<") = "<<a[i].w<<'\n';
            ans+=a[i].w;
        }
        else{
            S[a[i].u][a[i].v]=false;
        }
    }
}

signed main(){
    cin>>n>>m;
    for(int i=1;i<=m;++i){
        cin>>a[i].u>>a[i].v>>a[i].w;
    }
    sort(a+1,a+m+1,op);
    
    solve();
    cout<<"Tong: "<<ans<<'\n';
    return 0;
}
