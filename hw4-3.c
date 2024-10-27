#include <stdio.h>
#include <math.h>

int main() {

    float p,q,h;    
    
    printf("Please provide the probability of team A winninng:");
    scanf("%f", &p);

    q = 1-p;

    h = (-p * (log(p)/log(2))) - (q * (log(q)/log(2)));

    printf("The entropy rate of the match is %f \n", h);

    return 0;
}
