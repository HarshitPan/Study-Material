#include<GL/glut.h>

void boundary_fill(int,int);
int b_color[3]={0,255,0},f_color[]={255,0,0};

void init()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-500,500,-500,500);
}

void disp()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0,1,0);
    int r=300;
    int y1=r,x1=0;
    int p=1-r;
    glBegin(GL_POINTS);
    while(x1<y1)
    {
        glVertex2d(x1,y1);
        glVertex2d(y1,x1);
        glVertex2d(-x1,y1);
        glVertex2d(-y1,x1);
        glVertex2d(-x1,-y1);
        glVertex2d(-y1,-x1);
        glVertex2d(y1,-x1);
        glVertex2d(x1,-y1);
        x1++;
        if(p<0)
        {
            p=p+4*(x1)+6;
        }
        else 
        {
            y1=y1-1;
            p=p+4*x1-4*y1+10;
        }
    }
    glEnd();
    glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Bresanham Circle");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
    return 0;
}