  1 #include<stdio.h>
  2 struct stddet{
  3     int rno;
  4     char sname[50];
  5     int sub1m;
  6     int sub2m;
  7     int sub3m;
  8     int total;
  9     float avg;
 10 };
 11 int main(){
 12     struct stddet b;
 13     printf("ENTER STUDENT ROLL NO = ");
 14     scanf("%d",&b.rno);
 15     printf("ENTER STUDENT NAME = ");
 16     scanf("%s", b.sname);
 17     printf("ENTER THE MARK OF SUBJECT ONE = ");
 18     scanf("%d",&b.sub1m);
 19     printf("ENTER THE MARK OF SUBJECT TWO = ");
 20     scanf("%d",&b.sub2m);
 21     printf("ENTER THE MARK OF SUBJECT THREE = ");
 22     scanf("%d",&b.sub3m);
 23
 24     b.total=b.sub1m+b.sub2m+b.sub3m;
 25     printf("SUBJECT TOTAL= %d ",b.total);
 26     printf("\n");
 27     b.avg=b.total/3;
 28     printf("AVERAGE OF 3 SUBJECT= %.2f ",b.avg);
 29 }
