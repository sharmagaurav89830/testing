//java program to find whether the given string is palindrome or not

import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        String str = "", reverseStr = "";
        int strLength = str.length();
        Scanner s = new Scanner(System.in);

        System.out.print("Enter any string: ");
        str = s.next();

        for (int i = (strLength - 1); i >= 0; --i) {
            reverseStr = reverseStr + str.charAt(i);
        }

        if (str.toLowerCase().equals(reverseStr.toLowerCase())) {
            System.out.println(str + " is a palindrome!");
        } else {
            System.out.println(str + " is not a palindrome!");
        }
        s.close();
    }
}