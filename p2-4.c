#include <stdio.h>
int main()
{
    int c,f;
    printf("Enter degree Fahrenheit");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("Temperature id %d\n",c);
}
