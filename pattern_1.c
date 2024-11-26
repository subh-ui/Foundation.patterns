/** 
0 0 0 0 0 0 0 0 0 10
0 0 0 0 0 0 0 0 9
0 0 0 0 0 0 0 8
0 0 0 0 0 0 7
0 0 0 0 0 6
0 0 0 0 5
0 0 0 4
0 0 3
0 2
1
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i, j;
    printf("\nEnter the range. ");
    scanf("%d", &n);
    printf("\n");
    printf("* * * PATTERN_1 * * *\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j<n)
            printf("0 ");
            else
            printf("%d", n);
        }
        n--;
        printf("\n");
    }
    return 0;
}