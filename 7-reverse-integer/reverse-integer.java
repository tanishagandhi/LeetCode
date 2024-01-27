class Solution {
    public int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int d = x % 10;
            
            // Check for integer overflow before updating rev
            if (rev > Integer.MAX_VALUE / 10 || (rev == Integer.MAX_VALUE / 10 && d > 7)) {
                return 0;  // Overflow
            }
            if (rev < Integer.MIN_VALUE / 10 || (rev == Integer.MIN_VALUE / 10 && d < -8)) {
                return 0;  // Underflow
            }
            
            rev = rev * 10 + d;
            x = x / 10;
        }
        return rev;
    }
}
// python:
// def reverse(x):
//     INT_MAX = 2**31 - 1
//     INT_MIN = -2**31

//     rev = 0
//     while x != 0:
//         d = x % 10
//         new_rev = rev * 10 + d

//         # Check for integer overflow before updating rev
//         if new_rev > INT_MAX or new_rev < INT_MIN:
//             return 0  # Overflow/Underflow

//         rev = new_rev
//         x //= 10

//     return rev

