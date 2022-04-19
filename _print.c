#include "main.h"

/*
 * _printf - function to print the characters
 * @soot: fixed input
 * Return: Always 0
 */

int _printf(char *soot,...)
{
        char *traverse;
	int f = 0, y = 0;
        char *u;
	int ta;
        unsigned int i;
	int j;
        char *s;

        va_list arg;
        va_start(arg,soot);
	
        for (traverse = soot;  *traverse != '\0'; traverse++)
        {
                while (*traverse != '%')
                {
			if (*traverse != '\0')
			{
                        	_putchar(*traverse);
				traverse++;
				f++;
			}
			else
			{
				break;
			}
                }
		if (*traverse == '\0')
			break;

               	traverse++;
		f++;
                switch (*traverse)
       	        {
               	        case 'c': j = va_arg(arg, int);
				  write(1, &j, 3);
                          	  break;
                    	case 'd': ta = va_arg(arg, int);
                       	          if (ta < 0)
                               	  {
                                       	  ta = -ta;
                                       	  s = "-";
					  write(1, s, 1);
                               	 }
                               	 s = convertcap(ta,10);
				 y = strlen(s);
				 write(1, s, y);
                               	 break;
			case 'i':
				 ta = va_arg(arg, int );
				  if (ta < 0)
                                  {
                                          ta = -ta;
                                          write(1,"-",1);
                                 }
				 s = (convertcap(ta,10));
				 y = strlen(s);
				 write(1, s, y);
                                 break;
			case 'u':
				i = va_arg(arg, int);
				s = convertcap(i, 10);
				y = strlen(s);
				write(1, s, y);
				break;
			case 'o':
				i = va_arg(arg, int);
				s = convertcap(i,8);
				y = strlen(s);
				write(1, s, y);
				break;
			case 'X':
				i = va_arg(arg, int);
				s = convertcap(i,16);
				y = strlen(s);
				write(1, s,y);
				break;
			case 'x':
				i = va_arg(arg, int);
				s = convertsmall(i,16);
				y = strlen(s);
				write(1,s,y);
				break;
			case 's':
				s = va_arg(arg, char *);
				y = strlen(s);
				write(1,s,(y));
				break;	
                     	case 'p': 
				u = (char *) va_arg(arg, char *);
				write(1,&u,1);
                               	break;
			default:
				  write(1,traverse,1);
				  break;
               	}
	}

        va_end(arg);
	return (f);
}
