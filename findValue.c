#include<stdio.h>
void main(){
  int a[5];
  int i,value,index,found = 0;

  printf("Enter array Values:\n");
  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }

  printf("Enter a value to search:\n");
  scanf("%d",&value);

  for(i=0;i<5;i++){
    if(a[i] == value){
      index = i;
      found = 1;
    }
  }

  if(found == 1){
    printf("Value Found at index %d\n",index);
  }
  else{
    printf("Value Not Found\n");
  }
}
