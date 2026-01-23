#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int stu_num;
    int age;
    char name[20];  // 동적할당하기 귀찮아서 이런거 아님
    bool gender;    // 남 0 여 1
    int major;
    int year;
    int grade;
} stu_inf;

typedef struct {
    node* left;
    node* right;
    stu_inf data;
} node;

int main() 
{

}