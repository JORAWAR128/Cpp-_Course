#include<iostream>
using namespace std;
template<class T>
void swapp(T &x , T &y){
    T temp = x;
    x = y;
    y = temp;
}
template<class t1 , class t2>
 float percent(t1 x , t2 y){
    float p = ((x+y)*100)/200;
    return p;
}
int main(){
    float z;
    z = percent(50 , 50);
    cout<<z<<endl;
    int a = 5;
    int b = 10;
    swapp(a ,b);
    cout<<a<<endl<<b;

    return 0;
}
