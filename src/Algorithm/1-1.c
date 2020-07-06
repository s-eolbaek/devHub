
/*
	변수를 활용한 성적처리 프로그램
*/

#include <stdio.h>
#include <string.h>

void main( )
{
	int s11, s12, s13;//첫번째 학생의 과목별 성적
	int s21, s22, s23;//두번째 학생의 과목별 성적
	int s31, s32, s33;//세번째 학생의 과목별 성적

	char g11[3], g12[3], g13[3];//첫번째 학생의 과목별 학점
	char g21[3], g22[3], g23[3];//두번째 학생의 과목별 학점
	char g31[3], g32[3], g33[3];//세번째 학생의 과목별 학점

	double u1=3.0, u2=2.0, u3=3.0;//과목별 이수 단위
	double d1=0.0, d2=0.0, d3=0.0;//학생별 평균 평점

	//키보드로부터 성적데이터 입력
	scanf("%d %d %d", &s11, &s12, &s13);
	scanf("%d %d %d", &s21, &s22, &s23);
	scanf("%d %d %d", &s31, &s32, &s33);

	//학생별, 과목별 학점 계산
	//첫번째 학생의 3과목에 대한 학점 계산
	if(s11>=95)			strcpy(g11, "A+");
	else if(s11>=90)	strcpy(g11, "A0");
	else if(s11>=85)	strcpy(g11, "B+");
	else if(s11>=80)	strcpy(g11, "B0");
	else if(s11>=75)	strcpy(g11, "C+");
	else if(s11>=70)	strcpy(g11, "C0");
	else if(s11>=65)	strcpy(g11, "D+");
	else if(s11>=60)	strcpy(g11, "D0");
	else				strcpy(g11, "F");

	if(s12>=95)			strcpy(g12, "A+");
	else if(s12>=90)	strcpy(g12, "A0");
	else if(s12>=85)	strcpy(g12, "B+");
	else if(s12>=80)	strcpy(g12, "B0");
	else if(s12>=75)	strcpy(g12, "C+");
	else if(s12>=70)	strcpy(g12, "C0");
	else if(s12>=65)	strcpy(g12, "D+");
	else if(s12>=60)	strcpy(g12, "D0");
	else				strcpy(g12, "F");

	if(s13>=95)			strcpy(g13, "A+");
	else if(s13>=90)	strcpy(g13, "A0");
	else if(s13>=85)	strcpy(g13, "B+");
	else if(s13>=80)	strcpy(g13, "B0");
	else if(s13>=75)	strcpy(g13, "C+");
	else if(s13>=70)	strcpy(g13, "C0");
	else if(s13>=65)	strcpy(g13, "D+");
	else if(s13>=60)	strcpy(g13, "D0");
	else				strcpy(g13, "F");

	//두번째 학생의 3과목에 대한 학점 계산
	if(s21>=95)			strcpy(g21, "A+");
	else if(s21>=90)	strcpy(g21, "A0");
	else if(s21>=85)	strcpy(g21, "B+");
	else if(s21>=80)	strcpy(g21, "B0");
	else if(s21>=75)	strcpy(g21, "C+");
	else if(s21>=70)	strcpy(g21, "C0");
	else if(s21>=65)	strcpy(g21, "D+");
	else if(s21>=60)	strcpy(g21, "D0");
	else				strcpy(g21, "F");

	if(s22>=95)			strcpy(g22, "A+");
	else if(s22>=90)	strcpy(g22, "A0");
	else if(s22>=85)	strcpy(g22, "B+");
	else if(s22>=80)	strcpy(g22, "B0");
	else if(s22>=75)	strcpy(g22, "C+");
	else if(s22>=70)	strcpy(g22, "C0");
	else if(s22>=65)	strcpy(g22, "D+");
	else if(s22>=60)	strcpy(g22, "D0");
	else				strcpy(g22, "F");

	if(s23>=95)			strcpy(g23, "A+");
	else if(s23>=90)	strcpy(g23, "A0");
	else if(s23>=85)	strcpy(g23, "B+");
	else if(s23>=80)	strcpy(g23, "B0");
	else if(s23>=75)	strcpy(g23, "C+");
	else if(s23>=70)	strcpy(g23, "C0");
	else if(s23>=65)	strcpy(g23, "D+");
	else if(s23>=60)	strcpy(g23, "D0");
	else				strcpy(g23, "F");

	//세번째 학생의 3과목에 대한 학점 계산
	if(s31>=95)			strcpy(g31, "A+");
	else if(s31>=90)	strcpy(g31, "A0");
	else if(s31>=85)	strcpy(g31, "B+");
	else if(s31>=80)	strcpy(g31, "B0");
	else if(s31>=75)	strcpy(g31, "C+");
	else if(s31>=70)	strcpy(g31, "C0");
	else if(s31>=65)	strcpy(g31, "D+");
	else if(s31>=60)	strcpy(g31, "D0");
	else				strcpy(g31, "F");

	if(s32>=95)			strcpy(g32, "A+");
	else if(s32>=90)	strcpy(g32, "A0");
	else if(s32>=85)	strcpy(g32, "B+");
	else if(s32>=80)	strcpy(g32, "B0");
	else if(s32>=75)	strcpy(g32, "C+");
	else if(s32>=70)	strcpy(g32, "C0");
	else if(s32>=65)	strcpy(g32, "D+");
	else if(s32>=60)	strcpy(g32, "D0");
	else				strcpy(g32, "F");

	if(s33>=95)			strcpy(g33, "A+");
	else if(s33>=90)	strcpy(g33, "A0");
	else if(s33>=85)	strcpy(g33, "B+");
	else if(s33>=80)	strcpy(g33, "B0");
	else if(s33>=75)	strcpy(g33, "C+");
	else if(s33>=70)	strcpy(g33, "C0");
	else if(s33>=65)	strcpy(g33, "D+");
	else if(s33>=60)	strcpy(g33, "D0");
	else				strcpy(g33, "F");

	//학생별, 과목별 평점 계산
	//첫번째 학생의 3과목에 대한 평점 계산
	if(strcmp(g11, "A+")==0)		d1 += 4.5*u1;
	else if(strcmp(g11, "A0")==0)	d1 += 4.0*u1;
	else if(strcmp(g11, "B+")==0)	d1 += 3.5*u1;
	else if(strcmp(g11, "B0")==0)	d1 += 3.0*u1;
	else if(strcmp(g11, "C+")==0)	d1 += 2.5*u1;
	else if(strcmp(g11, "C0")==0)	d1 += 2.0*u1;
	else if(strcmp(g11, "D+")==0)	d1 += 1.5*u1;
	else if(strcmp(g11, "D0")==0)	d1 += 1.0*u1;
	else							d1 += 0.0*u1;

	if(strcmp(g12, "A+")==0)		d1 += 4.5*u2;
	else if(strcmp(g12, "A0")==0)	d1 += 4.0*u2;
	else if(strcmp(g12, "B+")==0)	d1 += 3.5*u2;
	else if(strcmp(g12, "B0")==0)	d1 += 3.0*u2;
	else if(strcmp(g12, "C+")==0)	d1 += 2.5*u2;
	else if(strcmp(g12, "C0")==0)	d1 += 2.0*u2;
	else if(strcmp(g12, "D+")==0)	d1 += 1.5*u2;
	else if(strcmp(g12, "D0")==0)	d1 += 1.0*u2;
	else							d1 += 0.0*u2;

	if(strcmp(g13, "A+")==0)		d1 += 4.5*u3;
	else if(strcmp(g13, "A0")==0)	d1 += 4.0*u3;
	else if(strcmp(g13, "B+")==0)	d1 += 3.5*u3;
	else if(strcmp(g13, "B0")==0)	d1 += 3.0*u3;
	else if(strcmp(g13, "C+")==0)	d1 += 2.5*u3;
	else if(strcmp(g13, "C0")==0)	d1 += 2.0*u3;
	else if(strcmp(g13, "D+")==0)	d1 += 1.5*u3;
	else if(strcmp(g13, "D0")==0)	d1 += 1.0*u3;
	else							d1 += 0.0*u3;
	
	d1 /= 8.0;

	//두번째 학생의 3과목에 대한 평점 계산
	if(strcmp(g21, "A+")==0)		d2 += 4.5*u1;
	else if(strcmp(g21, "A0")==0)	d2 += 4.0*u1;
	else if(strcmp(g21, "B+")==0)	d2 += 3.5*u1;
	else if(strcmp(g21, "B0")==0)	d2 += 3.0*u1;
	else if(strcmp(g21, "C+")==0)	d2 += 2.5*u1;
	else if(strcmp(g21, "C0")==0)	d2 += 2.0*u1;
	else if(strcmp(g21, "D+")==0)	d2 += 1.5*u1;
	else if(strcmp(g21, "D0")==0)	d2 += 1.0*u1;
	else							d2 += 0.0*u1;

	if(strcmp(g22, "A+")==0)		d2 += 4.5*u2;
	else if(strcmp(g22, "A0")==0)	d2 += 4.0*u2;
	else if(strcmp(g22, "B+")==0)	d2 += 3.5*u2;
	else if(strcmp(g22, "B0")==0)	d2 += 3.0*u2;
	else if(strcmp(g22, "C+")==0)	d2 += 2.5*u2;
	else if(strcmp(g22, "C0")==0)	d2 += 2.0*u2;
	else if(strcmp(g22, "D+")==0)	d2 += 1.5*u2;
	else if(strcmp(g22, "D0")==0)	d2 += 1.0*u2;
	else							d2 += 0.0*u2;

	if(strcmp(g23, "A+")==0)		d2 += 4.5*u3;
	else if(strcmp(g23, "A0")==0)	d2 += 4.0*u3;
	else if(strcmp(g23, "B+")==0)	d2 += 3.5*u3;
	else if(strcmp(g23, "B0")==0)	d2 += 3.0*u3;
	else if(strcmp(g23, "C+")==0)	d2 += 2.5*u3;
	else if(strcmp(g23, "C0")==0)	d2 += 2.0*u3;
	else if(strcmp(g23, "D+")==0)	d2 += 1.5*u3;
	else if(strcmp(g23, "D0")==0)	d2 += 1.0*u3;
	else							d2 += 0.0*u3;
	
	d2 /= 8.0;

	//세번째 학생의 3과목에 대한 평점 계산
	if(strcmp(g31, "A+")==0)		d3 += 4.5*u1;
	else if(strcmp(g31, "A0")==0)	d3 += 4.0*u1;
	else if(strcmp(g31, "B+")==0)	d3 += 3.5*u1;
	else if(strcmp(g31, "B0")==0)	d3 += 3.0*u1;
	else if(strcmp(g31, "C+")==0)	d3 += 2.5*u1;
	else if(strcmp(g31, "C0")==0)	d3 += 2.0*u1;
	else if(strcmp(g31, "D+")==0)	d3 += 1.5*u1;
	else if(strcmp(g31, "D0")==0)	d3 += 1.0*u1;
	else							d3 += 0.0*u1;

	if(strcmp(g32, "A+")==0)		d3 += 4.5*u2;
	else if(strcmp(g32, "A0")==0)	d3 += 4.0*u2;
	else if(strcmp(g32, "B+")==0)	d3 += 3.5*u2;
	else if(strcmp(g32, "B0")==0)	d3 += 3.0*u2;
	else if(strcmp(g32, "C+")==0)	d3 += 2.5*u2;
	else if(strcmp(g32, "C0")==0)	d3 += 2.0*u2;
	else if(strcmp(g32, "D+")==0)	d3 += 1.5*u2;
	else if(strcmp(g32, "D0")==0)	d3 += 1.0*u2;
	else							d3 += 0.0*u2;

	if(strcmp(g33, "A+")==0)		d3 += 4.5*u3;
	else if(strcmp(g33, "A0")==0)	d3 += 4.0*u3;
	else if(strcmp(g33, "B+")==0)	d3 += 3.5*u3;
	else if(strcmp(g33, "B0")==0)	d3 += 3.0*u3;
	else if(strcmp(g33, "C+")==0)	d3 += 2.5*u3;
	else if(strcmp(g33, "C0")==0)	d3 += 2.0*u3;
	else if(strcmp(g33, "D+")==0)	d3 += 1.5*u3;
	else if(strcmp(g33, "D0")==0)	d3 += 1.0*u3;
	else							d3 += 0.0*u3;
	
	d3 /= 8.0;

	//성적표 출력
	printf("\n--------------------------------------\n");
	printf("%4d(%s) %4d(%s) %4d(%s) %5.2f\n", s11, g11, s12, g12, s13, g13, d1);
	printf("%4d(%s) %4d(%s) %4d(%s) %5.2f\n", s21, g21, s22, g22, s23, g23, d2);
	printf("%4d(%s) %4d(%s) %4d(%s) %5.2f\n", s31, g31, s32, g32, s33, g33, d3);
	printf("\n--------------------------------------\n");
}