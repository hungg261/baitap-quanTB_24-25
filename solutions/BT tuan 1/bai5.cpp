#include<bits/stdc++.h>
#define int long long
using namespace std;

struct frac{
    int tuso,mauso;
    
    void create(){
        // DKXD: mauso != 0
        cin>>tuso>>mauso;
    }
    
    void toigian(){
        int g=__gcd(tuso,mauso);
        tuso/=g, mauso/=g;
        
        if(mauso<0)
            tuso*=-1,
            mauso*=-1;
    }
    
    void output(){
        if(mauso==1)cout<<tuso<<'\n';
        else cout<<tuso<<'/'<<mauso<<'\n';
    }
} a;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    a.create();
    
    a.toigian();
    a.output();
    return 0;
}