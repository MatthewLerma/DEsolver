#include <iostream>
#include <string>
#include "fraction.h"
#include "diffeq.h"


using namespace std;

string getInput(const char *title);

int main()
{
    string Unsorted;
    Unsorted = getInput("Input your equation using variables y and t");
    return 0;
}

string getInput(const char *title)
{
    string DiffEqUnsorted;
    cout << title << endl << endl;
    /*
    cout << "When inputing in the format of dy/dt, for derivatives higher than 1" << endl
         << "write in the format of d^ny/dt^n where n is the derivative count" << endl
         << "e.g. 14d^3y/dt^3 + 16d^2y/dt^2 - 44dy/dt + 6y = 0" << endl << endl;
    cout << "When inputting in the y' format, input as y(n) where n is" << endl
         << "the derivative count, even for the first derivative" << endl
         << "e.g. 6y(4) - 22y(3) + y(2) - y(1) + 66y = 0" << endl;
         */
    getline(cin,DiffEqUnsorted);
    return DiffEqUnsorted;
}
