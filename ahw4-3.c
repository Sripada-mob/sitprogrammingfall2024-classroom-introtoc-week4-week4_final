#include <stdio.h>
#include <math.h>

int main() {

    double a,b,c,d,sol1,sol2;

    printf("a? ");
    scanf("%lf", &a);
    
    printf("b? ");
    scanf("%lf", &b);
    
    printf("c? ");
    scanf("%lf", &c);

    d = b*b - 4*a*c ; 

    sol1 = (-b + sqrt(d)) / (2*a);
    sol2 = (-b - sqrt(d)) / (2*a);

    if(a == 0) {
            printf("The solution of equation is: x1 = %f \n", -c / b);
    } else if(d < 0) {
        
                  printf("The real solution doesn't exist.\n");
        
          } else if(d == 0) {
        
                          printf("The solution of the equation is %f\n", (-b / 2*a));

                  } else if(d > 0) {
        
                          printf("The solutions of the equation is: x1 = %f \n" , sol1);
      
                          printf("The solutions of the equation is: x2 = %f \n", sol2);
        }
    
    return 0;
}
