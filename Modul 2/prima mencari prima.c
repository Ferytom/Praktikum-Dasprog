#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,f;
    for(i=1;i<100;i++)
    {
        c=0;
        for(a=1;a<i;a++)
        {
            if( i % a == 0 )
            {
                c++;
            }
        }
        if(c<2)
        {
            printf(" %d ", i);
        }
    }
    return 0;
}
