#include <iostream>
using namespace std;
int main(){
    int t;              //1<=t<=500
    cin>>t;
    int a,b,c;
    
    int score[10000];
    

    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>=b){
    score[i] = (a+c)-b;

}


else if(a<b&&a+c<=b){
    score[i] = b-a;

}
else if(a<b&&a+c>=b&&(a+c-b)<=(b-a)){
    score[i]=b-a;
}
else{
    score[i]=(a+c-b);
}

}
for(int j=0;j<t;j++){
    cout<<score[j]<<'\n';
}

return 0;
}