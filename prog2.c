#include<stdio.h>
float sumaver(int a,int b)
{
  printf("sum:%d\n",(a+b));
  return (a+b)/2.0;
}
void printeven(int a,int b)
{

    if(a%2)
    {
      a++;
      printf("Even numbers:");
      for(int i=a;i<b;i=i+2)
      {
          printf("%d",i);
          printf("\n");
      }
    }
}
int main()
{
   int a[3];int max1,max2;
   float avg;
   printf("Enter three numbers\n");
   scanf("%d %d %d",&a[0],&a[1],&a[2]);
   max1=0,max2=0;
   for(int i=0;i<3;i++)
    if(a[i]>a[max1])
    max1=i;
   for(int i=0;i<3;i++)
    max2=i;
   avg=sumover(a[max2],a[max1]);
   printeven(a[max2],a[max1]);
   return 0;

}

