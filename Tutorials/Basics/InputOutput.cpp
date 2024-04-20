//shortcut for all the relevant libraries used in c++
#include<bits/stdc++.h>
//iostream handles input and output operations.
//#include<iostream>
// with using namespace std; you don't have to explicitly add std:: each time.
using namespace std;
int main(){

    //simple cout command
    cout << "Hey, Ashi ";

    //want to print How are you? consecutively
    cout << "Hey "<<"\n";
    cout << "How are you? ";

    //insert a line break -> you can do it by \n or endl.
    // "\n" is a common and efficient way as compared to endl. \n is a low-level operation that inserts a new line 
    //and moves the cursor to the beginning of the next line in the output.
    cout << "I am fine" <<endl;
    cout << "That's good"<<"\n";

    //Taking user input using cin
    int x;
    cout << "Ënter x: ";
    cin >> x;
    cout << "Value of x: " << x<<"\n";

    //taking multiple values from the User.
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Values of a: " << a << " and b: " << b;

    return 0;
}
