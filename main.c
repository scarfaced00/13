#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student
{
	int id;
	char name[20];
	float gpa;
	
};
int main(int argc, char *argv[]) {
	struct student std1={2011218, "Lee",4.5};
	printf("�̸�: %s\n", std1.name);       // �̸�: ȫ�浿
    printf("�й�: %d\n", std1.id);        // ����: 30
    printf("����: %.2f\n", std1.gpa);
	return 0;
}
