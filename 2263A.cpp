#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    int narr[500];
    int earr[500][100];

    for(int i=0;i<t;i++){
        cin>>narr[i];
        for(int j=0;j<narr[i];j++){
            cin>>earr[i][j];
        }
    }
    int zero;
    int one;

    for(int k=0;k<t;k++){
        zero = 0;
        one = 0;
        for(int l=0;l<narr[k];l++){
            if(earr[k][l]==1){
                one++;

            }
            else{
                zero++;
            }
        }if(one >=zero){
            cout<<"Bessie"<<endl;
        }
        else{
            cout<<"Elsie"<<endl;
        }

    }return 0;
}