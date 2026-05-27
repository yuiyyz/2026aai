//week14-5a.cpp SOIT108_ADVANCE_009B
# include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N<0)N = -N;
    int ans = 0;
    while (N>0){
       ans = N%10;
       N = N / 10;
    }

    printf("%d\n", ans);
}
//week14-5b.cpp SOIT108_ADVANCE_009B
#include <stdio.h>
int main()
{
    char s[20];
    scanf("%s", s);

    if(s[0]=='-')printf("%c\n", s[1]);
    else printf("%c\n", s[0]);

}
