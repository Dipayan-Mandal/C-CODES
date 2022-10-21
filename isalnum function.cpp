
            //ISALNUM <IF THE INPUT IS A NUMBER OR CHARECTER THEN IT IS A ALPHANUMERICAL CHARECTER>

/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalnum(c) == 0)
        printf("%c is not an alphanumeric character.", c);
    else
        printf("%c is an alphanumeric character.", c);
    
    return 0;
}*/

                  //ISALPHA<IF THE INPUT IS A CHARECTER THEN IT WILL SHOW POSITIVE>

/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);

    return 0;
}*/

              // The iscntrl() function checks whether a character is a control character or not.

            //Characters that cannot be printed on the screen are known as control characters.  For example, backspace, Escape, newline etc.


/*#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;

    printf("The ASCII value of all control characters are:\n");
    for (i=0; i<=127; ++i)
    {
        if (iscntrl(i)!=0)
            printf("%d ", i);
    }
    return 0;
}*/

              //The isdigit() function checks whether a character is numeric character (0-9) or not.

/*#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if (isdigit(c) == 0)
         printf("%c is not a digit.",c);
    else
         printf("%c is a digit.",c);
    return 0;
}*/

             //The isgraph() function checks whether a character is a graphic character or not.

/*#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    printf("All graphic characters in C programming are: \n");
    for (i=0;i<=127;++i)
    {
        if (isgraph(i)!=0)
            printf("%c ",i);
    }
    return 0;
}*/

            //The islower() function checks whether a character is lowercase alphabet (a-z) or not.

#include <stdio.h>
#include <ctype.h>
int main()
{
   char ch;
   printf("Enter any character\n");
   scanf("%c", &ch);
 
   if ( islower ( ch ) )
   printf ( "\nEntered character is lower case character") ;
   else
   printf("\nEntered character is not lower case character");
}
