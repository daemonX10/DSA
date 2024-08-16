#include <iostream>
using namespace std;

int trap_rain(int heights[],int n){
    int total_water;
    for(int i=0;i<n-1;i++){
        if(heights[i] > heights[i+1] && heights[i+1] < heights[i+2]){
            if(heights[i+2]>heights[i]){
                total_water+=heights[i+2]-heights[i+1];
            }else{
                total_water+=heights[i]-heights[i+1];
            }
        }
    }
    cout<<total_water;
    return total_water;
}

int main(){
    int heights[] = {4, 2, 0, 3, 2, 5};
    int n = 6;
    cout<<"traped water"<<trap_rain(heights,n);
}