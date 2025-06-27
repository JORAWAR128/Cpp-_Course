#include<iostream>
using namespace std;
int main(){
    int i ;
    int n ; 
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    int * arr = new int[n];
    for(i = 0 ; i < n ; i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    for(i = 0 ; i < n ; i++){
        cout<<"Element "<<i+1<<" : "<<arr[i]<<endl;
    }    int * max = new int(arr[0]);
    for(i = 0 ; i < n ; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
    cout<<"Maximum element in the given array is "<<*max<<endl;


     int * min = new int(arr[0]);
    for(i = 0 ; i < n ; i++){
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
    cout<<"Minimum element in the given array is "<<*min<<endl;
    delete [] arr;
    delete max;
    delete min;
    return 0;
}
