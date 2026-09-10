 #include<stdio.h>
  2 void factorial(){
  3     int n,fact=1;
  4         printf("ENTER THE NUMBER=");
  5        scanf("%d",&n);
  6        for(int i=1;i<=n;i++){
  7
  8       fact=fact*i;
  9        }
 10       printf("FACTORIAL OF THE NUMBER =%d",fact);
 11 }
 12 void main(){
 13     factorial();
 14 }

