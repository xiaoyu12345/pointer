//
//  main.cpp
//  pointer
//
//  Created by 小鱼🐟 on 15/11/18.
//  Copyright (c) 2015年 小鱼🐟. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    //int a[4];
    int *p;
    /*a[0]=5;
     a[1]=10;
     a[2]=15;
     a[3]=20;*/
    p=(int *)malloc(4);
    if(p==0)
        exit(0);
    *p=100;
    printf("p=%d    *p=%x\n",p,*p);
    return 0;
}