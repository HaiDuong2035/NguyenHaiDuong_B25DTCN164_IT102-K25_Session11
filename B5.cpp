#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    char arr[][50]={"Ha Noi", "Quang Ninh", "Hai Phong", "Sai Gon", "Lao Cai"};
    char search[50];
    int found=0;
    printf("Nhap chuoi can tim: ");
    scanf(" %s",&search);
	for (int i=0; i<5; i++) {
        if (strcmp(arr[i],search)==0) {
            printf("Tim thay '%s' tai vi tri %d", search, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay %s", search);
    }
    return 0;
}
