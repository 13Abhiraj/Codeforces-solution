#include <iostream>
using namespace std;
int main(){
    int test;
    cin>>test;              //t<=500
    int n;
    char ch;
    string s;
    int coins[500];
    for(int p =0;p<test;p++){
        cin>>n>>ch;
        cin>>s;

        coins[p]=0;
                    
        for(int i=0, j=n-1;i<=j;i++,j--){
                if(s[i]!=s[j]){
                    if(s[i]==ch||s[j]==ch){
                        coins[p]++;
                    }
                    else {
                        coins[p]+=2;
                    }
                }else{
                    continue;
                }
            }

        }

        for(int k=0;k<test;k++){
            cout<<coins[k]<<'\n';
        }
        return 0;
}