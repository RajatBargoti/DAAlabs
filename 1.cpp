//Rajat Bargoti , 20BCE2880, rajat.bargoti2020@vitstudent.ac.in//
#include <algorithm>

#include <iostream>

using namespace std;

 

int nthSmallest(int arr[], int r, int n)

{

    sort(arr, arr + r);

    return arr[n - 1];

}

 

int main()

{

    int arr[] = { 22, 5, 4, 14, 9 };

    int r = sizeof(arr) / sizeof(arr[0]), n = 2;

    cout << "n'th smallest element is " << nthSmallest(arr, r, n);

    return 0;

}