#include <stdio.h>

int main()
{
    float d,t,s;
    printf("Please enter the distance traveled in m \n");
    scanf("%f",&d);
    printf("Please enter the time taken to traveled in s \n");
    scanf("%f",&t);
    s=d/t;
    printf("The average speed is %f",s);
}
