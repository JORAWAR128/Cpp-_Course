//       #include<iostream>
//       using namespace std;
//       int main(){
//           int n;
//            cout<<"Enter n "<<endl;
//           cin>>n;
//           int * ptr = new int(n);
//          
//           cout<<"The value of n is "<<n<<endl;
//           return 0;
//       }





#include<iostream>
using namespace std;
int main(){
    int * ptr = new int;
    cout<<"Enter integer "<<endl;
    cin>>*ptr;
    cout<<"Value is "<<*ptr<<endl;
    delete ptr;
    return 0;
}
 
