#include <stdio.h>
#include <string.h>
struct node
{
	int data;
	struct node *link;
};
typedef struct node ll;
int main () {
   FILE *fp;
 ll n2;

   fp = fopen("data", "rb");
fseek(fp,o,SEEK_SET);
   fread(&n2, sizeof(n2), 1, fp);
   printf("%d\n",n2.data);
   printf("%u\n",n2.link);
   fclose(fp);
   return(0);
}