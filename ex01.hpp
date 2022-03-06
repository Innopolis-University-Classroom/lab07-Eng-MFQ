#include <iostream>
#include <vector>
using namespace std;
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template <class T>
void multiples (T& sum, T x, int n)
{
    int i;
    auto term = (T) 0;
    sum = (T) 1;
    for (i=1; i<=n; i++)
    {
        term = term + x;
        sum = sum + term;
    }
    cout << sum << endl;
}