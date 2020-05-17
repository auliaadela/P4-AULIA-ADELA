#include <stdio.h> int main()
{
int i;
char nama[6]={'a','d','e','l'}; char nama2[6]="adel"; printf("Nama per karakter = "); for(i=0;i<=5;i++)
{
printf("%c",nama[i]);

}
printf("\n");
printf("Nama = %s\n\n",nama2);
return 0;
}
