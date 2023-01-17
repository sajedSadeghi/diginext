#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void func(string, int);


int main()
{
    // set variables
    int number;
    string str;

    // get values
    cout << "please enter string : ";
    cin >> str;
    cout << "please enter number : ";
    cin >> number;

    // Convert string to lowercase
    for (int x = 0; x < str.length(); x++)
    {
        if (tolower(str.at(x)) != str.at(x))
        {
            str.at(x) += 32;
        }
    }

    func(str, number);

    return 0;
}

void func(string str, int n)
{
    int counter = 0;
    string finalstr;
    for (int i = 0; i < n; i++)
    {
        finalstr += str;
    }

    finalstr = finalstr.substr(0, n);

    for (int i = 0; i < finalstr.length(); i++)
    {
        if (finalstr.at(i) == 'a')
        {
            counter++;
        }
    }

    cout << "final string : " << finalstr << endl
         << "counter a : " << counter;
}