/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author cl18314
 */
public class land {

    private BigInteger budget = new BigInteger("5000000");
    Scanner in = new Scanner(System.in);
    
    public void solve() {
        int t = in.nextInt();
        while (t > 0) {
            t--;
            ArrayList <BigInteger> lands = new ArrayList<BigInteger>();
            BigInteger li;
            li = in.nextBigInteger();
            while (!li.equals(BigInteger.ZERO)) {
                lands.add(li);
                li = in.nextBigInteger();
            }
            Collections.sort(lands);
            BigInteger ans = BigInteger.ZERO;
            int time = 1;
            boolean state = true;
            for (int i = lands.size() - 1; i >= 0; --i) {
                BigInteger aux = new BigInteger("2");
                aux = aux.multiply(lands.get(i).pow(time));
                ans = ans.add(aux);
                time++;
                if (ans.compareTo(budget) == 1) {
                    state = false;
                    break;
                }
            }
            if (state) System.out.println(ans);
            else System.out.println("Too expensive");
        }
    }
    
    public static void main(String[] args) {
        new land().solve();
    }
    
}
