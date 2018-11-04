//
//  main.cpp
//  LightOJ - 1214 - Large Division
//
//  Created by S M HEMEL on 5/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <stdio.h>
#include <cstring>
int main()
{
    long long int test,b, n;
    char a[1000];
    scanf("%lld", &test);
    for(int i=1; i<=test; i++)
    {
        long long int mod=0, num=0;
        scanf("%s", a);
        scanf("%lld", &b);
        int l=0;
        if(a[0]=='-') l=1;
        while(a[l])
        {
            n = a[l]-48;
            num += n;
            mod = num%b;
            num = mod*10;
            l++;
        }
        if(mod==0)
            printf("Case %d: divisible\n", i);
        else
            printf("Case %d: not divisible\n", i);
    }
    return 0;
}
