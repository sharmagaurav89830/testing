import java.util.ArrayList;
import java.util.Scanner;
public class test {
    public static void main(String[] args) {
        int[] num = {9,9,9,9,9,9,9,9,9,9};
        int k=1;
        int rem;
        int len=10;
        ArrayList<Integer> ans = new ArrayList<>();
        long number=0;
        for(int i=0;i<len;i++){
            number=number*10+num[i];
        }
        number+=k;
        while(number>0){
            rem = (int)number % 10;
            ans.add(0,rem);
            number/=10;
        }
        
        System.out.println(ans);
    }
}




