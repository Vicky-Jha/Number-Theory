package com.company;

import java.util.Scanner;

public class Main {
     static int count(int n){
         int result=0;
         for(int i=5;i<=n;i=i*5){
             result=result+n/i;
         }
         return result;
     }
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number:");
      int s=sc.nextInt();
        System.out.println(Main.count(s));
    }
}
