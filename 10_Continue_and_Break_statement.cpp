#include<iostream>
using namespace std;
int main(){
     for(int i = 0;i<8;i++)
     { 
      if(i==4)
      {
        continue;
      }
      else if(i==7){
        break;
      }
      cout<<i<<endl;
     }

  return 0;
}
