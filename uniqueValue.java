import java.util.HashMap;

public class uniqueValue {
    public static int func(int [] arr) {

    
        HashMap<Integer , Integer > mp = new HashMap<>();
        for(int i : arr) {
            mp.put(i, mp.get(i) == null ?1 : mp.get(i)+1);
        }
        for(int i : mp.keySet()){
            if(mp.get(i) == 1){
            return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int [] arr = {2,6,6};
        int [] arr2 ={ 11,11,11,11,30,11,11,11};

        System.out.println(func(arr));
        System.out.println(func(arr2));
    }

}
