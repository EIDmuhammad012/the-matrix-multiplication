#include<stdio.h>    
#include<stdlib.h>  
int main() 
{  
int r,c,a[10][10],b[10][10],pro[10][10],H,G,k;    
system("cls");  

printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(H=0;H<r;H++) {    
  for(G=0;G<c;G++) {    
  scanf("%d",&a[H][G]);    
  }    
}  

printf("enter the second matrix element=\n");    
for(H=0;H<r;H++) {    
  for(G=0;G<c;G++) {    
  scanf("%d",&b[H][G]);    
  }    
}    
    
printf("product of the matrix=\n");    
for(H=0;H<r;H++) {    
  for(G=0;G<c;G++) {    
  pro[H][G]=0;    
    for(k=0;k<c;k++) {    
    pro[H][G]+=a[H][k]*b[k][G];    
    }    
  }    
}    
for(H=0;H<r;H++) {    
  for(G=0;G<c;G++) {    
  printf("%d\t",pro[H][G]);    
  }    
  printf("\n");    
}    
return 0;
}


