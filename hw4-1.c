#include <stdio.h>

int main(){
    int x,y,z,mean;

    printf("Please input any three numbers:");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    mean = (x+y+z)/3;

    printf("The average of the given three values is %d \n", mean);

    return 0;
}
