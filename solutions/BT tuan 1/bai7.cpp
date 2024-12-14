#include<bits/stdc++.h>
#define int long long
#define double long double
using namespace std;

int power(int a,int b){
    int ans=1;
    while(b--)ans*=a;
    return ans;
}

int sign(int n){
    if(n==0)return 1;
    return n/abs(n);
}

void solve(double n,int k){
    if(k>=0){
        cout<<fixed<<setprecision(k)<<n<<'\n';
        return;
    }
    
    int bound=power(10,-k),
        mul=n/bound+sign(n)*0.5;
    cout<<bound*mul<<'\n';
}

signed main(){
    // ios_base::sync_with_stdio(0);cin.tie(0);
    double n;
    int k;
    cout<<"Nhap so thuc x: ";cin>>n;
    cout<<"Do chinh xac: ";cin>>k;
    
    solve(n,k);
    return 0;
}