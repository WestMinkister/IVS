#include <stdio.h>
// 비트연산자 : &(and), |(or), ^(XOR; 같으면0, 다르면1)
int main(){
    int n1 = 10; // 00...01010 (8+2)
    int n2 = 6; //  00...00110 (4+2)
    // n1 & n2 :    00...00010 (2)
    // n1 | n2 :    00...01110 (14)
    // n1 ^ n2 :    00...01100 (12)
    printf("n1 & n2 : %d\n", n1 & n2);
    printf("n1 | n2 : %d\n", n1 | n2);
    printf("n1 ^ n2 : %d\n", n1 ^ n2);
    printf("n2 << 1 : %d\n", n2 << 1); // 0...01100 (1 shift는 2배)
    printf("n2 >> 1 : %d\n", n2 >> 1); // 오른쪽 shift는 나누기2
}