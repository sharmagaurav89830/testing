import java.util.Scanner;

public class PrimetillN {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int low = scn.nextInt();
        int high = scn.nextInt();
        for(int i= low ;i<=high;i++){
            int div=2;
            while(div*div<=i){
                if(i%div==0){
                    break;
                }
                div++;
            }
            if(div*div>i){
                System.out.println(i);
            }
        }
        }
    }
