int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_diagonal(int n);
void print_line(int n);
void print_square(int size);
void print_triangle(int size);
root@ac084de090af:/alx-low_level_programming/0x04-more_functions_nested_loops#
[D
:wq

cd root
exit()
EXIT_SUCCESS
"""
"end"
;
*/
#
#include "main.h"

#include <stdio.h>



/**

 * main - check the code.

 *

 * Return: Always 0.

 */

int main(void)

{

    char c;



    c = 'A';

    printf("%c: %d\n", c, _isupper(c));

    c = 'a';

    printf("%c: %d\n", c, _isupper(c));

    return (0);

}
