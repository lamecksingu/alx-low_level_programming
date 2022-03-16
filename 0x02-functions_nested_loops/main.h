#include<stdlib.h>
#include<stdio.h>
/*char _putchar(char i)
{
	printf('%c', i);


}
*
* print_alphabet - a function to  print alphabets
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
}
