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
	printf("이름: %s\n", std1.name);       // 이름: 홍길동
    printf("학번: %d\n", std1.id);        // 나이: 30
    printf("학점: %.2f\n", std1.gpa);
	return 0;
}
