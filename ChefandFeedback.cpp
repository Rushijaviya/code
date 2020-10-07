#include<bits/stdc++.h>
int main(){
    using namespace std;
    int t;
    cin >> t;
    while(t--){
        char S[100000];
        int i,FLAG=0;
        scanf("%s",S);
        int l=strlen(S);
        for(i=0;i<l;i++)
        {
           if((S[i]=='0' && S[i+1]=='1' && S[i+2]=='0')||(S[i]=='1' && S[i+1]=='0' && S[i+2]=='1'))
           {
                FLAG=1;
                break;
            }
        }
    
        if(FLAG==1)
        printf("Good\n");
        else
        printf("Bad\n");
    }
    return 0;
}