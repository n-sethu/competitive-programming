

ll mygcd(ll a, ll b){
    if(b==0)
        return a;
    return mygcd(b, a % b);
}