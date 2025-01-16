#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=1e6+100;
bool notPrime[MAX+1];
vector<int>prime;

namespace sub2{
    bool check_snt(int n){
        for(int i=2;i*i<=n;++i){
            if(n%i==0)return false;
        }
        return n>1;
    }
    
    void query(int n){
        for(int i=n;;++i){
            if(check_snt(i)){
                cout<<i<<'\n';
                return;
            }
        }
    }
}

namespace sub3{
    void sieve(){
        notPrime[0]=notPrime[1]=true;
        for(int i=2;i*i<=MAX;++i){
            for(int j=i*i;j<=MAX;j+=i){
                notPrime[j]=true;
            }
        }
        
        for(int i=2;i<=MAX;++i){
            if(!notPrime[i])
                prime.push_back(i);
        }
    }
    
    void query(int n){
        cout<<*lower_bound(begin(prime),end(prime),n)<<'\n';
    }
}

signed main(){
    int Q;
    cin>>Q;
    
    sub3::sieve();
    while(Q--){
        int n;
        cin>>n;
        
        if(n>1000000)sub2::query(n);
        else sub3::query(n);
    }
    return 0;
}