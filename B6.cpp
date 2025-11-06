#include <stdio.h>
#include <math.h>
int main(){
	int num;
	printf("Nhap so phan tu: ");
	scanf("%d",&num);
	if (num<2){
		printf("Loi");
		return 0;
	} 
	int arr[num];
	for (int i; i<num; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int max1=arr[0], max2=arr[0];
	for (int i=0; i<num; i++){
		if (arr[i]>max1){
			max1=arr[i];
		}
	}
	for (int i=0;i<num; i++){
		if (arr[i]>max2 and arr[i]<max1){
			max2=arr[i];
		}
	}
	if (max1==max2){
		printf("Loi");
	} else {
		printf("\nGia tri lon thu nhat va thu hai la: %d va %d\n",max1,max2);
	}
    return 0;
}

