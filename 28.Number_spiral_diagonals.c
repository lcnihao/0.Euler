/*************************************************************************
	> File Name: 28.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月30日 星期六 17时14分25秒
 ************************************************************************/

#include<stdio.h>
#define num 1001

int main() {
    int sum = 1;
    for(int i = 3; i <= num; i += 2) {
        sum += 4 * i * i - 6 * i + 6;
    }
    printf("%d", sum);
    return 0;
}
