#include<bits/stdc++.h>
using namespace std;

class NewClass 
{        
  public:              
    void welcome() 
    {  
      cout << "Hello World, How are you!";
    }
};

int main() {
  NewClass a1;     // Create an object of MyClass
  a1.welcome();  // Call the method
  
  return 0;
}