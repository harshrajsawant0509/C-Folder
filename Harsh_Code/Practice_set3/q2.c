// total 40% and 33% in each

#include <stdio.h>

int main() {
    int p, c, m, avg, t;
    printf("---Enter marks to get ur result--\n");
    printf("Physic:");
    scanf("%d", &p);
    printf("Chemistry:");
    scanf("%d", &c);
    printf("Maths:");
    scanf("%d", &m);
    t = ((p + m + c)*100)/300;
    // avg = ;

    
    if(t>=40 && p>=33 && c>=33 && m>=33)
    {
        printf("PASSED!!!!");
    }
    else
    {
        printf("Fail!!!");
    }
    return 0;
}