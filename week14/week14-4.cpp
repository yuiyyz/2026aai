//week14-4a.cpp SOIT107_ADVANCE_007
# include <stdio.h>
int main()
{
    char s[10];
    scanf("%s", s);
    if(s[0]==s[3] && s[1]==s[2])printf("YES\n");
    else printf("NO\n");
}

//week14-4b.cpp SOIT107_ADVANCE_007
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a = N/1000;
    int b = N/100 %10;
    int c = N/10 %10;
    int d = N%10;
    if (a==d && b==c)printf("YES\n");
    else printf("NO\n");
}

//week14-4c.cpp SOIT107_ADVANCE_007
# include <stdio.h>
int main()
{
    char a, b, c, d;
    scanf("%c%c%c%c", &a, &b, &c, &d);
    if(a==d && b==c)printf("YES\n");
    else printf("NO\n");
}
