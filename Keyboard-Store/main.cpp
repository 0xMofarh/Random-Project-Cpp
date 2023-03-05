#include <iostream>
using namespace std;

int main()
{

    int discound = 10,
    Price,
    op,
    year,
    total;

    cout << "[1] keyboard China : 3000$\n";
    cout << "[2] keyboard Custom : 5000$\n";
    cout << "Chooes $/> ";
    cin >> op;
    cout << "==========================\n";
    cout << "[1] Your Old Age : 10 > 30 ?\n";
    cout << "[2] Your Old Age : 30 > 60 ?\n";
    cout << "Chooes $/> ";
    cin >> year;
    cout << "==========================\n";

    switch (op)
    {
    case 1:
        Price = 3000;
        break;
    case 2:
        Price = 5000;
        break;
    }
    switch (year)
    {
    case 1:
        discound = 30;
        break;
    case 2:
        discound = 50;
        break;
    }
    total = Price - discound;
    cout << "VaT : " << total * 0.15 << "$\n";
    cout << "Total Price is : " << total + total * 0.15 << "$\n";
}
