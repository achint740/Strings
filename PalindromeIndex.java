import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner s = new Scanner(System.in);
        int q = s.nextInt();
        for (int p = 0; p < q; p++) {
            String a = s.next();
            StringBuilder anew=new StringBuilder();
            anew.append(a);
            
            if (isPal(anew)) {
                System.out.println("-1");
            }

            else {
                int f = 0, l = 0;
                for (int i = 0, j = a.length() - 1; i < a.length() / 2; i++, j--) {
                    if (a.charAt(i) != a.charAt(j)) {
                        f = i;
                        l = j;
                        break;
                    }
                }
                StringBuilder  fnew=new StringBuilder();
                StringBuilder lnew=new StringBuilder();
                fnew.append(a);
                fnew.deleteCharAt(f);
                
                lnew.append(a);
                lnew.deleteCharAt(l);
                
                if(isPal(fnew)){
                    System.out.println(f);
                }
                else if(isPal(lnew)) {
                    System.out.println(l);
                }
                
            }
        }
    }

    public static boolean isPal(StringBuilder a) {
        int n = a.length();
        for(int i=0;i<=n/2;i++)
         {
             if(a.charAt(i)!=a.charAt(n-1-i))
               return false;
         }
         return true;

    }
}
