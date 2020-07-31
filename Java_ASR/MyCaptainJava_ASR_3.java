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
public class MyCaptainJava_ASR_3 {
   
    /**
     *
     * @param args
     */
    public static void main(String[]args){
       
        System.out.println("Pick one by the serial number\n1.Hi\n2.Wassup\n3.Hey\n");
        Scanner sc = new Scanner(System.in);
        int choice = sc.nextInt();
        switch(choice){
            case 1: System.out.println("Hi");
                    break;
            case 2: System.out.println("Wassup");
                    break;
            case 3: System.out.println("Hey");
                    break;
            default: System.out.println("Wrong Number");
 
        }
        
        
        
    }
}
