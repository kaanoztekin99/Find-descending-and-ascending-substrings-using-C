#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(int argc, char *argv[]) {
	
	int arr[SIZE];
	int counter=0;
	int i=0;

		//ARRAY DOLDURMA
	for(i=0;i<=SIZE;i++){
		scanf("%d",&arr[i]);
		counter++;
		if(arr[i]==-1){
			break;
		}
	}
	counter--;
	
	for(i=0;i<counter;i++){
		
		if(arr[i]==-1){
				break;
		}
			
		if(arr[i]<arr[i+1]){
		
			while(arr[i]<arr[i+1]){
				printf("%d ",arr[i]);
				i++;
			}
			
			if(arr[i]==-1){
				break;
			}
			printf("%d ",arr[i]);
			printf("\n");
		}
		
		else if(arr[i]>arr[i+1]){
		
			while(arr[i]>arr[i+1]){
				printf("%d ",arr[i]);
				i++;
			}
			
			if(arr[i]==-1){
				break;
			}
			printf("%d ",arr[i]);
			printf("\n");
		}
		
		if(arr[i]==-1){
				break;
		}

	}
	return 0;
}
