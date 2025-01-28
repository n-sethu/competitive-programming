#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main(){
int n,m;
cin>>n>>m;
vector<ll> goals(m);
vector<ll> totals(m,0);
for(int i=0;i<m;i++){
    ll a;
    cin>>a;
    goals[i]=a;
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        ll x;
        cin>>x;
        totals[j]+=x;
    }
}

bool flag=true;
for(int i=0;i<m;i++){
    if(totals[i]<goals[i]){
        flag = false;
        break;
    }
}
if(flag) cout<<"Yes";
else cout<<"No";

}

