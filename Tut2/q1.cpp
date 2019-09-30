#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{   
    /*
    Invariant: At any point, sum should conatin sum of i elements.
    Pre-condition: Sum should be initialized with zero. Array should always have a valid value.
    Post-condition: Sum would store sum of n elements of the array.
    */
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    return sum;
}

int main()
{
    int arr[] = {1,2,3,4};
    int sum_ans = sum(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "SUM: " << sum_ans << endl;


}