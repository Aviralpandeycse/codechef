#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    long t,i,j,a,b,k;
 
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&a,&b);
        j=a;k=b;
        
        while(a!=b)
        {
            if(a>b)
                a-=b;
            else
                b-=a;
        }
        printf("%ld\n",(j*k)/(a*a));
              
            
 
        
    }
    return 0;
}

