#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        int arr[m],sum=0;
        for(int i=0;i<m;i++){
            cin >> arr[i];
            sum=sum+arr[i];
        }
        int rem=sum%n;
        sort(arr,arr+m);
        int min=arr[0];
        if(rem >= min)
        cout << "-1\n" ;
        else
        {
            cout << sum/n;
        }
    }
    return 0;
}