#include<iostream>
using namespace std;
template<class T>
class vector{
  
    int size;
    public : 
      T * arr;
     vector(int n){
        size = n ;
        arr = new T[size];
     }
     T dotproduct(vector &v){
        T d = 0;
        for(int i = 0 ; i <size ; i++){
            d += this->arr[i] * v.arr[i];
           
        }
         return d;
     }
};
int main(){
    vector<int>v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 2;
    vector<int>v2(3);
    v2.arr[0] = 9;
    v2.arr[1] = 8;
    v2.arr[2] = 7;
    int a = v1.dotproduct(v2);
    cout<<a<<endl;
    

     vector<float>v3(3);
    v3.arr[0] = 4.6;
    v3.arr[1] = 3.53;
    v3.arr[2] = 2.369;
    vector<float>v4(3);
    v4.arr[0] = 0.29;
    v4.arr[1] = 6.918;
    v4.arr[2] = 7.001;
    float c = v3.dotproduct(v4);
    cout<<c<<endl;
    return 0;
}
