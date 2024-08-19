// "https://github.com/daemonX10/DSA-STORE/blob/master/1%5D.%20DSA%20%2B%20CP/1%5D.%20DSA/1%5D.%20Data%20Structures/01%5D.%20Array/C%2B%2B/_006)_Left_Rotate_Array_by_d_(Time_dN).cpp"

#include <iostream>
#include <cmath>
using namespace std;

void left_rotate(int arr[],int d,int n){
    int temp_arr[d];
    int temp_size = d;
    for (int i =0;i<n;i++){
        if(temp_size>0){
            temp_arr[i]=arr[(i)];
            temp_size--;
        }
        if(n-i>d){
            arr[i]=arr[(i+d)%n];
        }
        if(n-i<d){
            arr[i] = temp_arr[   ]
        }
    }
    
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n =9;
    int d = 3;
    cout<<"array without rotated";
    for(int i=0;i<n;i++){
        cout<<arr[i]," ";
    }

    left_rotate(arr,d,n);
    cout<<"array after rotated";
    for(int i=0;i<n;i++){
        cout<<arr[i]," ";
    }
}
