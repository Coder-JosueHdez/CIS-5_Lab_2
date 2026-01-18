#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int age = 0;
    int height = 0;

    cout << "What is your age?" << endl;
    cin >> age;
    cout << "What is your height(Please answer in inches)?" << endl;
    cin >> height;

    if (age >= 7 && height >= 48)
    {
        cout << "You may ride!:)";
    }
    else
    {
        cout << "YOU SHALL NOT PASSSSSSS!!!!!!";
    }

    return 0;
}