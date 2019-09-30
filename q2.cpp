
#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{   
    /*
    Invariant: check i b/w 2...sqrt(n).
    Pre-condition: n>=2.
    Post-condition: Returned value should be bool showing if a number is prime or not.
    */
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
 

    cout << "Prime Validation " << isPrime(79) << endl;
  

}