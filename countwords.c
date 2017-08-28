#include <stdio.h>
#include <string.h> 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	    char s[200]='NULL';
	    int count = 0, i;
	    gets(s);
	    for (i = 0;s[i] != '\0';i++)
	    {
	        if (s[i] == ' ')
	            count++;    
	    }
	    printf("number of words in given string are: %d\n", count + 1);	    
	}
}
