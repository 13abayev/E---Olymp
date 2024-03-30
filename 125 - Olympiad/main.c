#include<stdio.h>

int main() {
   int h1,h2,m1,m2,s1,s2;
   scanf("%d %d %d\n%d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
   int start = h1*3600 + m1 * 60 + s1;
   int end = h2*3600 + m2 * 60 + s2;
   int duration = end - start;
   int hour = duration / 3600;
   duration -= 3600 * hour;
   int minute = duration / 60;
   duration -= 60 * minute;
   int second = duration;
   printf("%d %d %d",hour, minute, second);
}
