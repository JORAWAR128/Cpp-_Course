// tut49 is the explaination of intialization of list in constructors in derived class 
#include<iostream>
using namespace std;
int main(){
    int a = 9;                   // STATIC MEMORY ALLOCATION
    int* p = new int(9);        // DYNAMIC MEMORY ALLOCATION
     // *p = 10;                // MODIFYING VALUE
     cout<<"p = "<<*p<<endl;
     delete(p);                  // DELETE P , DANGLING POINTER ARISES
     p = NULL;                   // NULL USED TO AVOID DANGLING POINTER 

     int *arr = new int[2];      // DMA FOR ARRAAYS
     arr[0] = 80;                // GIVING VALUES TO ELEMENTS
     *(arr+1) = 90;              // UNDERSTANDING *(arr+i) method . where i = 1,2,3..........
     *(arr+2) = 100;
     cout<<"Value of arr[0] : "<<arr[0]<<endl;
     cout<<"Value of arr[1] : "<<arr[1]<<endl;
     cout<<"Value of arr[2] : "<<arr[2]<<endl;
     delete[]arr;                    // deleting dma of array
     arr = NULL;                     // equating to NULL
    return 0;
}       