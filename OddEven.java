import java.util.Scanner;
public class Main
{
	public static void main(String args[])
   {
      int num;
      Scanner in = new Scanner(System.in);
      num = in.nextInt();
     if(num>-1)
     {
      if (num % 2 == 0)
         System.out.println("Even");
      else
         System.out.println("Odd");
     }else{
         System.out.println("invalid");
     }
   }
}
