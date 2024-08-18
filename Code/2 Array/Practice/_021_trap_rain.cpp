#include <iostream>
using namespace std;

int trap_rain(int heights[],int n){
    int traped_water=0;
    int left_max[n],right_max[n];
    left_max[0]=heights[0];
    right_max[n-1]=heights[n-1];
    for(int i=1;i<n-1;i++){
        left_max[i]=max(left_max[i-1],heights[i]);
        right_max[n-1-i]=max(heights[n-1-i],right_max[n-i]);
        }
    for(int i=1;i<n-1;i++){
        traped_water+=min(left_max[i],right_max[i])-heights[i];
    }
    return traped_water;
}

int main(){
    int heights[] = {4, 2, 0, 3, 2, 5};
    int n = 6;
    cout<<"traped water "<<trap_rain(heights,n);
}