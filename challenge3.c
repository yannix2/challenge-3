#include <stdio.h>
#include <string.h>
int main() {
    char a;
    int i;
    char  t[5]; 
    for (i=0;i<=4;i++)
    {
    printf("ecrire t or f' \n");
    scanf ("%s",&a);
    t[i]=a;
    }
  int b=0;
     for (i=0;i<=4;i++)
    { 
      if (t[i]== 't')
      
        b=b+1;
    
    
    }
    printf ("le nombre d'occurence de true est  %i \n ",b);



}
