public class reversingArray {
    static void reverse(int arr[], int n){
        int i, k , t;
        for(i = 0; i < n/2; i++);{
            t = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = t;
        }
        System.out.println("Reversed array is ");
        for (k = 0; k < n; k++){
            System.out.println(arr[k]);
        }
    }   

    public static void main(String[] args){
        int arr[] = {10,20,30,40,50};
        reverse(arr, arr.length);
    }
}
