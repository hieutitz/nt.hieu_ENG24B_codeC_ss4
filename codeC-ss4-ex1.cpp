#include <stdio.h>

int main() {
    int so_nguyen;
    printf("Nhap so nguyen: ");
    scanf("%d", &so_nguyen);
    if (so_nguyen > 0) {
        printf("So nay la so duong.\n");
    } else if (so_nguyen < 0) {
        printf("So nay la so âm.\n");
    } else {
        printf("So nay la so 0.\n");
    }
    return 0;
}

