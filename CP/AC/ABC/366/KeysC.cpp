#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    //n keys number 1 to n
    //m tests conducted
    //k real keys needed for door to open
    //R = o if door opened, R = x if door stayed closed
    //C keys are tried in each test from 1 to m
    //Find num combinations of real and fake keys- can be 0 (impossible results given)
    vector<int> keys(n,0);
    for(int i =0; i<m;i++){
        int c;
        cin>>c;
        for(int j=0;j<c;j++){
            
        }
    }
}