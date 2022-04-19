#include "main.h"

/**
 * convertcap - converts a set of integers into the bigcap.
 * @num: number input
 * @base: base to change it to
 * Return: Always 0
 */

char *convertcap(unsigned int num, int base)
{
        static char Representation[] = "0123456789ABCDEF";
        static char buffer[50];
        char *ptr;

        ptr = &buffer[49];
        *ptr = '\0';

        do
        {
                *--ptr = Representation[num%base];
                num /= base;
        } while (num != 0);

        return (ptr);
}

#include "main.h"

/**
 * convertsmall - converts a set of integers into smallcap.
 * @num: number input
 * @base: base to change it to
 * Return: Always 0
 */
char *convertsmall(unsigned int num, int base)
{
        static char Representation[] = "0123456789abcdef";
        static char buffer[50];
        char *ptr;

        ptr = &buffer[49];
        *ptr = '\0';

        do
        {
                *--ptr = Representation[num%base];
                num /= base;
        } while (num != 0);

        return (ptr);
}
