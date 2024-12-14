#include<bits/stdc++.h>
using namespace std;

signed main(){
    cout<<"Nhap do dai n: ";
    int n;
    cin>>n;
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout<<"Cac so co the duoc bieu dien bang day nhi phan do dai n la:\n";
    for(int i=0;i<(1<<n);++i)
        cout<<i<<'\n';
    return 0;
}