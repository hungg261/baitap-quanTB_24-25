#include<bits/stdc++.h>
using namespace std;

namespace utils{
    bool checkrange(int x,int l,int h){
        return x>=l&&x<=h;
    }
    
    string to_output(bool ans){
        return ans? "Hop le":"Khong hop le";
    }
};

namespace date_utils{
    const int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    const string thu[7]={"Thu hai","Thu ba","Thu tu","Thu nam","Thu sau","Thu bay","Chu nhat"};
    
    bool isleap(int year){
        return (year%4==0&&year%100!=0)||(year%400==0);
    }
    
    int getday(int month,int year){
        if(isleap(year)&&month==2)return 29;
        return months[month];
    }
    
    namespace main{
        bool isvalid(int d,int m,int y){
            int total_day=getday(m,y);
            return utils::checkrange(d,1,total_day)&&utils::checkrange(m,1,12);
        }
        
        string get_wday(int d,int m,int y){
            if(m<=2){
                m+=12;
                --y;
            }
            
            int idx=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
            return thu[idx];
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int d,m,y;
    cin>>d>>m>>y;
    bool valid=date_utils::main::isvalid(d,m,y);
    cout<<utils::to_output(valid)<<'\n';
    if(valid)cout<<date_utils::main::get_wday(d,m,y)<<'\n';
    
    return 0;
}
