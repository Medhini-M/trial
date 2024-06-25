#include <stdio.h>
void main()
{
    int i, flag;
    float val;
    float bps[5] = {100, 80, 65.3, 108.9, 47.1};

    printf("Enter value: ");
    scanf("%f", &val);
    flag = 0;
    
    
    for (i=0; i<5; i++)
    {
        if ((0.95*bps[i] <= val) && (val <= 1.05*bps[i]))
        flag = 1;
        
    }

    if (flag == 1)
        printf("Substance known");
        else
        printf("Unkown solution");
}