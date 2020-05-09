#include<stdio.h>
int main() {

int i,j,k,a1[5],a2[5];
for(i=1;i<=5;i++) {
scanf("%d",&a1[i]);
}

printf("\n\nThe elements you enterd are:\n");

for(i=1;i<=5;i++) {
printf(" %d",a1[i]);
}

printf("\n\nElements in reversed order:\n");

for(i=5,j=1;i>=1,j<=5;i--,j++) {

k=a1[i];
a2[j]=k;

printf(" %d",a2[j]);
}
}
