/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.mycaptain;

import java.util.*;

/**
 *
 * @author wickedbaba
 */
public class MyCaptainJava_ASR_2 {
    public static void main(String args[]){
                Scanner sc =new Scanner(System.in);
                    System.out.println("Enter minutes");
                int min = sc.nextInt();
                int days;
                int years,random;
            days=min/(24*60);
            years=(int) (days/365);
            random = (int) (days%365);
                    System.out.println(min+" minutes is approximately "+years+" years and "+random+" days");
        }
}
