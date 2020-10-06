#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define str string 

bool isPowerofTwo(ll n){
    if(n==0)
    return false;

    return (ceil(log2(n))==floor(log2(n)));
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==1)
        cout << "1\n" ;
        else if(isPowerofTwo(n))
        cout << "-1\n";
        else{
            ll a[n+1];
            for(int i=0;i<=n;i++)
            a[i]=i;
            a[1]=2,a[2]=3,a[3]=1;
            for(int i=4;i<=n;i++){
                if(isPowerofTwo(i)){
                    swap(a[i],a[i+1]);
                    i++;
                }
            }
            for(int i=1;i<=n;i++)
            cout << a[i] << " ";
            cout << "\n";
        }
    }
}
