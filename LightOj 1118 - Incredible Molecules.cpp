//
//  main.cpp
//  LightOj 1118 - Incredible Molecules
//
//  Created by S M HEMEL on 22/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
#define Pi acos(-1.0)
double test,r,r2,x,y,x2,y2;
double Deal ()
{
    double dis = sqrt(1.0*(x-x2)*(x-x2)+1.0*(y-y2)*(y-y2));
    if (dis<=fabs(r-r2))
        return Pi*min(r,r2)*min(r,r2);
    else if (dis>=r+r2)
        return 0;
    else
    {
        double temp = acos((r*r+r2*r2-dis*dis)/(2*r*r2));
        temp=r*r2*sin(temp);
        double temp1=acos((r*r+dis*dis-r2*r2)/(2*r*dis));
        temp1=temp1*r*r;
        double temp2=acos((r2*r2+dis*dis-r*r)/(2*r2*dis));
        temp2=temp2*r2*r2;
        return temp1+temp2-temp;
    }
}
int main()
{
    cin >> test;
    for(int t=1; t<=test; t++){
        cin >> x >> y >> r >> x2 >> y2 >> r2;
        printf("Case %d: %.10lf\n",t,Deal());
        
    }
    return 0;
}
