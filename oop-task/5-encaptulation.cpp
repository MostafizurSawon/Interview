#include<bits/stdc++.h>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    // Setter
    void setSalary(int sal) {
      salary = sal;
    }

    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(65000);
  cout << myObj.getSalary();

  return 0;
}