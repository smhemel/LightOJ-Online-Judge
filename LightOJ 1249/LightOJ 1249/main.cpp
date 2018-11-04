//
//  main.cpp
//  LightOJ 1249
//
//  Created by S M HEMEL on 12/2/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int test,a,b,c;
    scanf("%d",&test);
    for (int j=1; j<=test; test++)
    {
        int m,max = 0,min = 900000000,lo1 = 0,lo2 = 0;
        cin >> m;
        char name[m][100];
        int cal[m];
        for (int i=0; i<m; i++)
        {
            scanf("%s",name[i]);
            scanf("%d%d%d", &a, &b, &c);
            cal[i] = a*b*c;
            if(cal[i]<min)
            {
                min = cal[i];
                lo1 = i;
            }
            if(cal[i]>max)
            {
                max = cal[i];
                lo2 = i;
            }
        }
        if(min == max)
            printf("Case %d: no thief\n",test);
        else
            printf("Case %d: %s took chocolate from %s\n",test,name[lo2], name[lo1]);
    }
    return 0;
}*/



#include <stdio.h>
#include <string.h>
int main ()
{
    int a, b, c, test, k, n, v, max, min, i;
    char str[21], s1[21],s2[21];
    scanf (" %d", &test);
    for (k = 1; k <= test; k++) {
        scanf("%d",&n);
        scanf ("%s%d%d%d",str,&a,&b,&c);
        max=min=a * b * c;
        strcpy (s1,str);
        strcpy (s2, str);
        for (i = 1; i < n; i++) {
            scanf ("%s%d%d%d",str,&a,&b,&c);
            v = a * b * c;
            if (v > max) {
                strcpy (s1 , str);
                max = v;
            }
            else if (v < min) {
                strcpy (s2 , str);
                min = v;
            }
        }
        if (max == min) printf ("Case %d: no thief\n", k);
        else printf ("Case %d: %s took chocolate from %s\n", k, s1, s2);
    }
    return 0;
}
