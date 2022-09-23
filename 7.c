#include <stdio.h>
int main()
{
char chr;
char chr1;
printf("Enter a character: ");
scanf("%c", &chr);
printf("\nEnter a character: ");
scanf("\n%c", &chr1);
// When %c is used, a character is displayed
printf("\nYou entered %c.\n",chr);
printf("\nentered %c.\n",chr1);
// When %d is used, ASCII value is displayed
printf("\nCII value is %d", chr);
printf("\nCII value is %d", chr1);
return 0;
}
