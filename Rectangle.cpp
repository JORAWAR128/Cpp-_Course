#include<iostream>
#include<string>
using namespace std;
class rectangle{
  private :
    float length;
    float breadth;
    public : 
    void setDimentions(float l , float b);
    float area();
    float perimeter();
    void display();
};
void rectangle :: setDimentions(float l , float b){
    if(l > 0 && b> 0){
    length = l;
    breadth = b;
} else {
    cout<<"invalid dimentions"<<endl;
} }
float rectangle :: perimeter(){
    return ((2*length)+(2*breadth));
   }
float rectangle :: area(){
    return length*breadth;
   }
void rectangle :: display(void){
   cout<<"the length of the rectangle is "<<length<<endl;
   cout<<"the breadth of the rectangle is "<<breadth<<endl;
   cout<<"the perimeter of the rectangle is "<<perimeter()<<"zzy units"<<endl;
   cout<<"the area of the rectangle is "<<area()<<" square units"<<endl;
}

int main(){
    rectangle board;
    board.setDimentions(20,12);
    board.perimeter();
    board.area();
    board.display();
    return 0 ;
}