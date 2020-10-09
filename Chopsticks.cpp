#include<bits/stdc++.h>
int main(){
    using namespace std;
    int n,d,i;
    cin >> n >> d;
    int a[n];
    for(i=0;i<n;i++)
    cin >> a[i];
    sort(a,a+n);
    int c=0;
    for(i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=d){
            c++;
            i += 1;
        }
    }
    cout << c ;
    return 0;
}