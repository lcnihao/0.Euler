/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月26日 星期二 17时25分57秒
 ************************************************************************/

#include<stdio.h>
#define MAX_M 4000000

int main() {
    long sum = 0, cnt = 0, ret = 1;
    while(ret < MAX_M) {
        if(!(ret & 1)) sum += ret;
        ret = ret + cnt;
        cnt = ret - cnt;
    }
    printf("%ld\n", sum);
    return 0;
}
