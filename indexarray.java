public class indexarray {

    public static int findIndex(int arr[], int t){
        if(arr == null){
            return -1;
        }

        // int len = arr.length;
        int i = 0;
        for(; i<arr.length;i++){
            
            if(arr[i]==t){

                return i;
            }
        }

        return -1;
    }
    public static void main(String[] args){
        int arr[] = new int [] {3,4,5,6,3,13};
        int ans= findIndex(arr,6);
        System.out.println(ans);

    }    
}
