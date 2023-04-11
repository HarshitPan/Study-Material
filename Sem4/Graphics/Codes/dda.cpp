#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

// function to draw a circle using DDA algorithm
void drawCircle(int x0, int y0, int radius)
{
    float x, y, i;
    float angle = 0.0;

    glBegin(GL_POINTS);

    // calculate x and y coordinates for each point on the circle
    for (i = 0; i < 360; i += 1.0) {
        angle = i * 3.14159 / 180;
        x = x0 + radius * cos(angle);
        y = y0 + radius * sin(angle);

        glVertex2f(x, y);
    }

    glEnd();
}

// display function
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // set circle properties
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(2.0);

    // call drawCircle function to draw the circle
    drawCircle(200, 200, 100);

    glFlush();
}

// main function
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("DDA Algorithm Circle Drawing");
    glClearColor(1.0, 1.0, 1.0, 0.0);
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
