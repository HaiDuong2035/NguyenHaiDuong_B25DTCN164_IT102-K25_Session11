#include <stdio.h>
#include <math.h>
int main(){
	int num, temp;
	printf("Nhap so phan tu: ");
	scanf("%d",&num);
	int arr[num];
	for (int i=0; i<num; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for (int i=0; i<num; i++){
		for (int j=0; j<num-1-i; j++){
			if (arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep theo thu tu tang dan: ");
	for (int i=0; i<num; i++){
		printf("%d ",arr[i]);
	}
    return 0;
}

