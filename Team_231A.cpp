#include <iostream>
using namespace std;
int main(){

    int num;
    int p,v,t;
    int count=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>p>>v>>t;
        if(p+v+t >=2){
            count++;
        }



    }cout<<count;
    return 0;
}

