#include <bits/stdc++.h>
using namespace std;



bool isPalindrome(string s)
{   
    /*
    Invariant: Iterate through [0,n/2]
    Pre-condition: flag = true.
    Post-condition: Returned value should be bool showing if a number is palindrome or not.
    */
    int len = s.length();
    int i, j;
    bool flag = true;
    for (i = 0, j = len - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
            flag = false;
    }
    return flag;
}



int main()
{
    
    cout << "PalindromeValidation " << isPalindrome("MADAM") << endl;

}