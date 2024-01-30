#include "main.h"
/*
 *
 *
 */
int _epiputchar(char c)
{
        return (write(1, &c, 1));
}              
