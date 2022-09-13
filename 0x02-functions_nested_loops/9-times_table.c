#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

n=int(input('Please enter a positive integer between 1 and 15: '))
for row in range(1,n+1):
    for col in range(1,n+1):
        print(row*col, end="\t")
    print()


n=int(input('Please enter a positive integer between 1 and 15: '))
for row in range(1,n+1):
    print(*("{:3}".format(row*col) for col in range(1, n+1)))


for row in range(1, n + 1):
    print(*(f"{row*col:3}" for col in range(1, n + 1)))

  }
