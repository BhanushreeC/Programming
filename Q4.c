// 4. WAP to find the area of the circle
#include <stdio.h>
int main()
{
    int R;
    float A;
    printf("Enter the value of R=");
    scanf("%d", &R);
    A = 3.14 * R * R;
    printf("Area of circle is %f having the radius %d", A, R);
    return 0;
}