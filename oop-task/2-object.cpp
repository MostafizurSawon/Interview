#include<bits/stdc++.h>
using namespace std;

class Student {      
  public:            
    int  taka;        
    string  name;  
};

int main() {
  Student myObj;  

  myObj. taka = 100; 
  myObj. name = "Sawon";

  cout << myObj. taka << "\n";
  cout << myObj. name;

  return 0;
}