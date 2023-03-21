#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/*
lol
*/
#ifndef INDEX
#define INDEX 5
#endif
#if INDEX > 0
int main(){return(0);}
#endif
#define NEXT (INDEX-1)
#define SULLY int main(){do{char file[15];sprintf(file, "Sully_%d.c", NEXT);FILE *f=fopen(file, "w"); STR; PRINT; COMPILE; EXE;}while(0);}
#define PRINT do{fprintf(f, str, 10, 10, 10, 10, 47, 10, 10, 47, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 34, 34, 10, 10, 34, str, 34, 10, 34, 34, 10, 34, 34, 10, 10);fclose(f);}while(0)
#define STR char str[]="#include <stdio.h>%c#include <string.h>%c#include <unistd.h>%c#include <stdlib.h>%c%c*%clol%c*%c%c#ifndef INDEX%c#define INDEX 5%c#endif%c#if INDEX > 0%cint main(return(0);){}%c#endif%c#define NEXT (INDEX-1)%c#define SULLY int main(){do{char file[15];sprintf(file, %cSully_%%d.c%c, NEXT);FILE *f=fopen(file, %cw%c); STR; PRINT; COMPILE; EXE;}while(0);}%c#define PRINT do{fprintf(f, str, 10, 10, 10, 10, 47, 10, 10, 47, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 34, 34, 10, 10, 34, str, 34, 10, 34, 34, 10, 34, 34, 10, 10);fclose(f);}while(0)%c#define STR char str[]=%c%s%c%c#define COMPILE do{char buf[47];sprintf(buf, %ccc -D INDEX=%%d Sully_%%d.c -o Sully_%%d%c, NEXT, NEXT, NEXT);system(buf);}while(0)%c#define EXE do{char buf[27];sprintf(buf, %c./Sully_%%d%c, NEXT);system(buf);}while(0)%cSULLY%c"
#define COMPILE do{char buf[47];sprintf(buf, "cc -D INDEX=%d Sully_%d.c -o Sully_%d", NEXT, NEXT, NEXT);system(buf);}while(0)
#define EXE do{char buf[27];sprintf(buf, "./Sully_%d", NEXT);system(buf);}while(0)
SULLY
