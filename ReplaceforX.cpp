#include<bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    while(t--){
        int n,x,p,k,i;
        cin >> n >> x >> p >> k;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        if(a[p-1]==x)
        cout << "0\n";
        else if(p>=k && a[p-1]<=x){
            int out=0;
            for(i=p-1;i<n;i++){
                if(a[i]<x)
                out++;
            }
            cout << out << endl;
        }
        else if(k>=p && a[p-1]>=x){
            int out=0;
            for(i=p-1;i>=0;i--){
                if(a[i]>x)
                out++;
            }
            cout << out << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}
