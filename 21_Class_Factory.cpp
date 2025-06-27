// jay maa ashapura
#include<iostream>
using namespace std;
class laysFactory{
    int itemPrice[50];
    int itemId[50];
    int increment; 
    
    public : 
   
    void setPrice(void);
    void displayPrice(void);
    void init_increment(void){
        increment = 0;
    }
};
void laysFactory :: setPrice(void){
    cout<<"enter the item id of the item number"<<increment+1<<endl;
    cin>>itemId[increment];
    cout<<"enter the itemPrice of the item number "<<increment+1<<endl;
    cin>>itemPrice[increment];
    increment++;
}
void laysFactory :: displayPrice(void){
    for(int i = 0 ; i < increment ; i++){
        cout<<"the price of the item with the item id "<<itemId[i]<<" is"<<itemPrice[i]<<endl;
    }
}
int main(){
    laysFactory bluelays;
    bluelays.init_increment();
    for(int j = 0 ; j <= 5 ; j++){
        bluelays.setPrice();
    }
    bluelays.displayPrice();
    return 0;
}