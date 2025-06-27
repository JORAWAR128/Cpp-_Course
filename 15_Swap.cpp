#include<iostream>
using namespace std;
int sum(int,int );
int & swapReferenceVar(int &a, int &b)
{
    int j = a;
    a = b;
    b = j;
    return b;
}

int main(){
    int k = 9;
    int l = 8;
//cout<<"the sum of 9 and 8 is " <<sum(k,l)<<endl;
cout<<"before swapping\n k is "<<k<<"and l is "<<l<<endl;
// for pointer we use --->swapPointer(int &k,&l)
//for reference vaiable ------>swapReferenceVar(int k,l)
//call by reference by using  c++ reference variable
swapReferenceVar(k,l) = 1008;
cout<<"after swapping\n k is "<<k<<"and l is "<<l<<endl;
    return 0;
}

int sum(int a , int b){
    int c = a+b;
    return c;
}