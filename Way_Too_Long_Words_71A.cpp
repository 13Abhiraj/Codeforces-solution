#include <iostream>
#include <string>
using namespace std;
int main(){

    int num;
    cin>>num;

    string words[100];
    for(int i=0;i<num;i++){
        
        cin>>words[i];
    }

    for(int j=0;j<num;j++){
        if(words[j].length()>10){
            cout<<words[j][0]<<words[j].length()-2<<words[j][words[j].length()-1]<<endl;
        }

        else{
            cout<<words[j]<<endl;
        }
    }



    return 0;
}