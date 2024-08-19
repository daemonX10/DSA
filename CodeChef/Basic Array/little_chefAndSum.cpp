#include <iostream>
#include <vector>
using namespace std;


int main(){
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        int size_of_input,digit_sum=0,max_for_comparing;
        cin>>size_of_input;
        int arr[size_of_input];
        int prefix_sum[size_of_input];
        int sum[size_of_input];
        for(int i=0;i<size_of_input;i++){
            cin>>arr[i];
            digit_sum+=arr[i];
        }
        max_for_comparing=digit_sum;
        int index=size_of_input;

        for(int j=0;j<size_of_input;j++){
            if(j>0){
                prefix_sum[j] =prefix_sum[j-1] + arr[j]; // adding the last term with arr[j]
                }
                else{
                    prefix_sum[j]=arr[j];
                }
            sum[j]=prefix_sum[j]+digit_sum;
            max_for_comparing=max(max_for_comparing,sum[j]);
            digit_sum-=arr[j];
            
            
        }
        for(int j=0;j<size_of_input;j++){
            
            max_for_comparing=min(max_for_comparing,sum[j]);
            
        }
        for(int j=0;j<size_of_input;j++){
            if(max_for_comparing==sum[j]){
                index=j+1;
                break;
            }
        }
        cout<<index<<"\n";
    }
    return 0;

}