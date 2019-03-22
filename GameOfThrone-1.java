import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution 
{ 
    static int canFormPalindrome(String str)
  {  
    int count[] = new int[256]; 
    Arrays.fill(count, 0); 
    for (int i = 0; i < str.length(); i++) 
    count[(int)(str.charAt(i))]++; 
    int odd = 0; 
    for (int i = 0; i <256; i++)  
    { 
    if (count[i]%2==1) 
        odd++; 
  
    if (odd > 1) 
        return 0; 
    }  
    return 1; 
  }

    public static void main(String[] args) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String s=br.readLine();
        int result = canFormPalindrome(s);
             if(result==1)
                 System.out.println("YES");
             else
                 System.out.println("NO");
    }
}
