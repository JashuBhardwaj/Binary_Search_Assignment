public class Solution {
    public int solve(int[] A, int B) {

        int highIndex = 0;
        int mid = 0, low = 0, high = A.length - 1;

        while(low <= high){
            
            mid = (low + high) / 2;

            if(A[mid] > A[mid - 1] && A[mid] > A[mid + 1]){
                highIndex = mid;
                break;
            }

            if(A[mid] > A[mid - 1] && A[mid] < A[mid + 1]){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        low = 0;
        high = highIndex;

        while(low <= highIndex){
            mid = (low + high) / 2;

            if(A[mid] == B){
                return mid;
            }
            if(A[mid] < B){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        low = highIndex + 1;
        high = A.length - 1;

        while(low <= high){
            mid = (low + high) / 2;

            if(A[mid] == B){
                return mid;
            }

            if(A[mid] < B){
                high = mid - 1;  
            }
            else{
                low = mid + 1;
            }
        }

        return -1;
    }
}
