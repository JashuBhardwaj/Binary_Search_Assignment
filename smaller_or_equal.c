public class Solution {
    public int solve(int[] A, int B) {

        if(B >= A[A.length - 1]) {
            return A.length;
        }

        int mid = 0, low = 0, high = A.length - 1;

        while(low <= high){
            mid = (low + high) / 2;

            if(A[mid] == B) {
                if(A[mid - 1] <= B && A[mid + 1] > B){
                    return mid + 1;
                }
                else{
                    low = mid + 1;
                }

            }

            else if(A[mid] < B){
                if(A[mid + 1] > B){
                    return mid + 1;
                }

                else {
                    low = mid + 1;
                }
            }

            else{
                high = mid - 1;
            }
        }

        return 0;
    }
}
