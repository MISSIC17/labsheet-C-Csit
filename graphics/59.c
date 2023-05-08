/*59. Write a C program that draws basic shapes such as lines, circles, rectangles, and triangles
using the appropriate graphics functions. Experiment with the color and thickness of the
shapes.*/
#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    line(150, 40, 50, 240);
    circle(170, 350, 30);

    setlinestyle(DASHED_LINE, 0, 5);
    circle(150, 350, 60);

    setcolor(YELLOW);
    rectangle(250, 50, 350, 250);

    int points[] = {500, 200, 500, 400, 300, 400, 500, 200};
    drawpoly(4, points);

    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 2);
    outtextxy(430, 30, "Prajjwal Thapaliya");

    getch();
    closegraph();
    return 0;
}