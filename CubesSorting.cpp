#include<iostream>
int main(){
    using namespace std;
    int t;
    cin >> t;
    while(t--){
        int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        cin >> a[i];
        bool check=false;
        for(i=1;i<n;i++){
            if(a[i]>=a[i-1]){
                check=true;
                break;
            }
        }
        if(check)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}