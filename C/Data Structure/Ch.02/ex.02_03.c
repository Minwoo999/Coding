/**********************
프로그램명 : 함수의 매개변수로서의 구조체
프로그램 내용 : 복소수 출력
실습일 : 2023.03.14
개발자 : 김민우 (201810198)
**********************/


//ex.02_03


#include <stdio.h>

typedef struct {
	double real; // 복소수의 실수부
	double imag; // 복소수의 허수부
} Complex;

void print_complex(Complex c) {
	printf("%4.1f + %4.1fi\n", c.real, c.imag);
}

void reset_complex(Complex c) {
	c.real = c.imag = 0.0;
}

void main() {
	Complex a = { 1.0, 2.0 };
	printf("초기화 이전: ");
	print_complex(a);  // 복소수 화면 출력
	reset_complex(a); //초기화가 되지 않음
	printf("초기화 이후: ");
	print_complex(a); // 복소수 화면 출력
}


