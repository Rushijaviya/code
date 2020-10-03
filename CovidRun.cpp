#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k,x,y,c=0;
	    cin >> n >> k >> x >> y;
	    for(int i=0;i<n;i++){
	        if(x==y){
	            c++;
	            break;
	        }
	        else{
	            x=(x+k)%n;
	        }
	    }
	    if(c==0)
	    cout << "NO" << endl;
	    else
	    cout << "YES" << endl;
	}
	return 0;
}
