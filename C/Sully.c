#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
lol
*/
#ifndef INDEX
#define INDEX 5
#endif
#if INDEX < 1
int main(){return(0);}
#else
#define NEXT (INDEX-1)
#define SULLY int main(){do{char file[15];sprintf(file, "Sully_%d.c", NEXT);FILE *f=fopen(file, "w");f ? : exit(1); STR; PRINT; COMPILE;}while(0);}
#define PRINT do{fprintf(f, str, 10, 10, 10, 47, 10, 10, 47, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 34, 34, 10, 10, 34, str, 34, 10, 34, 34, 10, 10, 10);fclose(f);}while(0)
#define STR char str[]="#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%c%c*%clol%c*%c%c#ifndef INDEX%c#define INDEX 5%c#endif%c#if INDEX < 1%cint main(){return(0);}%c#else%c#define NEXT (INDEX-1)%c#define SULLY int main(){do{char file[15];sprintf(file, %cSully_%%d.c%c, NEXT);FILE *f=fopen(file, %cw%c);f ? : exit(1); STR; PRINT; COMPILE;}while(0);}%c#define PRINT do{fprintf(f, str, 10, 10, 10, 47, 10, 10, 47, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 34, 34, 10, 10, 34, str, 34, 10, 34, 34, 10, 10, 10);fclose(f);}while(0)%c#define STR char str[]=%c%s%c%c#define COMPILE do{char buf[47];sprintf(buf, %ccc -D INDEX=%%d Sully_%%d.c -o Sully_%%d&&./Sully_%%d%c, NEXT, NEXT, NEXT, NEXT);system(buf);}while(0)%cSULLY%c#endif%c"
#define COMPILE do{char buf[47];sprintf(buf, "cc -D INDEX=%d Sully_%d.c -o Sully_%d&&./Sully_%d", NEXT, NEXT, NEXT, NEXT);system(buf);}while(0)
SULLY
#endif
