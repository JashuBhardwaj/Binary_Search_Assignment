public class Solution {
    public int sqrt(int A) {

        if(A <= 1){
            return A;
        }

        long i = 1;

        for(i = 1; i * i <= A; i++) {

            if(i * i == A){
                return (int)i;
            }
            
        }

        return (int)i - 1;
    }
}
