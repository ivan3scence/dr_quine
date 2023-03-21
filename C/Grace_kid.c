#include <stdio.h>
/*
lol
*/
#define GRACE(file_name) int main(){do{FILE *f=fopen(#file_name, "w"); STR }while(0);}
#define PRINT do{fprintf(f, str, 10, 47, 10, 10, 47, 10, 34, 34, 10, 10, 34, str, 34, 10);fclose(f);}while(0);
#define STR char str[]="#include <stdio.h>%c%c*%clol%c*%c%c#define GRACE(file_name) int main(){do{FILE *f=fopen(#file_name, %cw%c); STR }while(0);}%c#define PRINT do{fprintf(f, str, 10, 47, 10, 10, 47, 10, 34, 34, 10, 10, 34, str, 34, 10);fclose(f);}while(0);%c#define STR char str[]=%c%s%c; PRINT%cGRACE(Grace_kid.c)"; PRINT
GRACE(Grace_kid.c)