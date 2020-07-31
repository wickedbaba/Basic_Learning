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
public class MyCaptainJava_ASR_4 {

    /**
     *
     * @param args
     */
    public static void main(String[]args){
        int a[][]={{1,3,4},{2,4,3},{3,4,5}};
        int b[][]={{1,3,4},{2,4,3},{1,2,4}};
        int i,j,k;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                k=a[i][j]+b[i][j];
                System.out.print(k+" ");
            }
            System.out.print("\n");
        }
        
    }
}
