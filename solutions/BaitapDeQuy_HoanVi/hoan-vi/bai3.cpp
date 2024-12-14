#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    string H;
    cin>>H;
    
    if(prev_permutation(begin(H),end(H))){
        cout<<H<<'\n';
    }
    else cout<<"0\n";
    return 0;
}