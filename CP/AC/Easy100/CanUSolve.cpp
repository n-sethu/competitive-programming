#include <iostream>
#include <cmath>
#include <vector>

#define ll long long
using namespace std;

int main(){
    int n,m,c;
    cin>>n>>m>>c;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    //stop coding for me dude
    int count=0;
    for(int i=0;i<n;i++){
        int sum=c;
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            sum+=b[j]*a;
            }
            if(sum>0)   
            count++;
        }

    cout<<count;

}