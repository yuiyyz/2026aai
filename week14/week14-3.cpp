//week14-3a.cpp SOIT106_ADVANCE_004
#include <stdio.h>
int main()
{
   char s[20];
   scanf("%s",s);
   for (int i=0;s[i]!=0 ; i++){
        if(s[i]>='A'&& s[i]<='Z')s[i] = s[i] - 'A' + 'a';
        else if(s[i]>='a' && s[i]<='z') s[i] = s[i] - 'a' + 'A';
   }
   printf("%s\n", s);
}
//week14-3b.cpp SOIT106_ADVANCE_004
#include <stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c)==1){
       if(c>='A' && c<='Z')c = c - 'A' + 'a';
       else if(c>='a'&&c<='z')c = c - 'a' + 'A';
       printf("%c" , c);
    }
}
