#include <iostream>

using namespace std;

int main(){
    
    int Number1, Number2, Operation;
    cout << "Enter Number one $/> ";
    cin >> Number1;
    cout << "Enter Number tow $/> ";
    cin >> Number2;
    cout << "Opretion Number is \n";

    cout << "[1] + \n";
    cout << "[2] - \n";
    cout << "[3] x \n";
    cout << "[4] % \n";

    cout << "Chooes $/> ";
    cin >> Operation;

    if (Operation == 1)
        cout << "Number = " << Number1 + Number2;
    else if (Operation == 2)
        cout << "Number = " << Number1 - Number2;
    else if (Operation == 3)
        cout << "Number = " << Number1 * Number2;
    else if (Operation == 4)
        cout << "Number = " << Number1 / Number2;
    else
    {
        cout << "Operation is Not Valid \n";
    }
}
