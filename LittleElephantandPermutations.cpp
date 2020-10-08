#include<bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int i,j,c=0,d=0;
        for(i=0;i<n;i++)
        cin >> a[i];
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1])
            d++;
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j])
                c++;
            }
        }
        if(c==d)
        cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}