#include<bits/stdc++.h>
using namespace std;
void isprime(int x){
    int i,c=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
            c++;
        }
    }
    if(c==0)
    cout << x << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        for(int i=(m==1 ? 2 : m);i<=n;i++){
        isprime(i);
        }
    }
    return 0;
}