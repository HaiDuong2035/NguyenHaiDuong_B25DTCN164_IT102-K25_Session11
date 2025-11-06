#include <stdio.h>
#include <math.h>
int main(){
	int arr[100], num, sum, average, temp, k, check_sort=0, c, check_input=0, choice, found, mid, pos_del, value_add, pos_add, value_del;
	while (choice!=9){
		printf("\nMENU CHUC NANG\n1.Nhap gia tri phan tu\n2.In gia tri phan tu cua mang\n3.Tinh va in tong, trung binh cong cac phan tu cua mang\n4.Sap xep mang\n5.Tim kiem phan tu\n6.Xoa phan tu\n7.Chen phan tu\n8.Xoa cac phan tu co gia tri nhat dinh\n9.Thoat\nNhap lua chon: ");
		scanf("%d",&choice);
		printf(" (yes=1 | no=0): ");
		scanf("%d",&yes_no);
		if ()
		switch (choice){
			case 1:
				printf("Nhap so phan tu cua mang tu 1 den 100: ");
				do{
					scanf("%d",&num);
					if (num<1 or num>100){
						printf("Nhap lai: ");
					} else {
						break;
					}
				} while(0<num or num<=100);
				printf("Nhap phan tu: ");
				for (int i=0; i<num; i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}
				check_input=1;
				break;
			case 2:
				if (check_input==0){
					printf("Nhap mang truoc");
					break;
				}
				printf("Mang da nhap la: ");
				for (int i=0; i<num; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 3:
				if (check_input==0){
					printf("Nhap mang truoc");
					break;
				}
				for (int i=0; i<num; i++){
					sum=arr[i]+sum;
				}
				average=sum/num;
				printf("Tong: %d\nTrung binh cong: %d",sum,average);
				break;
			case 4:
				if (check_input==0){
					printf("Nhap mang truoc");
					break;
				}
				for (int i=0; i<num; i++){
					for (int j=0; j<num-1-i; j++){
						if (arr[j]>arr[j+1]){
							temp=arr[j+1];
							arr[j+1]=arr[j];
							arr[j]=temp;
						}
					}
				}
				printf("Mang sau khi sap xep tang dan (bubble sort) la: ");
				for (int i=0; i<num; i++){
					printf("%d ",arr[i]);
				}
				for (int i=0; i<num; i++){
					k=i;
					for (int j=i+1; j<num; j++){
						if (arr[j]>arr[k]){
							k=j;
						}
					}
					if (k!=i){
						temp=arr[i];
						arr[i]=arr[k];
						arr[k]=temp;
					}
				}
				printf("\nMang sau khi sap xep giam dan (selection sort) la: ");
				for (int i=0; i<num; i++){
					printf("%d ",arr[i]);
				}
				for (int i=0; i<num; i++){
					k=0;
					while (k<i and arr[k]<arr[i]){
						k++;
					}
					temp=arr[i];
					for (int j=i; j>k; j--){
						arr[j]=arr[j-1];
					}
					arr[k]=temp;
				}
				printf("\nMang sau khi sap xep tang dan (insertion sort) la: ");
				for (int i=0; i<num; i++){
					printf("%d ",arr[i]);
				}
				check_sort=1;
				break;
			case 5:
				if (check_input==0){
					printf("Nhap mang truoc");
					break;
				}
				printf("Nhap gia tri can tim: ");
				scanf("%d",&found);
				if (check_sort==0){
					for (int i=0; i<num; i++){
						if (arr[i]==found){
							printf("arr[%d]=%d",i,arr[i]);
							break;
						}
					}
				} else {
					int left=0, right=num-1;
					while (left<right){
						mid=(left+right)/2;
						if (arr[mid]<found){
							left=mid+1;
						} else {
							right=mid;
						}
					}
					for (int i=0; i<num; i++){
						if (arr[i]==arr[left]){
							printf("arr[%d]=%d",i,arr[left]);
						}
					}
				}
				break;
			case 6:
				if (check_input==0){
					printf("Nhap mang truoc");
					break;
				}
				printf("\nNhap vi tri muon xoa: ");
				scanf("%d",&pos_del);
				for (int i=pos_del; i<num-1;i++){
					arr[i]=arr[i+1];
				}
				num--;
				printf("Mang sau khi xoa: ");
				for (int i=0; i<num; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 7:
				if (check_input==0){
					printf("Nhap mang truoc");
					break;
				}
				printf("Nhap gia tri chen: ");
				scanf("%d",&value_add);
				printf("Nhap vi tri chen: ");
				scanf("%d",&pos_add);
				for (int i=num-1; i>pos_add; i--){
					arr[i]=arr[i-1];
				}
				arr[pos_add]=value_add;
				num++;
				printf("Mang sau khi chen: ");
				for (int i=0; i<num; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 8:
				if (check_input==0){
					printf("Nhap mang truoc");
					break;
				}
				printf("Nhap gia tri muon xoa: ");
				scanf("%d",value_del);
				for (int i=0; i<num; i++){
					if (arr[i]=value_del){
						for (int j=i; j<num-1;j++){
							arr[j]=arr[j+1];
						}
						num--;
					}
				}
				printf("Mang sau khi xoa: ");
				for (int i=0; i<num; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 9:
				break;
		}
	}
    return 0;
}
