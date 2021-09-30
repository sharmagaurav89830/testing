
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Hello {
	public static void main(String[] args) {
		int temp;
		// int mat[][] = { { 1, 2, 3, 4 }, { 4, 5, 6, 6 }, { 7, 8, 9, 9 }, { 12, 23, 22,
		// 45 } };
		int mat[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		for (int i = 0; i < mat.length; i++) {
			for (int j = 0; j < i; j++) {
				temp = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = temp;
			}
		}
		
		for (int i = 0; i < mat.length; i++) {
			for (int j = 0; j < mat[i].length; j++)
				System.out.print(mat[i][j] + " ");
			System.out.println();
		}
	}
}