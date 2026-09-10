 1 #include<stdio.h>
  2 struct book{
  3     int id;
  4     char bname[50];
  5     char auth[50];
  6     int price;
  7 };
  8 int main(){
  9     struct book b;
 10     printf("ENTER THE ID= ");
 11     scanf("%d",&b.id);
 12     printf("ENTER THE BOOK NAME= ");
 13     scanf("%s",b.bname);
 14     printf("ENTER AUTHOR= ");
 15     scanf("%s",b.auth);
 16     printf("ENTER THE PRICE= ");
 17     scanf("%d",&b.price);
 18     printf("\n");
 19
 20
 21     printf("\n ------BOOK DETAILS-------\n");
 22     printf("\n BOOK ID= %d", b.id);
 23     printf("\n BOOK NAME= %s", b.bname);
 24     printf("\n AUTHOR NAME= %s", b.auth);
 25     printf("\n PRICE= %d", b.price);
 26 }



