#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
        return (000);//invalid input//
    if (n == 0)
        return (1); 
    else
    {
      return (n * factorial(n - 1));
    }
}

int main()
{
    int integer, ans;
    cin >> integer;
    ans = factorial(integer);
    cout << ans;
    return 0;
}