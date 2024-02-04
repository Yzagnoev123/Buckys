#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int b = 5;
    int c = 2;
    int * a = &b;
    int *d = &c;
    vector<int*>vec = {a,d};
    cout << vec.at(0);
}
