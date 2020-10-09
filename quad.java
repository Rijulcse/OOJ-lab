import java.util.Scanner;
class quad 
{
  public static void main(String[] args)
{
  Scanner input = new Scanner(System.in);
  System.out.println("Enter the values of a,b,c in equation ax2+bx+c=0");
  int a = input.nextInt();
  int b = input.nextInt();
  int c = input.nextInt();
  int d=b*b-(4*a*c);
  if(d>=0)
  {
    System.out.println("The value of discriminate is :" + d);
  }
  else
  {
    System.out.println("There are no real solutions");
  }
}
}
