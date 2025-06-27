#include<iostream>
using namespace std ; 
int main(){
    int size ;
    int * array = new int[size];
    cout<<"Enter size of array "<<endl;
    cin>>size;
    array[0] = 80;                // GIVING VALUES TO ELEMENTS
     *(array+1) = 90;              // UNDERSTANDING *(arr+i) method . where i = 1,2,3..........
     *(array+2) = 100;
     cout<<"Value of arr[0] : "<<array[0]<<endl;
     cout<<"Value of arr[1] : "<<array[1]<<endl;
     cout<<"Value of arr[2] : "<<array[2]<<endl;
  //    for(int i ; i <size ; i++){
  //        cout<<"Enter element "<<i+1<<endl;
  //        cin>>*(array+1);
  //    }
  //    for(int i ; i <size ; i++){
  //        cout<<"element "<<i+1<<" : "<<*(array+1)<<endl;
  //    }
    delete []array;
    array = NULL;
    return 0 ; 
}