#include<bits/stdc++.h>
using namespace std;

class  Student {
  public:
    string  name = "Sawon";

    void  callNow() {
      cout << "Hello Student! \n" ;
    }
};

// Derived class
class className: public  Student {
  public:
    string claass = "Nine";
};

int main() {
  className  A1;
  A1. callNow();
  cout <<  A1. name + " from class " +  A1.claass;
  
  return 0;
}