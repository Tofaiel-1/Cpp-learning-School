#include <iostream>
using namespace std;
void solve(long int x1, long int x2, long int x3, long int x4)
{
    if(x1==x3 && x2==x4){
        if(x1==x2) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    else if((x1-x2)>0 && (x3-x4)>0){
            cout <<"YES"<<'\n';
    }
    else if((x1-x2)<0 && (x3-x4)<0){
            cout <<"YES"<<'\n';
    }
    else if((x1-x2)>0 && (x3-x4) < 0){
        cout <<"NO"<<'\n';
    }
    else if((x1-x2)<0 &&(x3-x4) > 0){
        cout <<"NO"<<'\n';
    }
    }
int main()
{
    int t;
    long int x1, x2, x3, x4;
    cin >> t;
    while(t>0){
        cin >> x1 >> x2 >> x3 >> x4;
        solve(x1, x2, x3, x4);
        t--;
    }
}
