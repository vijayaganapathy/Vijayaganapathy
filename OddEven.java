import java.util.Scanner;
public class Main
{
	public static void main(String args[])
   {
      int number;
      Scanner in = new Scanner(System.in);
      number = in.nextInt();
     if(number>-1)
     {
      if (number % 2 == 0)
         System.out.println("Even");
      else
         System.out.println("Odd");
     }else{
         System.out.println("invalid");
     }
   }
}
