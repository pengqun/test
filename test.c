#include <stdio.h>

enum Day {
    Monday = 2
//#define Monday Monday
};

struct P {
    int x;
    int y;
} point;

void B(int a) { printf("a");};
#define B(s) 

int main()
{
    int arr[3] = { 1 };
    //printf("%ld", sizeof (struct sockaddr_in));
    B(1);

    return 0;
}

