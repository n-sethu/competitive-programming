#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    ll passed=0;
    ll ab= a+b;

    for(int i=0;i<n;i++){
        if(s[i] == 'a'){
            if(passed < ab){
                cout<<"Yes"<<"\n";
                passed++;
            }else{
                cout<<"No"<<"\n";
            }
        }else if(s[i] == 'b'){
            if(passed < ab && b > 0){
                cout<<"Yes"<<"\n";
                passed++;
                b--;
            }else{
                cout<<"No"<<"\n";
            }
        }else{
            cout<<"No"<<"\n";
        }
    }
}
