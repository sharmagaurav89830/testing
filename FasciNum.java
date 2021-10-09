//java program to check whether a number is "fascinating" number or not

import java.util.Scanner;
public class FasciNum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter a number:");
        int number = scanner.nextInt();
 
       
            if (isFasci(number)) {
                System.out.println(number + " is a fascinating number!");
            } else {
                System.out.println(number + " is NOT a fascinating number!");
            }
        
        
    }

    public static boolean isFasci(int input) {
        String s =input + "" + (input * 2) + (input * 3);
        boolean f=true;
        for (char i = 1; i <= 9; i++) {
            int count=0;
            for(int j=0;j<s.length();j++)
            {
                if(s.charAt(j)==i)
                count++;
            }
            if(count>1 || count ==0)
            {
                f=false;
                break;
            }
          }
        return f;
}
}
