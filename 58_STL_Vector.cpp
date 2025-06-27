
#include<iostream>
  #include<vector>
  using namespace std;
  template<class T>
  void displayvec(vector<T> &v){
         for(int i =0 ; i < v.size() ; i++){
             cout<<v[i]<<" ";
     }
      cout<<endl;
 }
  int main(){
       vector<int> vec1;  // zero length vector
       vector<char> vec2(5); // vector of 5 elements
       vector<char> vec3(vec2); // vector of same number of elements as of vector 2
       vector<float> vec4(7 , 20);  // stores seven 20's in the vector
       vec1.push_back(45);
       displayvec(vec1);


      vector<char> :: iterator it   = vec2.begin();
      vec2.insert(it , 10 , 'J');
      displayvec(vec2);

      vector<char> :: iterator iter = vec3.begin();
      *iter = 'c';
      *(iter+1) = 'd';
      *(iter+2) = 'e';

      displayvec(vec3);

         return 0;
     }