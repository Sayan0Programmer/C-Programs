import java.util.*;
import java.util.Scanner;
import java.io.*;
public class Spiral {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the base number: ");
		int n = sc.nextInt();
		int[][] A = new int[n][n];
		int i, x0 = 0, y0 = 0, x1 = n, y1 = n;
		int count=0;
		while(y0 < y1 && x0 < x1) {
//...First Row
			for(i = x0; i < x1; i++) {
				A[y0][i] = count++;
			}
			++y0;
//...Last Column
			for(i = y0; i < y1; i++) {
				A[i][x1-1] = count++;
			}
			--x1;
//...Last Row
			if(y0 < y1) {
				for(i = x1-1; i >= x0; --i) {
					A[y1-1][i] = count++;
				}
				--y1;
			}
//...First Column
			if(x0 < x1) {
				for(i = y1-1; i >= y0; --i) {
					A[i][x0] = count++;
				}
				++x0;
			}
		}
		for(i=0; i<n; i++){
			for(int j=0; j<n; j++)
				System.out.print(A[i][j]+"\t");
			System.out.println("");
		}
	}
}
