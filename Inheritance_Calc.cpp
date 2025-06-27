// Exercise question given by Harry Sir
#include<iostream>
#include<cmath>
using namespace std;
class simplecalc{
    protected :
     int a, b ;
     public :
     char Operator;
     void calculate(){
        cout<<"Enter an operator for the operation you need to perform between two integers "<<endl;
        cin>>Operator;
     switch(Operator){
        case '+':
         cout<<"The result is a + b = "<<a+b<<endl;
         break;
        case '-': 
        cout<<"the result is a - b = "<<a-b<<endl;
        break;
    case '*' :
    cout<<"the result is a * b = "<<a*b<<endl;
    break;
    case '/':
    cout<<"the result is a / b = "<<a/b<<endl;
    break;
    default:
    cout<<"Enter an valid operator !!"<<endl;
     }
    }

};
class advancedcalc{
    protected : 
    int c;
    public : 
    int advanoperator;
    double radians;
    double degrees = radians* M_PI/180.0;
    void advan(){
        cout<<"Enter following integers for respective calculation "<<endl;
        cout<<"For sqrt click 1 , for log click 2"<<endl;
        cin>>advanoperator;
        switch(advanoperator){
            case 2 :
            cout<<"log("<<c<<") = "<<log(c)<<endl;
            break;
            case 1 :
            cout<<"sqrt("<<c<<") = "<<sqrt(c)<<endl;
            break;
            default:
            cout<<"Enter an valid special operator !!!"<<endl;
        }
    }
    void advancedcalculation(){
        cout<<"Enter an advanced operator to perform operation between two integers"<<endl;
        cout<<"Enter following numbers for respective operations :"<<endl;
        cout<<"For sine , Enter 1\ncos = 2\ntan = 3 "<<endl;
        cin>>advanoperator;
        switch(advanoperator){
            case 1 :
            cout<<"Sin("<<degrees<<") = "<<sin(degrees)<<endl;
            break;
            case 2 :
            cout<<"Cos("<<degrees<<") = "<<cos(degrees)<<endl;
            break;
            case 3 :
            cout<<"Tan("<<degrees<<") = "<<tan(degrees)<<endl;
            break;
            default:
            cout<<"Enter an valid special operator !!!"<<endl;


        }
       

        }
    };
class hybridcalculator : public simplecalc , public advancedcalc{
    public :
    int o; 
     hybridcalculator(){
      
     }
        void operation(){
            cout<<"For Simple calculation , Click 1\nFor advanced calculation , CLick 2"<<endl;
            cin>>o;
            if(o == 1){
                cout<<"Enter two integers "<<endl;
                cin>>a>>b; 
                calculate();
            }
            else if(o == 2){
                int d;
                cout<<"for trignometric Calc , click 1"<<endl;
                cout<<"for log or sqrt , click 2"<<endl;
                cin>>d;
                if(d==1){
                    cout<<"Enter degree "<<endl;
                    cin>>degrees;
                    advancedcalculation();
                }
                else if (d == 2){
                    cout<<"Enter integer "<<endl;
                    cin>>c;
                    advan();
                }
                else{
                    cout<<"wrong Entry!!!"<<endl;
                }
               
            }
            else{
                cout<<"You have entered wrong integer !! entry  accepts only 1 or 2 ."<<endl;
            }
        }
};
int main(){
    hybridcalculator calsy;
    calsy.operation();


    return 0;
}
