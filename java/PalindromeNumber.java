package com.company;

import java.util.Scanner;

public class Main {
    static int palindromeNumber(int N){
        int rev=0;
        int count=0;
        while(N>0){
            int digit=N%10;
            rev=rev*10+digit;
            ++count;
            N=N/10;
        }
        System.out.println(count);
        return rev;
    }
    public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number");
	int v=sc.nextInt();
        System.out.println(Main.palindromeNumber(v));
    }
}
