#include<stdio.h>
#include<math.h>
int main()
{
    float h,k,x,y,distance,radius;
    printf("enter the point at the centre");
    scanf("%f%f\n", &h,&k);
    printf("enter the radius of the circle");
    scanf("%f", &radius);
    printf("enter the points to be checked");
    scanf("%f%f\n", &x,&y);
    distance=sqrt(pow((x-h),2)+pow((y-k),2));
    if(distance<radius)
    {
        printf("the points (%f,%f) lie inside the circle", x,y);
    }
    else 
    {
        printf("the points (%f,%f) lie outside the circle", x,y);
    }
    return 0;
}
