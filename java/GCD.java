package com.company;

import java.util.Scanner;

public class Main {
   static int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else {
        return GCD(b, a % b);
    }
   }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Numbers");
        int x=sc.nextInt();
        int y=sc.nextInt();
        System.out.println(Main.GCD(x,y));
    }
}
