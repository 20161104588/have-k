//
//  main.c
//  have k
//
//  Created by 20161104588 on 17/6/19.
//  Copyright © 2017年 20161104588. All rights reserved.
//
#include<stdio.h>
int main()
{
    char st[20],*ps;
    int i;
    printf("input a string:\n");
    ps=st;
    scanf("%s",ps);
    for(i=0;ps[i]!='\0';i++)
    if(ps[i]=='k')
    {
        printf("Y\n");
        break;
    }
    if(ps[i]=='0')
        printf("N\n");
    return 0;
}
