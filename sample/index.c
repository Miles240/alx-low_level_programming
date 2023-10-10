#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdlib.h>

struct person
{
    char *name;
    char *age;
    char *hobby;
};
typedef struct person fam;
int main(void)
{

    fam mom, dad, sis;
    fam me = {"miles", "19", "playing games"};
    
    printf("%s\n", me.name);
    printf("%s\n", me.age);
    printf("%s\n", me.hobby);

    fam me2 = {.name = "miles", .hobby = "19", .age = "playing games"};

    mom.name = "fidelia";
    dad.age = "54";
    sis.hobby = "reading";

    // printf("%s\n", mom.name);
    // printf("%s\n", dad.age);
    // printf("%s\n", sis.hobby);
    printf("%s\n", me2.name);
    printf("%s\n", me2.age);
    printf("%s\n", me2.hobby);
}
