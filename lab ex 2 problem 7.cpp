#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,a;

    printf("Please enter the values of Three points:  ");
    printf("\n(x1,y1):\n");
    scanf("%d%d",&x1,&y1);
    printf("(x2,y2):\n");
    scanf("%d%d",&x2,&y2);
    printf("(x3,y3):\n");
    scanf("%d%d",&x3,&y3);

    a= (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));

    if(a==0)
    {
        printf("\nAll three points fall on one straight line.");
    }
    else
    {
        printf("\nThese three points do not fall on one straight line.");
    }
    return 0;
}
