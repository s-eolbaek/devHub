
/*
	2���� �迭�� Ȱ���� ����ó�� ���α׷�
*/

#include <stdio.h>
#include <string.h>

void main( )
{
	int i, j;
	int s[3][3];				//�л� 3���� ���� ����
	char g[3][3][3];			//�л� 3���� ���� ����
	double u[3]={3.0, 2.0, 3.0};//���� �̼� ����
	double d[3]={0.0};			//�л��� ��� ����

	//Ű����κ��� ���������� �Է�
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			//scanf("%d", &s[i][j]);
			scanf_s("%d", &s[i][j]);
		}
	}

	//�л���, ���� ���� ���
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(s[i][j]>=95)			strcpy(g[i][j], "A+");
			else if(s[i][j]>=90)	strcpy(g[i][j], "A0");
			else if(s[i][j]>=85)	strcpy(g[i][j], "B+");
			else if(s[i][j]>=80)	strcpy(g[i][j], "B0");
			else if(s[i][j]>=75)	strcpy(g[i][j], "C+");
			else if(s[i][j]>=70)	strcpy(g[i][j], "C0");
			else if(s[i][j]>=65)	strcpy(g[i][j], "D+");
			else if(s[i][j]>=60)	strcpy(g[i][j], "D0");
			else					strcpy(g[i][j], "F");
		}
	}

	//�л���, ���� ���� ���
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(strcmp(g[i][j], "A+")==0)		d[i] += 4.5*u[j];
			else if(strcmp(g[i][j], "A0")==0)	d[i] += 4.0*u[j];
			else if(strcmp(g[i][j], "B+")==0)	d[i] += 3.5*u[j];
			else if(strcmp(g[i][j], "B0")==0)	d[i] += 3.0*u[j];
			else if(strcmp(g[i][j], "C+")==0)	d[i] += 2.5*u[j];
			else if(strcmp(g[i][j], "C0")==0)	d[i] += 2.0*u[j];
			else if(strcmp(g[i][j], "D+")==0)	d[i] += 1.5*u[j];
			else if(strcmp(g[i][j], "D0")==0)	d[i] += 1.0*u[j];
			else								d[i] += 0.0*u[j];
		}
		d[i] /= 8.0;
	}

	//����ǥ ���
	printf("\n--------------------------------------\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%4d(%s)", s[i][j], g[i][j]);
		}
		printf("%5.2f\n", d[i]);
	}
	printf("\n--------------------------------------\n");
}