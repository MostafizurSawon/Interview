#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int pen;
    int quantity;

    int price() {
        return pen * quantity;
    }
};

int main() 
{
    Student a1;
    a1.pen = 10;
    a1.quantity = 15;

    cout << "Total Price is : " << a1.price() << endl;

    return 0;
}