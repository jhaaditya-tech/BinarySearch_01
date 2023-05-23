#include <iostream>
using namespace std;
int main(){
    //Choosing the size of arrat. entering the data and locatiom of key from array
    int n,i,loc;
    bool found=false;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int A[n-1];
    cout<<"Enter the data in the array"<<endl;
    
    for (i=0;i<=n-1;i++){
        cin>>A[i];
        cout<<endl;
    }
    cout<<"Enter the data to find its location in the array"<<endl;
    cin>>loc;


    for (i=0;i<=n-1;i++){
        if (loc==A[i]){
            cout<<"The location in the array is "<<i<<endl;
            found =true;
        }
    }
    if (!found){
        cout<<"The supplied digit is not in the array"<<endl;

    }
    return 0;

}