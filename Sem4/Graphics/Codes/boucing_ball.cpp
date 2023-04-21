#include<GL/glut.h>
void init()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-500,500,-500,500);
}
void draw_circle(int xc,int yc,int r)
{
    int x=0,y=r;
    int p=1-r;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255,255,0);
    glBegin(GL_POINTS);
    while(x<y)
    {
        glVertex2f(x+xc,y+yc);
        glVertex2f(y+xc,x+yc);

        glVertex2f((-1)*x+xc,y+yc);
        glVertex2f((-1)*y+xc,x+yc);

        glVertex2f((-1)*x+xc,(-1)*y+yc);
        glVertex2f((-1)*y+xc,(-1)*x+yc);

        glVertex2f(x+xc,(-1)*y+yc);
        glVertex2f(y+xc,(-1)*x+yc);
        x++;
        if(p<0)
        {
            p+=2*x+1;
        }
        else 
        {
            y--;
            p+=2*x-2*y+1;
        }
    }
    glEnd();
    glFlush();
}
void disp()
{
    int r=200;
    int x=-200,y=-200;
    int xinc=1,yinc=2;
    while(true)
    {
        draw_circle(x,y,r);
        system("sleep 0.001");
        x+=xinc;
        y+=yinc;
        if(x==-200)
        {
            xinc=1;
            yinc=2;
        }
        else if(x==0)
        {
            if(xinc==-1) xinc=-1;
            else xinc=1;
            yinc=-2;
        }
        else if(x==200)
        {
            xinc=-1;
            yinc=2;
        }
    }
}
int main(int a,char ** b)
{
    glutInit(&a,b);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize(500,500);
    glutCreateWindow("bouncing ball");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
    return 0;
}