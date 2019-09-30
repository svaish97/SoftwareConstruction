#include <bits/stdc++.h>
using namespace std;



bool isPalindrome(string s)
{   
    /*
    Invariant: Iterate through [0,n/2], till value [0,i] is a palindrome of that part  in the string.
    Pre-condition: bool p = true.
    Post-condition: Returned value should be bool showing if a number is palindrome or not.
    */
    int len = s.length();
    int i, j;
    bool p = true;
    for (i = 0, j = len - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
            p = false;
    }
    return p;
}



int main()
{
    
    cout << "PalindromeValidation " << isPalindrome("MADAM") << endl;

}