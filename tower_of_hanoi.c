#include <stdio.h>
//function declaration
void move(int n, char s, char a, char d);

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);
//calling function
    move(n, 'A', 'B', 'C');  

    return 0;
}
 //called function defination
void move(int n, char s, char a, char d)  
{
    //base case
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", s, d);
        return;
    }

    move(n - 1, s, d, a);
    printf("Move disk %d from %c to %c\n", n, s, d);
    move(n - 1, a, s, d);
}
