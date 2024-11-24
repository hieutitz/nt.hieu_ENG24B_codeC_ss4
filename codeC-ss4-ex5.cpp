#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &s1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &s2);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &s3);
    if ((s3 > s1 && s3 < s2) || (s3 > s2 && s3 < s1)) {
        printf("So thu 3 nam trong khoang giua so thu 1 va so thu 2\n");
    } else {
        printf("So thu 3 khong nam trong khoang giua so thu 1 va so thu 2\n");
    }

    return 0;
}

