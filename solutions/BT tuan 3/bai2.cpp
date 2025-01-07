#include<bits/stdc++.h>
#define int long long
using namespace std;

string toString(int n){
    string res="";
    while(n>0){
        res+=(n%10) +'0';
        n/=10;
    }
    reverse(begin(res),end(res));
    return res;
}

int toInt(string s){
    int n=0;
    for(int k:s){
        n=n*10+(k-'0');
    }
    return n;
}

template<typename func>
int sort_int(int n,func cmp){
    string nstr=toString(n);
    sort(begin(nstr),end(nstr),cmp);
    
    return toInt(nstr);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    int cnt=0;
    do{
        n=sort_int(n,greater<int>())-sort_int(n,less<int>());
        ++cnt;
    } while(n!=0&&n!=6174);
    cout<<cnt<<'\n';
    return 0;
}
