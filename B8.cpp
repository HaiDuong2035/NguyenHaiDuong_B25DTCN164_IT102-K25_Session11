#include <stdio.h>
#include <math.h>
int main(){
	int arr[]={1,1,1,2,2,2,3,3}, n=8, max_count, max_num;
	for (int i=0; i<n; i++){
		int count=0;
		for (int j=0; j<n; j++){
			if (arr[i]==arr[j]){
				count++;
			}
		}
		if (count>max_count){
			max_count=count;
			max_num=arr[i];
		}
	}
	printf("Phan tu xuat hien nhieu nhat la: %d",max_num);
    return 0;
}

