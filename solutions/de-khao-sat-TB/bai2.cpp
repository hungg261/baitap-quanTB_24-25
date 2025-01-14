#include<bits/stdc++.h>
using namespace std;

unordered_set<string>store;
signed main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    
    int n=a.size(),m=b.size();
    for(int i=0;i<n;++i){
        string cur="";
        for(int j=i;j<n;++j){
            cur+=a[j];
            store.insert(cur);
        }
    }
    
    int ans=0;
    for(int i=0;i<m;++i){
        string cur="";
        for(int j=i;j<m;++j){
            cur+=b[j];
            if(store.count(cur)){
                ans=max(ans,(int)cur.size());
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}
