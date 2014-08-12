import java.util.Scanner;
public class FindDigits
    {
    public static int findDigits(int num)
        {
        int res=0;
        int number = num;
        String numbers = String.valueOf(num);
      
       
        for(int i=0;i<numbers.length();i++)
            {
            int digit = Integer.parseInt(Character.toString(numbers.charAt(i)));
            if(digit==1)
                res++;
            else if(digit>0 && number%digit==0)
                res++;
        }
        return res;
    }
    public static void main(String[] args)
        {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i=0;i<T;i++)
            {
            int num = sc.nextInt();
            System.out.println(findDigits(num));
              
        }
        sc.close();
    }
}
