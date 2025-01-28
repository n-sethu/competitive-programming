#include <iostream>
#include <cmath>

#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=n/1.08;
    int c1=floor(x*1.08),c2=floor((x+1)*1.08);
    if(c1==n)   
        cout<<x<<"\n";
    else if (c2==n)
        cout<<x+1<<"\n";
    else
        cout<<":(\n";

}