#include<stdio.h>
/*int message1( ) ;
int message2( ) ;
int main( )

{
 message1( ) ;
 message2( ) ;
}
int message2( )
{
 printf ( "\nBut the butter was bitter" ) ; 
}
int message1( )
{
 printf ( "\nMary bought some butter" ) ;
}*/


/*int italy();
int brazil();
int argentina();

int main( )
{
 printf ( "\nI am in main" ) ;
 italy( ) ;
 printf ( "\nI am finally back in main" ) ;
}
int italy( )
{
 printf ( "\nI am in italy" ) ;
 brazil( ) ;
 printf ( "\nI am back in italy" ) ;
}
int brazil( )
{
 printf ( "\nI am in brazil" ) ;
 argentina( ) ;
}
int argentina( )
{
 printf ( "\nI am in argentina" ) ;
}*/


//int square(float);
int main( )
{
 float a,b ;
 int square(float);
 printf ( "\nEnter any number " ) ;
 scanf ( "%f", &a ) ;
 b=square(a);
 printf ( "\nSquare of %f is %f", a, b ) ;
}
int square ( float x )
{
 float y ;
 y = x * x ;
 return ( y ) ;
}
 
 
/*int main( )
{
 float square ( float ) ;
 float a, b ;
 printf ( "\nEnter any number " ) ;
 scanf ( "%f", &a ) ;
 b = square ( a ) ;
 printf ( "\nSquare of %f is %f", a, b ) ;
}
float square ( float x )
{
 float y ;
 y = x * x ;
 return ( y ) ; 
}*/

