#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(int argc, char *argv[]) {
	
	int kaanArray[SIZE];
	int counter=0;
	int i=0;

		//ARRAY DOLDURMA
	for(i=0;i<=SIZE;i++){
		scanf("%d",&kaanArray[i]);
		counter++;
		if(kaanArray[i]==-1){
			break;
		}
	}
	counter--;
	
	for(i=0;i<counter;i++){
		
		if(kaanArray[i]==-1){
				break;
		}
			
		if(kaanArray[i]<kaanArray[i+1]){
		
			while(kaanArray[i]<kaanArray[i+1]){
				printf("%d ",kaanArray[i]);
				i++;
			}
			
			if(kaanArray[i]==-1){
				break;
			}
			printf("%d ",kaanArray[i]);
			printf("\n");
		}
		
		else if(kaanArray[i]>kaanArray[i+1]){
		
			while(kaanArray[i]>kaanArray[i+1]){
				printf("%d ",kaanArray[i]);
				i++;
			}
			
			if(kaanArray[i]==-1){
				break;
			}
			printf("%d ",kaanArray[i]);
			printf("\n");
		}
		
		if(kaanArray[i]==-1){
				break;
		}

	}
	return 0;
}
