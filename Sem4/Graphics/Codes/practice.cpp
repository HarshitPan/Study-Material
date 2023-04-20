#include<GL/glut.h>
void init()
{
    glClearColor(0,0,0,1);
    glColor3ub(0,255,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500,500,-500,500);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(50,50);
    glVertex2f(-50,50);
    glVertex2f(-50,-50);
    glVertex2f(50,-50);
    
    glEnd();
    glFlush();
}
int main(int a,char** b)
{
    glutInit(&a,b);
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("hell0...");
    glutDisplayFunc(display);
    
    init();
    glutMainLoop();

    return 0;
}