#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        for(int i=0;i<x.length();i++){
            if(x[i]!='?' && y[i]!='?' && x[i]!=y[i]){
                cout<<"NO"<<endl;
                break;
            }
            if(i==x.length()-1){
                cout<<"YES"<<endl;
            }
            
        }
    }
    return 0;
}
