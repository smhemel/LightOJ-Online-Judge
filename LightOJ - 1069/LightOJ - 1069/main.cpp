//
//  main.cpp
//  LightOJ - 1069
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int test,t=0;
    cin >> test;
    while (test--)
    {
        t++;
        int a,b;
        cin >> a >> b;
        if(a<=b)
        {
            int total = (3*3) + (5*2) + (4*b);
            cout << "Case " << t << ": " << total << endl;
        }
        else
        {
            int total = ((a-b)*4) + (3*3) + (5*2) + (a*4);
            cout << "Case " << t << ": " << total << endl;
        }
    }
    return 0;
}
