#include<iostream>

using namespace std;

     int adiff(int a, int b){
     int r;
     a = a%360;
     b = b%360;

     if(a > b){
       r = a-b;

     }else{
       r = b-a;
     }
     

    if(r > 180){
      r = 180 - r;
    }

    if(r < 0){
    r = 180 + r;
    }

   return r;
     }


int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45)<< endl;
  cout << adiff(0,360)<< endl;
  cout << adiff(10,350)<< endl;
  cout << adiff(95,260)<< endl;
  cout << adiff(90,-90)<< endl;
  cout << adiff(1000,280)<< endl;
  cout << adiff(60,244)<< endl;
}
