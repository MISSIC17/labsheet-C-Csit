/*60. Write a C program that displays text using the outtext() function. Experiment with different
fonts, sizes, and colors of the text*/
#include <stdio.h>
#include <graphics.h>

int main() {
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\tc\\bgi");
	
	outtextxy(10,10, "Normal");
	
	settextstyle(5, HORIZ_DIR, 6);
	outtextxy(100, 20, "Script Font");
	
	settextstyle(6, VERT_DIR, 5);
	outtextxy(50, 300, "Vertical");
	
	settextstyle(8, HORIZ_DIR, 5);
	outtextxy(220, 130, "Prajjwal");
	outtextxy(220, 180, "Thapaliya");
	outtextxy(220, 230, "54/079");
	
	settextstyle(7, HORIZ_DIR, 7);
	outtextxy(100, 350, "Thank You!");
	
	getch();
	closegraph();
	return 0;
}