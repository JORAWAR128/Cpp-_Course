// EXAMPLE OF MULTIPLE INHERITANCE 
#include<iostream>
#include<string.h>
using namespace std;
class singer {
    protected :
     string singer;
     public : 
      void setsinger(string name){
        singer = name ;
      }
      void getsinger(){
        cout<<"The singer name is "<<singer<<endl;
      }

};
class mode {
    protected :
     string mode ;
     public : 
      void setmode(string type){
        mode = type;
      }
      void getmode(){
        cout<<"The song is in "<<mode<<" mode . "<<endl;
      }
};
class song : public singer  , public mode {
    string songname;
    public :
     void setsong(string gaana){
        songname = gaana;

     }
     void getsong(){
        cout<<"The song name is "<<songname<<endl;

     }
     void displaysongdetails(){
        cout<<"Here are the song details "<<endl;
        getsinger();
        getmode();
        getsong();

     }
};
int main(){
 song music ;
  music.setsinger("Arijit Singh");
  music.setmode("Slowed + Reverb");
  music.setsong("Samjhawaan");
  music.displaysongdetails();

    
    return 0;
}
