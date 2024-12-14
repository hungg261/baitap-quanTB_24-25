#include<bits/stdc++.h>
#define int long long
using namespace std;

int sumdiv(int n){
    int sum=0;
    for(int i=1;i*i<=n;++i){
        if(n%i==0){
            sum+=i;
            if(i*i!=n)sum+=n/i;
        }
    }
    return sum;
}

namespace solve{
    void cach1(int n){ // O(n*sqrt(n))
        for(int i=2;i<n;i+=2){
            if(sumdiv(i)==2*i)
                cout<<i<<' ';
        }
    }
    
    void cach2(int n){ // O(1)
        if(n>6)cout<<6<<' ';
        if(n>28)cout<<28<<' ';
        if(n>496)cout<<496<<' ';
        if(n>8128)cout<<8128<<' ';
        if(n>33550336)cout<<33550336<<' ';
        if(n>8589869056LL)cout<<8589869056LL<<' ';
        if(n>137438691328LL)cout<<137438691328LL<<' ';
        if(n>2305843008139952128LL)cout<<2305843008139952128LL<<' ';
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    if(n<=100000)solve::cach1(n);
    else solve::cach2(n);
    return 0;
}