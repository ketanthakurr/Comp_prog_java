public class minarray{
    public static void main(String[] args){
        int arr [] = new int [] {10,40,20,70,50};
        int min = arr[0];
        for(int i = 0; i < arr.length; i++){
            if(arr[i] < min )
            min = arr[i];
        }
        System.out.println("Smallest number is " + min);
    }
}