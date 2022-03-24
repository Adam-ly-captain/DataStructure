#include <stdio.h>
#include <math.h>

typedef struct{
	float realNum;
	float imaginaryNum;
}Complex;

void assign(Complex *A, float real, float imag);
void add(Complex *C, Complex A, Complex B);
void multiply(Complex *res, Complex A, Complex B);
void divide(Complex * res, Complex A, Complex B);

int main() 
{
	Complex complex, A, B;
//	A.imaginaryNum = 1;
//	A.realNum = 2;
//	B.imaginaryNum = -1;
//	B.realNum = -3;
	assign(&A, 2, 1);
	assign(&B, -3, -1);
//	add(&complex, A, B);
//	multiply(&complex, A, B);
	divide(&complex, A, B);
	printf("real = %f\nimag = %f", complex.realNum, complex.imaginaryNum);
}

void assign(Complex *A, float real, float imag)
{
	A->imaginaryNum = imag;
	A->realNum = real;
}

void add(Complex *C, Complex A, Complex B)
{
	C->imaginaryNum = A.imaginaryNum + B.imaginaryNum;
	C->realNum = A.realNum + B.realNum;
}

void multiply(Complex *res, Complex A, Complex B)
{
	res->realNum = A.realNum * B.realNum - A.imaginaryNum * B.realNum;
	res->imaginaryNum = A.realNum * B.imaginaryNum + A.imaginaryNum * B.realNum;
}

void divide(Complex *res, Complex A, Complex B)
{
	res->realNum = (A.realNum * B.realNum + A.imaginaryNum * B.imaginaryNum) / (pow(A.imaginaryNum, 2) + pow(B.imaginaryNum, 2));
	res->imaginaryNum = (A.imaginaryNum * B.realNum - A.realNum * B.imaginaryNum) / (pow(A.imaginaryNum, 2) + pow(B.imaginaryNum, 2));
}
