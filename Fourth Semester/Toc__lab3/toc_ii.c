#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
   int table[2][2] = {{1, -1}, {1, 0}};
   char input[100];

   printf("To implementing DFA of language (a+aa*b)*\n");
   printf("Enter Input String: ");

   scanf("%s", input);

   int l = strlen(input);
   int status = 0;
   int i;

   for(i = 0; i < l; i++) {
      if(input[i] != 'a' && input[i] != 'b') {
         printf("The entered value is wrong\n");
         getch();
         return 1;
      }

      if(input[i] == 'a')
         status = table[status][0];
      else
         status = table[status][1];

      if(status == -1) {
         printf("String not Accepted\n");
         break;
      }
   }

   if(i == l)
      printf("String Accepted\n");

   getch();
   return 0;
}

