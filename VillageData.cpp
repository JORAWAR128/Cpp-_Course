#include<iostream>
#include<string>
using namespace std;
class village{
    protected :
     int code; 
     string name;
     public :
     village(){};
     village(string n , int c){
        name =  n;
        code  = c;
     }
     virtual void display() = 0 ;
};
class detail{
    protected :
      int area ;
      int members ;
    public :
    detail(){};
      detail( int a  , int  m ){
        area = a ;
        members  = m ;
      }
};
class people : public detail , public village {
    protected :
      int gents , ladies  , children ;
      public :
      people(){}; 
       people(string  n , int  c , int a  , int  m , int g , int l , int ch) :village(n , c), detail(a , m ){
            gents =  g ;
            ladies  = l; 
            children = ch ; 
       }
    void display(){
        cout<<"Village : "<<name<<endl;
        cout<<"Pin Code : "<<code<<endl;
        cout<<"Area : "<<area<<"Sq units"<<endl;
        cout<<"Members : "<<members<<endl;
        cout<<"Gents : "<<gents<<endl;
        cout<<"Ladies : "<<ladies<<endl;
        cout<<"Children : "<<children<<endl;
    }
};

int main(){
    village * sankarna;
    people sakrna("Sankarna " , 365421 , 45678 , 30000, 15000 , 13000, 2000 );
   
    sankarna = &sakrna ;
    sankarna->display();

    return 0 ;

}