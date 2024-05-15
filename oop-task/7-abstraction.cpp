#include<bits/stdc++.h>
using namespace std;

class A {
private:
    int a, b, c;
 
public:
    void set(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
 
    void show()
    {
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
        cout << "Value of c = " << c << endl;
    }
};
 
int main()
{
    A obj;
    obj.set(10, 20, 30);
    obj.show();

    return 0;
}