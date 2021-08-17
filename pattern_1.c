#include <stdio.h>  
void main()  
{  
    //pattern involves characters space, /,\,_
      
    int i, j, rows = 5, k = 1,sp=0;  
    printf (" rows: %d\n", rows);  
 
      
    for ( i =1; i <= rows; i++)  //i = 2 
    {  
        for ( j = 1; j <= rows - i; j++)  // 4,3,2,1,0 -so (rows-i )
        {  
            printf (" ") ;   
        }  

        if ( k <= ( 2 * i ))  //total col = 2*rows // k = 3 k <= 5  "1,2,3"
        {  
            printf ("/"); // print /  
            
            for (sp = 1;sp <= (2*i-2); sp++) //sp = 3 , sp <= 3 ,
            {
                 if(sp==1 && i==1)
                 break;
                 if(i!=rows)
                  printf (" ");
                 else
                  printf("_");

            }
            
            printf ("\\");
            k++;
            
        }  
        
        printf ("\n");  
 }
}
