#include <stdio.h>
#include <math.h>
int main() {
    int n, min;
    printf("Nhap so thang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap gia co phieu theo tung thang:\n");
    for (int i = 0; i < n; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    min=arr[0];
    for (int i;  i<n; i++){
    	if (min>arr[i]){
    		min=arr[i];
		}
	}
	for (int i=0;  i<n; i++){
    	if (arr[i]==min){
    		printf("Thang %d ban se lo it nhat %d",i+1,arr[i]);
		}
	}
    return 0;
}

