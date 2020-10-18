/*
***********************************************************

Topic   : Program to demonstrate POINTERS in c.
Author  : Chpaone09®
Date    : Oct 18, 2020

************************************************************
*/

#include <stdio.h>
#include <conio.h>

void main(){
    int a = 25;
    int *p;
    p = &a;
    printf("\n\n\t Value of Variable a >> %d", a);
    printf("\n\n\t Value at address p is pinted to >> %d", *p);
    printf("\n\n\t address of variable pointed by p >> %d", p);
    printf("\n\n\t address of a >> %d", &a);
    
}
