import java.io.*;
import java.util.*;
public class Servicelane
{
    public static void main(String args[])
    {
        int N,T,i;
        Scanner sc=new Scanner(System.in);
        N=sc.nextInt();
        T=sc.nextInt();
        sc.nextLine();
        int width[]=new int[N];
        
        for(i=0;i<N;i++)
        {
            width[i]=sc.nextInt();
        }
        while(T-->0)
        {
            int start,end;
            start=sc.nextInt();
            end=sc.nextInt();
            int min=Integer.MAX_VALUE;
            for(i=start;i<=end;i++)
            {
                if(width[i]<min)
                   min=width[i];
            }
            
            System.out.println(min);
            
        }
        
    }
}
