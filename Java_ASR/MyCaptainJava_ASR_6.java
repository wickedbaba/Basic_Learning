/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.mycaptain;

import java.util.Scanner;

/**
 *
 * @author wickedbaba
 */
public class MyCaptainJava_ASR_6 {
    
    public static void main(String[]args)
    {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter the number\n");
       int a= sc.nextInt();
       int i,n,count=0;
        
       
           if(a%2==0)
           count++;
           
            for(i=3;i<a/2;i=i+2){
               if(a%i==0){
                   count++;
               }
               }
           
       
       if(count>0 && a!=1){
           System.out.println("Number is not prime");
           }
       else if(a==1){
           System.out.println("Number is co-prime");
           }
       else{
           System.out.println("Number is prime");
           }
       
       
       
    }
    
}
