#include<iostream>
using namespace std;
int main(){
  /*loop in c++
  there are three types of loops in c+++:
  1. for loop
  2. while loop
  3. do while loop
  */


/* for loop in c++
int i=1;
 cout<<i;
 syntax for for loop
for(initialization; condition; updation)
 {
    loop body(c++ code);
 }    */
for (int l=1; l <= 40; l++)
{
   cout<<l<<endl;
}

   // infinite loop
for(int m= 1; 34 <= 40; m++)
{
    cout<<m<<endl;
}  

/* while loop
syntax
 while(condition):
{
c++ statements
} */

// while loop
int k= 1;
while(k <= 40){
    cout<<k<<endl;
    k++;
}         

//infinite while loop 
int j=1;
while(true)
{
    cout<<j<<endl;
    j++;
}   

//do while loop
//7 table
int i=7;
do{
    cout<<i<<endl;
    i=i+7;
} while(i<=70);
   
   return 0;
}

