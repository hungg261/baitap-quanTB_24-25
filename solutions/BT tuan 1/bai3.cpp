#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;

namespace solve{
    void cach1(string s){
        cout<<"So chu so: "<<s.size()<<'\n';
        cout<<"So cuoi cung: "<<s.back()<<'\n';
        cout<<"So dau tien: "<<s[0]<<'\n';
        cout<<"Tong cac chu so: "<<accumulate(begin(s),end(s),0)-'0'*s.size()<<'\n';
        while(s.back()=='0')s.pop_back();
        reverse(begin(s),end(s));
        cout<<"So dao nguoc: "<<s<<'\n';
    }
    
    void cach2_1(ull n){
        string s="";
        while(n>0){
            s+=n%10+'0';
            n/=10;
        }
        reverse(begin(s),end(s));
        cach1(s);
    }
    
    void cach2_2(ull n){
        ull temp=n,rev=0;
        int cntdigit=0,
            digitsum=0;
        while(temp>0){
            rev=rev*10+temp%10;
            ++cntdigit;
            digitsum+=temp%10;
            temp/=10;
        }
        
        cout<<"So chu so: "<<cntdigit<<'\n';
        cout<<"So cuoi cung: "<<n%10<<'\n';
        cout<<"So dau tien: "<<rev%10<<'\n';
        cout<<"Tong cac chu so: "<<digitsum<<'\n';
        cout<<"So dao nguoc: "<<rev<<'\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ull n;
    cin>>n;
    
    solve::cach2_2(n);
    return 0;
}