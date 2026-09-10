 #include<stdio.h>
  2 void larg(){
  3     int largest,a[20],i,n;
  4     printf("ENTER THE ARRAY SIZE=");
  5     scanf("%d",&n);
  6     printf("ENTER THE ELEMENTS=");
  7     for(i=0;i<n;i++){
  8         scanf("%d",&a[i]);
  9             }
 10     largest=a[0];
 11     for(i=0;i<n;i++){
 12      if(a[i]>largest)
 13      {
 14       largest=a[i];
 15       }
 16       }
 17      printf("LARGEST =%d",largest);
 18       }
 19 void main(){
 20     larg();
 21 }
 22


