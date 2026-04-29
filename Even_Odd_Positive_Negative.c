#include<stdio.h>
int main()
{   
   int n;
  int a = 0, b = 0, c = 0, d = 0;
    int currentNumber;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) 
    {

        scanf("%d", &currentNumber); 
        if(currentNumber%2==0)
        a++;
      
        else
        b++;
       
        if(currentNumber>0)
        c++;
       
        else if(currentNumber<0)
        d++;
       
        
    }
    printf("Even: %d\n",a);
    printf("Odd: %d\n",b);
    printf("Positive: %d\n",c);
    printf("Negative: %d",d);

    return 0;
}


