#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    string X;
    cout<<"Nhap so n: ";cin>>n;
    cout<<"Nhap hoan vi X (X phai la hoan vi cua n so nguyen duong dau tien): ";cin>>X;
    int k;
    cout<<"Nhap so k: ";cin>>k;
    
    next_permutation(begin(X),end(X));
    do{
        if(stoll(X)%k==0){
            cout<<X<<'\n';
            goto found;
        }
    } while(next_permutation(begin(X),end(X)));
    
    cout<<"Khong co hoan vi Y nao thoa man Y>X va Y chia het cho k!";
    found:
    return 0;
}