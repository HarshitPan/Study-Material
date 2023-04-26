#include<GL/glut.h>
int x,y;
int count=0;
void init()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255,255,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}
void draw(int xn,int yn)
{
    glBegin(GL_LINES);
    glVertex2f(x,y);
    glVertex2f(xn,yn);
    glEnd();
    x=xn;
    y=yn;

    glFlush();
}
void disp()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
void onClick(int button,int state,int x,int y)
{
    if(button == GLUT_LEFT_BUTTON)
    {
        if(count==0)
        {
            ::x=x;
            ::y=500-y;
            count++;
        }
        else
        {
            draw(x,500-y);
        }
    }
    else 
    {
        count=0;
    }
}
int main(int a,char** b)
{
    glutInit(&a,b);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize(500,500);
    glutCreateWindow("draw");
    glutDisplayFunc(disp);
    glutMouseFunc(onClick);
    init();
    glutMainLoop();
}