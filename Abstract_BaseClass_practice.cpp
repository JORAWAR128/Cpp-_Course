#include<iostream>
using namespace std;
class ghar {
    protected : 
      float rent ;
      int members ;
      string head ;
    public : 
    ghar(float r , int m , string h){
        rent = r;
        members = m ; 
        head = h ;
    }
     virtual void display() = 0 ;
};
class house : public ghar {
    protected : 
     bool pets;
     string petname;
    public : 
     house(float r , int m , string h , bool p , string pn) : ghar(r , m , h){
        pets = p ;
        petname = pn;
     }
     void display(){
        cout<<"--------------Rental Home Details---------------"<<endl
            <<"House Rent : "<<rent<<endl
            <<"Number of People : "<<members<<endl
            <<"Head Name : "<<head<<endl
            <<"Pet : "<<pets<<endl;
            if(pets == true){
            cout<<"Petname : "<<petname<<endl;
            }
            else{
                cout<<"The Family dont have any pets "<<endl;
            }
            cout<<"Thanks for booking our home for rent  , We wish Coorporation and Adjustment with Disciplane ."<<endl;
            cout<<"THANK YOU"<<endl;
     }
};
int main(){
    float r;
    int m ;
    string h , pn;
    bool p;
    cout<<"For Booking a rental house , Some details need to be given , Please co-orporate with us ."<<endl;
    cout<<"Enter number of memebrs "<<endl;
    cin>>m;
    cout<<"Enter Head name : "<<endl;
    cin>>h;
    cout<<"Do you have any Pet ? (enter 0 for false AND 1 for true)"<<endl;
    cin>>p;
    if(p == true){
        cout<<"Enter your pet name : "<<endl;
        cin>>pn;
        }
    if(m <= 4){
        r = 10000;
    }
    else if(m <= 7){
        r = 16000;
    }
    else if(m <= 10){
        r = 19000;
    }
    else if(m <= 13){
        r = 25000;
    }
    else{
        cout<<"We dont provide House on rent for more than 13 people in a family , we are sorry "<<endl;
        return 1;
    }
    ghar * bhadaGhar;
    house apnaghar(r , m , h , p , pn);
    bhadaGhar = &apnaghar;
    bhadaGhar->display();
    return 0;
}
