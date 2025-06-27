#include<iostream>
using namespace std;
void func(int * arr , int size ){
    int count = 0;
    for(int i = 0 ; i < size ; i++){
        if((*(arr+i))%2 == 0){
            count++;
        }
    }
    cout<<"Number of even numbers in the array are : "<<count<<endl;
}
int main(){
    int n ;
     cout<<"Enter number of elements in the array "<<endl;
     cin>>n;
    int * array = new int[n];
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter element "<<i+1<<" : "<<endl;
        cin>>*(array+i); 
    }
    for(int i = 0 ; i <n ; i++){
        cout<<*(array+i)<<"\t";
    }
    func(array , n);
    delete [] array;
    return 0;
}
