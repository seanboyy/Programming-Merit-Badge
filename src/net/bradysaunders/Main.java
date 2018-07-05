package net.bradysaunders;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Enter a word/phrase to see if it's a palindrome");
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        if(isPalindrome(input)){
            System.out.println("That's a palindrome");
        }
        else{
            System.out.println("That's not a palindrome");
        }
        scanner.close();
    }

    private static boolean isPalindrome(String input){
        String[] tokens = input.toUpperCase().split("[^A-Za-z0-9]");
        StringBuilder sb = new StringBuilder();
        for(String token : tokens){
            sb.append(token);
        }
        input = sb.toString();
        int half = (int)Math.floor(input.length() / 2);
        for(int i = 0; i < half; ++i){
            if(input.charAt(i) != input.charAt(input.length() - 1 - i)){
                return false;
            }
        }
        return true;
    }
}
