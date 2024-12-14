#include<bits/stdc++.h>
#define int long long
using namespace std;

int res[5000],len=0;
void phantich(int n){
    while(n%2==0)
        n/=2,
        res[len++]=2;
        
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0)
            n/=i,
            res[len++]=i;
    }
    if(n>1)res[len++]=n;
    
    for(int i=0;i<len;++i){
        cout<<res[i]<<(i==len-1? "":" * ");
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    // dpt: O(sqrt(n))
    cin>>n;
    
    phantich(n);
    return 0;
}