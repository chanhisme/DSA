import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
public class b1TwoSum{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        ArrayList <Integer> a = new ArrayList<Integer>();
        Map <Integer, Integer> cnt = new HashMap<Integer, Integer>();
        for(int i = 0; i < n; i++){
            a.add(sc.nextInt());
        }
        int []res = new int [2];
        for(int i = 0; i < n; i++){
            int target = k - a.get(i);
            if(cnt.containsKey(target)){
                res[0] = cnt.get(target);
                res[1] = i;
                break;
            }
            cnt.put(target, i);
            
        }
        
        sc.close();
    }
}