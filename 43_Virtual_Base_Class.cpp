
//we are going to learn about VIRTUAL BASE CLASS
#include<iostream>
using namespace std;
class student {
    protected : 
     int rollno;
    public : 
      void setnumber (int a ){
        rollno = a ;
      }
      void getnumber(){
        cout<<"Your Roll Number is "<<rollno<<endl;
      }
};
class test : virtual public student {
        protected : 
            float ctsd , mat ;
        public : 
        void setmarks (float a  , float b ){
            ctsd  = a ;
        mat = b ;
        }
        void getmarks (){
            cout<<"TEST RESULT "<<endl;
            cout<<"your CTSD score is "<<ctsd<<endl
                <<"your MATHS score is  "<<mat<<endl;
        }
};
class sports : virtual public student {
    protected : 
    float sscore ;
     public : 
     void setscore(float r ){
        sscore = r ;
     }
     void getscore (){
        cout <<"Your Sports Score is "<<sscore <<endl;
     }

}; 
class result : public test  , public sports {
    protected : 
    float total;
        public :

        void displayall(){
            total = mat+ctsd+sscore;
            cout <<"RESULT "<<endl;
            getnumber();
            getmarks();
            getscore();
            cout<<"The Total Result of the student "<<rollno<<" (ROLLNUMBER) is "<<total <<endl;
        
        }
};
int main(){ 
        result ramu ;
         ramu.setnumber(2028);
         ramu.setmarks(92.5 , 96.5);
         ramu.setscore(99);
         ramu.displayall();
    
    return 0;
}
