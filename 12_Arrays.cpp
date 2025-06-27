#include<iostream>
using namespace std;
int main(){
      //array example
    int marks[] = {2,5,8,9,6};
    int mathmarks[]= { 56, 23, 69,45, 87} ;
   cout<<"these are marks"<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[0]<<endl;
   for(int i = 0; i <=3;i++){
      
      cout<<"the value of marks is "<<i<<" is "<<marks[i]<<endl;
   }
    
   cout<<"these are mathmarks"<<endl;
   cout<<mathmarks[2]<<endl;

    //we can also change the value of array before cout it
    mathmarks[1] = 89;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[0]<<endl;



//quiz : print the array marks by using while loop and do while loop
 int i = 0;
 while(i<=4){

    cout<<"the value of the marks of "<<i<<" is "<<marks[i]<<endl; 
    i++;
 } 

 int j = 0;
 do{ 
    cout<<"the value of the mathmarks of "<<j<<" is "<<mathmarks[j]<<endl;
    j++;
    }
 while(j<=4);

// pointers and arrays

 int ravi[] = {2,3,4,5,6,};
 int* m = ravi;
 cout<<*(m++)<<endl;
 cout<<*(++m)<<endl;
cout<<"the value of the ravi at ravi[0] is "<<*m<<endl;
cout<<"the value of the ravi at ravi[1] is "<<*(m+1)<<endl;
cout<<"the value of the ravi at ravi[2] is "<<*(m+2)<<endl;
cout<<"the value of the ravi at ravi[3] is "<<*(m+3)<<endl;

    return 0;
}
