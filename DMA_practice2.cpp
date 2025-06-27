#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    int * array = new int[n];
    for (int i = 0 ; i < n ; i++){
        cout<<"enter element "<<i+1<<endl;
        cin>>*(array+i);
    }
    for(int i = 0 ; i < n ; i++){
        cout<<"element"<<i+1<<" = "<<*(array+i)<<endl;
        }
    delete[] array;
    return 0;
}
