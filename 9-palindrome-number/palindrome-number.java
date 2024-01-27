class Solution {
    public static boolean isPalindrome(int x) {
        int rev=0,temp;
        temp=x;
        // while (x != 0) 
        // {
        //     x /= 10;
        //     ++count;
        // }
        // System.out.println(count);
        x=temp;
        while(x>0)
        {
            int d=x%10;
            rev=rev*10+d;
            // System.out.println(rev);
            x=x/10;
        }
        if(rev==temp){
            return true;
        }
        else{
            return false;
        }
    }
    // public static void main(String[] args) {
    //     if(isPalindrome(121)==true){
    //         System.out.println("Yes");
    //     }
    //     else{
    //         System.out.println("No");
    //     }
    // }
}