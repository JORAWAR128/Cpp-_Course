#include<iostream>
using namespace std;
class society{
    int hnum  , members;
    static int count;
    public : 
     void setdata(int v , int  m ){
        hnum = v ;
        members = m ;
     }
     void getdata(){
        count++;   
        cout<<"The Door number of House "<<count<<" is "<<hnum<<endl;
        cout<<"Members in the house "<<count<<" are "<<members<<endl;
     }
};
int society :: count = 0;

int main(){
    int size , i , p , q ;
    society * gokuldham = new society[size];
    cout<<"Enter number of houses in the society"<<endl;
    cin>>size;
    for( i = 0 ; i < size ; i++){
        cout<<" Enter the door number and Number of members in the house "<<i+1<<endl;
        cin>>p>>q;
        (gokuldham+i)->setdata(p , q);
    }
    for(i = 0 ; i < size ; i++){
        (gokuldham+i)->getdata();
    }

    
    return 0;
}
