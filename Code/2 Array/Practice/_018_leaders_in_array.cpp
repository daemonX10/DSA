#include<iostream>
using namespace std;

int leader(int arr[],int n){
    int curr_leader = 0;
    cout<<"leader are ";
    for(int i =n;i>0;i--){
        if(arr[i-1]>curr_leader ){
            curr_leader = arr[i-1];
            cout<<curr_leader<<" ";
        }
    }
}

int main(){
    int arr[] = {7, 10, 4, 3, 6, 5, 2}, n = 7;
    cout<<"Leasers in Reverse order";
    leader(arr,n);
    cout<<endl;
}

