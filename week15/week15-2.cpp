//week15-2a.cpp SOIT106_ADVANCE_010
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a;
    for(int i=0; i<N; i++){
    scanf("%d",&a);
    printf("%d,", a*a);
    }
    printf("\n");
}

//week15-2b.cpp SOIT106_ADVANCE_011
#include <stdio.h>
int main()
{
    char a,b,c,d;
    scanf("%c%c%c%c",&a,&b,&c,&d);
    int ans = 0;
    if(a=='1')ans += 8;
    if(b=='1')ans += 4;
    if(c=='1')ans += 2;
    if(d=='1')ans += 1;
    printf("%d\n",ans);
}
