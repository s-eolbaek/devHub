
/*
	1���� �迭�� Ȱ���� ����ó�� ���α׷�
*/

#include <stdio.h>
#include <string.h>

void main( )
{
	int i;
	int s1[3];//ù��° �л��� ���� ����
	int s2[3];//�ι�° �л��� ���� ����
	int s3[3];//����° �л��� ���� ����

	char g1[3][3];//ù��° �л��� ���� ����
	char g2[3][3];//�ι�° �л��� ���� ����
	char g3[3][3];//����° �л��� ���� ����

	double u[3]={3.0, 2.0, 3.0};//���� �̼� ����
	double d[3]={0.0};			//�л��� ��� ����

	//Ű����κ��� ���������� �Է�
	for(i=0; i<3; i++){
		scanf("%d", &s1[i]);
		scanf("%d", &s2[i]);
		scanf("%d", &s3[i]);
	}

	//�л���, ���� ���� ���
	//ù��° �л��� 3���� ���� ���� ���
	for(i=0; i<3; i++){
		if(s1[i]>=95)		strcpy(g1[i], "A+");
		else if(s1[i]>=90)	strcpy(g1[i], "A0");
		else if(s1[i]>=85)	strcpy(g1[i], "B+");
		else if(s1[i]>=80)	strcpy(g1[i], "B0");
		else if(s1[i]>=75)	strcpy(g1[i], "C+");
		else if(s1[i]>=70)	strcpy(g1[i], "C0");
		else if(s1[i]>=65)	strcpy(g1[i], "D+");
		else if(s1[i]>=60)	strcpy(g1[i], "D0");
		else				strcpy(g1[i], "F");
	}

	//�ι�° �л��� 3���� ���� ���� ���
	for(i=0; i<3; i++){
		if(s2[i]>=95)		strcpy(g2[i], "A+");
		else if(s2[i]>=90)	strcpy(g2[i], "A0");
		else if(s2[i]>=85)	strcpy(g2[i], "B+");
		else if(s2[i]>=80)	strcpy(g2[i], "B0");
		else if(s2[i]>=75)	strcpy(g2[i], "C+");
		else if(s2[i]>=70)	strcpy(g2[i], "C0");
		else if(s2[i]>=65)	strcpy(g2[i], "D+");
		else if(s2[i]>=60)	strcpy(g2[i], "D0");
		else				strcpy(g2[i], "F");
	}

	//����° �л��� 3���� ���� ���� ���
	for(i=0; i<3; i++){
		if(s3[i]>=95)		strcpy(g3[i], "A+");
		else if(s3[i]>=90)	strcpy(g3[i], "A0");
		else if(s3[i]>=85)	strcpy(g3[i], "B+");
		else if(s3[i]>=80)	strcpy(g3[i], "B0");
		else if(s3[i]>=75)	strcpy(g3[i], "C+");
		else if(s3[i]>=70)	strcpy(g3[i], "C0");
		else if(s3[i]>=65)	strcpy(g3[i], "D+");
		else if(s3[i]>=60)	strcpy(g3[i], "D0");
		else				strcpy(g3[i], "F");
	}

	//�л���, ���� ���� ���
	//ù��° �л��� 3���� ���� ���� ���
	for(i=0; i<3; i++){
		if(strcmp(g1[i], "A+")==0)		d[0] += 4.5*u[i];
		else if(strcmp(g1[i], "A0")==0)	d[0] += 4.0*u[i];
		else if(strcmp(g1[i], "B+")==0)	d[0] += 3.5*u[i];
		else if(strcmp(g1[i], "B0")==0)	d[0] += 3.0*u[i];
		else if(strcmp(g1[i], "C+")==0)	d[0] += 2.5*u[i];
		else if(strcmp(g1[i], "C0")==0)	d[0] += 2.0*u[i];
		else if(strcmp(g1[i], "D+")==0)	d[0] += 1.5*u[i];
		else if(strcmp(g1[i], "D0")==0)	d[0] += 1.0*u[i];
		else							d[0] += 0.0*u[i];
	}
	d[0] /= 8.0;

	//�ι�° �л��� 3���� ���� ���� ���
	for(i=0; i<3; i++){
		if(strcmp(g2[i], "A+")==0)		d[1] += 4.5*u[i];
		else if(strcmp(g2[i], "A0")==0)	d[1] += 4.0*u[i];
		else if(strcmp(g2[i], "B+")==0)	d[1] += 3.5*u[i];
		else if(strcmp(g2[i], "B0")==0)	d[1] += 3.0*u[i];
		else if(strcmp(g2[i], "C+")==0)	d[1] += 2.5*u[i];
		else if(strcmp(g2[i], "C0")==0)	d[1] += 2.0*u[i];
		else if(strcmp(g2[i], "D+")==0)	d[1] += 1.5*u[i];
		else if(strcmp(g2[i], "D0")==0)	d[1] += 1.0*u[i];
		else							d[1] += 0.0*u[i];
	}
	d[1] /= 8.0;

	//����° �л��� 3���� ���� ���� ���
	for(i=0; i<3; i++){
		if(strcmp(g3[i], "A+")==0)		d[2] += 4.5*u[i];
		else if(strcmp(g3[i], "A0")==0)	d[2] += 4.0*u[i];
		else if(strcmp(g3[i], "B+")==0)	d[2] += 3.5*u[i];
		else if(strcmp(g3[i], "B0")==0)	d[2] += 3.0*u[i];
		else if(strcmp(g3[i], "C+")==0)	d[2] += 2.5*u[i];
		else if(strcmp(g3[i], "C0")==0)	d[2] += 2.0*u[i];
		else if(strcmp(g3[i], "D+")==0)	d[2] += 1.5*u[i];
		else if(strcmp(g3[i], "D0")==0)	d[2] += 1.0*u[i];
		else							d[2] += 0.0*u[i];
	}
	d[2] /= 8.0;

	//����ǥ ���
	printf("\n--------------------------------------\n");
	for(i=0; i<3; i++){
		printf("%4d(%s)", s1[i], g1[i]);
	}
	printf("%5.2f\n", d[0]);

	for(i=0; i<3; i++){
		printf("%4d(%s)", s2[i], g2[i]);
	}
	printf("%5.2f\n", d[1]);

	for(i=0; i<3; i++){
		printf("%4d(%s)", s3[i], g3[i]);
	}
	printf("%5.2f\n", d[2]);
	printf("\n--------------------------------------\n");
}