// Area of a circle

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1415
int main()
{
    int r;
    float area;
    printf("Enter radius:");
    scanf("%d",&r);
    area = PI * pow(r,2);
    printf("Area is %.2f.",area);
    getch();
    return 0;
}