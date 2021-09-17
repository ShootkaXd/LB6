// ������ ������
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ����� ������

// ����� ��������� struct Coord  ������� Point - ����� ��� ����

typedef struct Coord
//  ����� �� ���������
{
    short int x;   // ���������� ����� x
    short int y;   // ���������� ����� y
} Point;
// ������ ������ struct Coord a;
// ����� �������� ������ Point a;


typedef struct LineSegment
{
    // �������� ������ �������
    // Point - ��� ��������� struct Coord
    Point a;        // ������� a
    Point b;        // ������� b
    float distance; // ���������� ����� ��������� (����� �������)
} Line; // ����� ��� ���� Line


int main(){
    //��������� ���������� ���� Line
    Line lin;

    // �������� �������� ����������� ������ ������� lin
    lin.a.x = 0; // ������� a, ���������� x
    lin.a.y = 0; // ������� a, ���������� y
    lin.b.x = 3; // ������� b, ���������� x
    lin.b.y = 4; // ������� b, ���������� y

    // �������� ����� ������� lin � �������� ��� �������� �������� distance

    lin.distance = sqrtf((lin.a.x - lin.b.x) * (lin.a.x - lin.b.x) + (lin.a.y - lin.b.y) * (lin.a.y - lin.b.y));

    // ������
    printf("lin: a(%d, %d) b(%d, %d), %0.2f\n", lin.a.x, lin.a.y, lin.b.x, lin.b.y, lin.distance);
    return 0;
}
