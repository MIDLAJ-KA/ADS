 1 #include<stdio.h>
  2 void sum()
  3 {
  4     int n,sum=0,i;
  5     printf("ENTER ARRAY SIZE");
  6     scanf("%d",&n);
  7     int a[n];
  8     for(i=0;i<n;i++){
  9     printf("ENTER ARRAY ELEMENTS %d  ", i+1);
 10     scanf("%d",&a[i]);
 11     sum+=a[i];
 12     }
 13     printf("SUM= %d",sum);
 14 }
 15 void  main()
 16 {
 17     sum();
 18 }

