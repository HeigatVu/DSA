/*
Implement in Java
By Duc
Feb 17, 2025
*/

import java.util.*;
import java.io.*;

public class MaxPairWiseProduct {

  static int getMaxPairWiseProduct(int[] numbers) {
    int maxProduct = 0;
    int arrLength = numbers.length;

    for (int first = 0; first < arrLength; ++first) {
      for (int second = first + 1; second < arrLength; ++second) {
        maxProduct = Math.max(maxProduct, numbers[first] * numbers[second]);
      }
    }
    return maxProduct;
  }

  static class FastScanner {
    BufferedReader br;
    StringTokenizer st;

    FastScanner(InputStream stream) {
      try {
        br = new BufferedReader(new InputStreamReader(stream));
      } catch (Exception e) {
        e.printStackTrace();
      }
    }

    String next() {
      while (st == null || !st.hasMoreTokens()) {
        try {
          st = new StringTokenizer(br.readLine());
        } catch (IOException e) {
          e.printStackTrace();
        }
      }
      return st.nextToken();
    }

    int nextInt() {
      return Integer.parseInt(next());
    }
  }

  public static void main(String[] args) {
    System.out.println("Enter the numbers of values: ");
    FastScanner scanner = new FastScanner(System.in);
    int n = scanner.nextInt();
    int[] numbers = new int[n];

    System.out.println("Input " + n + " integers: ");
    for (int i = 0; i < n; i++) {
      numbers[i] = scanner.nextInt();
    }

    int maxProduct = getMaxPairWiseProduct(numbers);
    System.out.println("The maximum pairwise product is: " + maxProduct);
  }
}
