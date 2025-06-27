// DESTRUCTORS IN C++ 
#include<iostream>
using namespace std;
static int countt = 0 ; 
class number {
int num ;

public:
 number( ){
     countt++;
    cout<<"now , CONSTRUCTOR is eing used for the object "<<countt<<endl;
   
 }
 ~number(){
    cout<<"now , the DESTRUCTOR is being used for the object "<<countt<<endl;
    countt--;
 }

};
int main(){

    cout<<" now , we have entered into the MAIN FUNCTION"<<endl;
    number i;
    {
        cout<<"now , we have entering into the BLOCK "<<endl;
        cout<<"now , we are going to CREATE OBJECTS in the block "<<endl;
        number t  , j ;
cout<<"now , we are exiting the BLOCK"<<endl;
    }
cout<<"now , we are again in the main function"<<endl;
    
    return 0;
}
