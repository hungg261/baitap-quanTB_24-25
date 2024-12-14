#include<bits/stdc++.h>
using namespace std;

const int MAX=1e6;
int Q[MAX+1];

void sieve(){
    for(int i=2;i*i<=MAX;++i){
        if(Q[i]==0)for(int j=i*i;j<=MAX;j+=i){
            Q[j]=i;
        }
    }
}

int res[5000],len=0;
void phantich(int n){
    while(n>1){
        int cur=Q[n];
        if(cur==0)cur=n;
        
        while(n%cur==0){
            n/=cur;
            res[len++]=cur;
        }
    }
    
    sort(res,res+len);
    for(int i=0;i<len;++i){
        cout<<res[i]<<(i==len-1? "":" * ");
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    // dieu kien: n<=10^6
    // dpt: O(MAX * log log MAX)
    cin>>n;
    
    sieve();
    phantich(n);
    return 0;
}