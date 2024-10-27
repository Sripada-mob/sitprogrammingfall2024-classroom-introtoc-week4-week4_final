#include<stdio.h>

int main(void) {

    double userheight, userweight, ideal;
    int diff;

    printf("userweight? ");
    scanf("%lf", &userweight);
    
    printf("userheight? ");
    scanf("%lf", &userheight);

    ideal = userheight * userheight * 22 / 10000;

    printf("Ideal weight = %lf \n", ideal);

    diff = userweight - ideal;

    printf("diff = %f \n", diff);

    
    if(diff >= 5){
            printf("Let's reduce sweets\n");
                }
    
    else if(diff <= -5){ 
        printf("Eat some more \n");
        }
    
    else{
        printf("Go for it");
            }
    
    return 0;
}
