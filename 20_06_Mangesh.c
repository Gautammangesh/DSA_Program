#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[100], ch, n, m, pos;
 
 do{
     system("cls");
  printf("\n----------------------\n");
  printf("\n1.CREATE DATA");
  printf("\n2.DISPLAY DATA");
  printf("\n3.INSERT DATA");
  printf("\n4.DELETE BY POSITION");
  printf("\n5.SEARCH BY POSITION");
  printf("\n0.EXIT");
  printf("\n----------------------\n");
  
  printf("Enter Your Choice : ");
  scanf("%d", &ch);
  
  switch(ch){
   case 1: 
        printf("Enter how many nos you want : ");
        scanf("%d",&n);
        for(int i = 0; i < n; i++) {
            printf("Enter No : ");
            scanf("%d",&arr[i]);
        }
     break;
   case 2: 
        printf("Your Data \n");
        for(int i = 0; i < n; i++) {
            printf("%d",arr[i]);
        }
     break;
   case 3: 
        printf("Enter how many nos you want to insert : ");
        scanf("%d",&m);
        for(int i = n; i < n+m; i++) {
            printf("Enter No :");
            scanf("%d", &arr[i]);
        }
        n = n + m;
     break;
   case 4:
        printf("Enter position to Delete : ");
        scanf("%d",&pos);
        
        if(pos > n) {
            printf("Position must be less than or equal %d",n);
        } else {
            printf("%d is Deleted Successfully .....!",arr[pos-1]);
            for(int i = pos-1; i < n-1; i++) {
                arr[i] = arr[i+1];
            }
            n--;
        }
     break;
   case 5: 
        printf("Enter position to search :");
        scanf("%d",&pos);
        
        if(pos > n) {
            printf("Position must be less than or equal %d",n);
        } else {
            printf("Element at %d Position = %d",pos,arr[pos-1]);
        }
     break;
  
 }
 printf("\n\n");
 
 
system("pause"); 
} while (ch != 0);
} 
