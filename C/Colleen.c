#include <stdio.h>
/*
lol
*/
static char *mystr()
{
	return("#include <stdio.h>%c%c*%clol%c*%c%cstatic char *mystr()%c{%c%creturn(%c%s%c);%c}%cint main()%c{%c%cchar *str=mystr();%c%c*%clol%c*%c%c%cprintf(str, 10, 47, 10, 10, 47, 10, 10, 10, 9, 34, str, 34, 10, 10, 10, 10, 9, 10, 47, 10, 10, 47, 10, 9, 10, 10);%c}%c");
}
int main()
{
	char *str=mystr();
/*
lol
*/
	printf(str, 10, 47, 10, 10, 47, 10, 10, 10, 9, 34, str, 34, 10, 10, 10, 10, 9, 10, 47, 10, 10, 47, 10, 9, 10, 10);
}
