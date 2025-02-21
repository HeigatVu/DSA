/*
Implement with Java
By Duc
Feb 16, 2025
*/
import java.util.Scanner;


class SumOfDigits {
  static int sumOfDigits(int firstNumberm int secondNumber) {
    return firstNumber + secondNumber;
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter first number: ");
    int firstNumber = scanner.nextInt();
    System.out.print("Enter second number: ");
    int secondNumber = scanner.nextInt();
    System.out.println(sumOfDigits(firstNumber, secondNumber));
  }
}
