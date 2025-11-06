#include <stdio.h>
#include <math.h>
int main(){
	int found, check=0, left=0, right=9, mid, arr[]={1,2,3,4,5,6,7,8,9,10};
	printf("Nhap gia tri can tim tu 1 den 10: ");
	scanf("%d",&found);
	while (left<right){
		mid=(left+right)/2;
		if (arr[mid]<found){
			left=mid+1;
		} else {
			right=mid;
		}
	}
	for (int i=0; i<10; i++){
		if (arr[i]==found){
			printf("arr[%d]=%d",i,arr[left]);
			check=1;
		}
	}
	if (check==0){
		printf("So khong co trong mang");
	}
    return 0;
}
