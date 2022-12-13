#include<iostream>

using namespace std;

int adiff(int a, int b){
  int c;
  if(a>360 or a<-360){
    a = a%360 ;
  }
  if(b>360 or b<-360){
    b = b%360 ;
  }
  if(a >= b){
    c = a - b ;
  }else{
    c = b - a ;
  }
  if(c > 180){
    return 360-c ;
  }else{
    return c ;
  }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
