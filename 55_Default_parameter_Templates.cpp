#include<iostream>
using namespace std;
template<class t1 = int , class t2 = float , class t3 = char>
class A{
    public:
     t1 data1;
     t2 data2;
     t3 data3;
     A(t1 x , t2 y , t3 z){
        data1 = x;
        data2 = y;
        data3 = z;
     }
     void display(){
        cout<<"Data 1 = "<<data1<<endl;
        cout<<"Data 2 = "<<data2<<endl;
        cout<<"Data 3 = "<<data3<<endl;
     }
};
int main(){
    A<>obj(7 , 2.18 , 'A');
    A<float, string , bool >obj2(2.6325 , "JORAWAR SINGH" , false);
    obj.display();
    cout<<"\n\n\n";
    obj2.display();
    
    return 0;
}
