#include<bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n],i;
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int temp=0;
        for(i=1;i<n;i++){
            while(a[i]+a[0]<=k){
            temp++;
            a[i]=a[i]+a[0];
            }
        }
        cout << temp << endl;
    }
}