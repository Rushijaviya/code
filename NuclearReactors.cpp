#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,k;
    cin >> a >> n >> k;
    int arr[k]={0};
	while(a>0){
	    arr[0]+=1;
	    if(arr[0]>n){
	        arr[0]=0;
	        int t=1;
	        while(t<k){
	            if(arr[t]+1>n){
	                arr[t]=0;
	                t++;
	            }
	            else{
                    arr[t]+=1;break;
	            }
	        }
	    }
	    a--;
	}
	for(int i=0;i<k;++i) 
    cout<<arr[i]<<' ';
	return 0;
}
