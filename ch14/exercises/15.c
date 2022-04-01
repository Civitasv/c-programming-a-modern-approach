#include <stdio.h>

#define ENGLISH

int main()
{
#if defined(ENGLISH)
    printf("Insert Disk 1");
#elif defined(FRENCH)
    printf("Inserez Le Disque 1");
#elif defined(SPANISH)
    printf("Inserte El Disco 1");
#endif
    return 0;
}