#include<bits/stdc++.h>
#define int long long
using namespace std;

bool isprime(int n){
    for(int i=2;i*i<=n;++i)
        if(n%i==0)return false;
    return n>1;
}

namespace solve{
    void search(int n){
        for(int i=n-1;i>=0;--i){
            if(isprime(i)){
                cout<<"So nguyen to be hon gan nhat: "<<i<<'\n';
                return;
            }
        }
        cout<<"Khong co so nguyen to be hon gan nhat!";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    bool snt=isprime(n);
    cout<<n<<(snt? "":" khong")<<" la so nguyen to\n";
    if(!snt){
        solve::search(n);
    }
    return 0;
}