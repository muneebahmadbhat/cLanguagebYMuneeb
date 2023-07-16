#include <stdio.h>
int main (){
    int n;
    char c;
    printf ("enter 0 to print triangular star pattern and 1 to print reverse triangular star pattern");
    scanf ("%c",&c);
    printf ("how many stars you want to print\n");
    scanf ("%d",&n);
    if (c=='0'){
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=i; j++)
            {
                printf ("*");
            }
            printf ("\n");
        }
    }else if (c=='1'){
        for (int i = n; i >=1; i--)
        {
        for (int j=1;j<=i;j++){
            printf ("*");
        }
        printf ("\n");
        }
        
    }else
    printf ("life is pretty hard these days and i love it");
    return 0;
}