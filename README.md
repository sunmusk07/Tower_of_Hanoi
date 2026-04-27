# Tower of Hanoi in C

This project is a simple implementation of the Tower of Hanoi problem using recursion in C.

## Description
The Tower of Hanoi is a mathematical puzzle where we have three rods and a number of disks. The goal is to move all disks from the source rod to the destination rod using an auxiliary rod, following these rules:
- Only one disk can be moved at a time
- A larger disk cannot be placed on a smaller disk
- Only the top disk of a rod can be moved

## How it works
The program uses a recursive function to:
1. Move n-1 disks to the auxiliary rod
2. Move the largest disk to the destination rod
3. Move n-1 disks from auxiliary to destination

## How to run

Compile the program:
```bash
gcc tower_of_hanoi.c -o hanoi
