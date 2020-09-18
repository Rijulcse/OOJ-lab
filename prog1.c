#include<stdio.h>
int main()
{
  int x=1;int a,b;int res=0;int f;
  char ch;
  while(x==1)
  {
     f=0;
     printf("Enter the two numbers\n");
     scanf("%d %d",&a,&b);
     printf("Enter the operator\n");
     scanf("%c",&ch);
     switch(ch)
     {
        case '+' :
     {
        res=a+b;f=1;
        break;
     }
        case '-' :
     {
        res=a-b;f=1;
        break;
     }
        case '*' :
     {
        res=a*b;f=1;

        break;
     }

        case '/' :
     {
         if(b)
        {
            res=a/b;f=1;
        }
          else
        {
          printf("Invalid value of b\n");
        }
        break;
     }

        case '>' :
    {
        if(a>b)
      {
        printf("True\n");
      }
        else
       {
        printf("False\n");
       }
        break;

    }

        case '<' :
      {
           if(a<b)
           {
                printf("True\n");
                }
            else
                printf("False\n");
                   break;

        case '=' :
        {
            if(a==b)
            {
              printf("True\n");
            }
                   else
                   {
                    printf("False\n");
                   }
                   break;
        }

        case '!' :
    {
                  if(a!=b)
                {
                   printf("True\n");
                }
                   else
                   {
                    printf("False\n");
                   }
                   break;
      }
        case '&' :
            {
              res=a&b;
              f=1;
              break;
            }

        case '|' :
            {
              res=a|b;
              f=1;
              break;
            }

     }
     if(f)
     printf("%d",res);
     printf("Enter 1 to continue and 0 to exit\n");
     scanf("%d",&x);

  }
  return 0;
}
}
