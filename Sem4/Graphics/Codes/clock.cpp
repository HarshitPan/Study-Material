#include<GL/glut.h>
void init()
{
    glClearColor(0,0,0,1);
    glColor3ub(255,255,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500,500,-500,500);
}
void circle(int xc,int yc,int r)
{
    int x=0,y=r;
    int p=1-r;
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
}
void drawline(int x1,int y1,int x2,int y2)
{
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
}
void disp()
{
    glClear(GL_COLOR_BUFFER_BIT);
    circle(0,0,400);
    circle(0,0,390);
    circle(0,0,10);
    drawline(6,6,200,6);
    drawline(-6,-6,200,-6);
    drawline(200,6,210,0);
    drawline(200,-6,210,0);
    
    drawline(6,6,6,300);
    drawline(-6,-6,-6,300);
    drawline(6,300,0,320);
    drawline(-6,300,0,320);
    glColor3ub(255,255,255);
    glRasterPos2f(-5,330);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'1');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'2');
    glRasterPos2f(330,0);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'3');
    glRasterPos2f(-330,0);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'9');
    glRasterPos2f(0,-330);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'6');
    glFlush();

}
int main(int a,char **b)
{
    glutInit(&a,b);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Clock");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
    return 0;
}