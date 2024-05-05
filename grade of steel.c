#include<stdio.h>
int main(){
 float h,ts;
 float cc;
 float grade;
 printf("enter the hardness of the steel & carbon contain & tensile strength:\n");
 scanf("%f%f%f",&h,&cc,&ts);
 int h_f=0,ts_f=0,cc_f=0;
 if(h>50)
 h_f=1;
 if(cc<0.7)
 cc_f=1;
 if(ts>5600)
 ts_f=1;
 //if all three condition are met then
 if(h_f==0 && cc_f==0 && ts_f==0)
        grade = 5;

    //2. if only one condition is met
    if(h_f==1 || cc_f==1 || ts_f==1)
        grade = 6;

    //3 if condition (i) and (iii) are met
    if(h_f==1 && cc_f==0 && ts_f==1)
        grade = 7;

    //4. if conditions (ii) and (iii) are met
    if(h_f==0 && cc_f==1 && ts_f==1)
        grade = 8;

    //5. if conditions (i) and (ii) are met
    if(h_f==1 && cc_f==1 && ts_f==0)
        grade = 9;

    //6. if all the three conditions are met
    if(h_f==1 && cc_f==1 && ts_f==1)
        grade = 10;

 printf("grade of the steel : %f",grade);
    return 0;
       }