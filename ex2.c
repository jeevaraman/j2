#include <stdio.h>	

int main()         
{
    int number;                          
  
    printf( "enter your number" );  
    scanf( "%d", &number );               
    if ( number%2==0 ) 
    {                 
        printf ( "the given number is even\n" ); 
    }
    else
    {
        printf( "the given number is odd\n" );     
    }
    
  return 0;
}
