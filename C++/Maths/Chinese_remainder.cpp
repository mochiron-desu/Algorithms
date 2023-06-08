/*-----------------------------------------------------Introduction------------------------------------------------------------------------*/
    /*The Chinese Remainder Theorem is used to solve modular arithmetic problems efficiently.Modular arithmetic involves performing 
    arithmetic operations on remainders. For example, if we divide 13 by 5, the remainder is 3. In modular arithmetic notation, we 
    would write this as 13 ≡ 3 (mod 5), which means that 13 is congruent to 3 modulo 5.*/
/*-----------------------------------------------------Algorithm----------------------------------------------------------------------------*/
    /*start with 1 and one by one increment it and check if dividing it with given elements in
     num[] produces corresponding remainders in rem[]. Once we find such an x, we return it. */

#include <iostream>
using namespace std;

// Function to find the smallest no that will produce respective remainder.
int findMinX(int num[], int rem[], int k)
{
    int x = 1; // Initialize result
  
    
    while (true)
    {
        // Check if remainder of x % num[j] is 
        // rem[j] or not (for all j from 0 to k-1)
        int j;
        for (j=0; j<k; j++ )
            if (x%num[j] != rem[j])
               break;
  
        // If all remainders matched, we found x
        if (j == k)
            return x;
  
        // Else try next number
        x++;
    }
  
    return x;
}
  
// Driver method
int main(void)
{
    int num[] = {3, 4, 5};
    int rem[] = {2, 3, 1};
    int k = sizeof(num)/sizeof(num[0]);
    cout << "x is " << findMinX(num, rem, k);
    return 0;
}