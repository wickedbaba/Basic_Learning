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
public class MyCaptainJava_ASR_7 {
    public static void main(String[]args){
  
{   
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter the number of Fibonacci numbers you want to see\n");
   int input = sc.nextInt();
    int n1=0,n2=1,n3,i;    
    System.out.print(n1+" "+n2);  
    
    for(i=2;i<input;++i)    
    {    
    n3=n1+n2;    
    System.out.print(" "+n3);    
    n1=n2;    
    n2=n3;    
    }    
  
    }
    }
    }
   