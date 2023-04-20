#include<GL/glut.h>
#include<stdio.h>

void myInit()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glClear( GL_COLOR_BUFFER_BIT );
    //glVertex2d(100,100);
    //glClear(); -> blank screen
    glColor3d(0,0,0);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}
void onClick(int button,int state,int x,int y)
{
    //glClear(GL_COLOR_BUFFER_BIT);
    if( button==GLUT_LEFT_BUTTON )
    {
        printf("%d and %d \n",x,y);
        glBegin(GL_LINES);
        //glColor3d(1.0,0.0,0.0);
        glVertex2d(x,500-y);
        glVertex2d(0,0);
        glEnd();
    }
    glutSwapBuffers();
}
void disp(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Mouse Click");
    glutDisplayFunc(disp);
    glutMouseFunc(onClick);
    myInit();
    glutMainLoop();
}