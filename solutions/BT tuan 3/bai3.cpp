#include<bits/stdc++.h>
#define int long long
using namespace std;

namespace pre_generate{
    bool ktsnt(int n){
        for(int i=2;i*i<=n;++i){
            if(n%i==0)return false;
        }
        return true;
    }
    
    vector<int>store;
    void dfs(int cur,const int&high){
        if(cur<=high){
            store.push_back(cur);
        }
        else return;
        
        for(int digit:{1,3,7,9}){
            int new_cur=cur*10+digit;
            if(ktsnt(new_cur)){
                dfs(new_cur,high);
            }
        }
    }
    
    const int MAXN=35000;
    void compute(){
        for(int base:{2,3,5,7})dfs(base,MAXN);
        for(int superprime:store)cout<<superprime<<',';
    }
}

int lookup[50]={2,3,5,7,23,29,31,37,53,59,71,73,79,233,239,293,311,313,317,373,
                379,593,599,719,733,739,797,2333,2339,2393,2399,2939,3119,3137,
                3733,3739,3793,3797,5939,7193,7331,7333,7393,23333,23339,23399,
                23993,29399,31193,31379};

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    auto    low=upper_bound(lookup,lookup+50,n)-1,
            high=lower_bound(lookup,lookup+50,n);
        
    int low_diff=n-*low,
        high_diff=*high-n;
    
    if(low-lookup!=-1&&low_diff<=high_diff)cout<<*low<<'\n';
    if(high_diff<=low_diff&&*low<*high)cout<<*high<<'\n';
    return 0;
}
