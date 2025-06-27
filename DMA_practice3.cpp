#include<iostream>
using namespace std;
int main(){

    int n ;
     cout<<"Enter number of elements "<<endl;
     cin>>n;
     int *arr  = new int[n];
    for(int i = 0 ; i < n ; i++){
        cout<<"enter element"<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"Given array is "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<"Element "<<i+1<<" = "<<arr[i]<<endl;
    }

    int * sum = new int(0);
    for (int i = 0 ; i <n ; i++){
        *sum = *sum + arr[i];
    }
    cout<<"Sum of all elements in the array is :"<<*sum<<endl;

    int * avg = new int(0);
    *avg = *sum / n ;
    cout<<"Average of all the elements in array is "<<*avg<<endl;
    delete[]arr;
    delete sum;
    delete avg;
    return 0;
}