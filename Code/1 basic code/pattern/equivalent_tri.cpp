#include <iostream>
using namespace std;
int main(){
    int n,i,j,k,m;
    cin>>n;
    for(i=n;i>=1;i--){
        for (j=i;j>1;j--){
            cout<<" ";
        }
        for(k=1;k<=(n-i);k++){
            cout<<k;
        }
        for(m=k;m>=1;m--){
            cout<<m;
        }
        cout<<endl;
    }
    return 0;
}