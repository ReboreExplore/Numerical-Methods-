/*A C program to implement the Bisection Method which can be used to find the roots of
single variable Algebraic and Transcendental Equation. */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float f(float x);
float f(float x)
{
    float res;
    res= (x*x)-4;
    return res;
}
int main()
{
   float a,b,c,f_a,f_b,f_c,e,e1;
   int iteration=0,j=1;
   char i[10]= "N",x[2] ="a",y[2]="b",z[2]="c",f_z[5] ="f(c)",error[7]="|a-b|";
   for(j=1;j<4;j++)
   {
       printf("\n\nTry %d\n",j);
       printf("\n Enter the initial guesses\n\n");
       printf(" The value of a = ");
       scanf("%e",&a);
       printf("\n\n The value of b = ");
       scanf("%e",&b);
       printf("\n\n Enter the error tolerance desired =");
       scanf("%e",&e);
        if(f(a)*f(b)>0)
            {
                printf("\n\n Oops!! No roots lies between the guessed values.");
                continue;
            }
        else{
                break;
            }
   }
    printf("\n\nOkay!You have chosen the correct interval for finding the roots\n");


    printf("\n\n%s \t %5s \t %9s \t %9s \t %9s \t %9s",i,x,y,z,f_z,error);
    printf("\n------------------------------------------------------------------------------\n");
    while(fabs(a-b)>=e)
    {
        c=(a+b)/2.0;
        f_a=f(a);
        f_b=f(b);
        f_c=f(c);
        e1 =fabs(a-b);
        iteration++;
        printf("\n%d \t %5.3f \t %9.3f \t %9.3f \t %9.3f \t %9.3f\n",iteration,a,b,c,f_c,e1);
        if(f_c ==0)
        {
            printf("\nThe root is %f\n",c);
            break;
        }
        if(f_a*f_c>0)
        {

            a=c;
        }
        else if(f_a*f_c < 0)
        {

            b=c;
        }
    }
    printf("\nThe root of the given equation is %f\n",c);
    return 0;

}
