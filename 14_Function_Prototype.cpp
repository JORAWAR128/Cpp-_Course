 #include<iostream>
 using namespace std;

 // function prototype
 //syntax ----> data type -  function name (arguement);
 int sum(int ,int );
 void j();
 int main(){
    int a,b;
    cout<<"enter j1"<<endl;
    cin>>a;
    cout<<"enter j2"<<endl;
    cin>>b;
    cout<<"the sum is "<<sum(a , b)<<endl;
    j();
    return 0;
 }

 int sum(int j, int k ){
    int c = j+k ;
    return c;
 }

 void j(){
    cout<<"hy jorawar singh . \n how are you"<<endl;
 }
