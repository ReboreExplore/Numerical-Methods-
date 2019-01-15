/* A C program to find the solution of a Linear or Transcendental equation by the Newton Raphson Method*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float f(float x);
float fdiff(float x);
float f(float x)
{
    float res;
    res= (3*x)+sin(x)-pow(2.71828,x);
    return res;
}
float fdiff(float x)
{
    float res;
    res = 3-cos(x)- pow(2.71828,x);
    return res;
}
int main()
{
    float x0,x1,e,fx,fx1,d;
    int i=0;
    char a[5]="x(i)",b[10]="x(i+1)",c[20]="|x(i+1)-x(i)|",it[10] = "i";
    printf("\nEnter the initial guess\n");
    scanf("%f",&x0);
    printf("\nEnter the error tolerance\n");
    scanf("%f",&e);
    printf("\n %s \t %9s \t %9s \t %9s\n",it,a,b,c);
    printf("\n----------------------------------------------------------\n");
    do
    {
      x0=x1;
      fx=f(x0);
      fx1=fdiff(x0);
      x1=x0-(fx/fx1);
      d=fabs(x0-x1);
      printf("\n %d \t %9.3f \t %9.3f \t %9.3f\n",i,x0,x1,d);
      i++;
    }while(fabs(x1-x0)>=e);
    printf("The root of the equation is %f",x1);
    return 0;
}





