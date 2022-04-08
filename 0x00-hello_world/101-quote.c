#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 1 after printing the function
 */
int main(void)
{
FILE *fp;
fp = fopen("file.txt", "w+");
fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", fp);
fclose(fp);
return (1);
}
