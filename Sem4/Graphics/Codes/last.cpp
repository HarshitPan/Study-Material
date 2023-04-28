#include<GL/glut.h>

void init()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255,255,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500,500,-500,500);
}
void drawline(int x1,int y1,int x2,int y2)
{
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
}
void quad(int xc,int yc,int r,int q)
{
    glBegin(GL_POINTS);
    int x=0,y=r,p=1-r;
    while(y>x)
    {
        if(q==1)
        {
            glVertex2f(x+xc,y+yc);
            glVertex2f(y+xc,x+yc);
        }
        else if(q==2)
        {
            glVertex2f((-1)*x+xc,y+yc);
            glVertex2f((-1)*y+xc,x+yc);
        }
        else if(q==3)
        {
            glVertex2f((-1)*x+xc,(-1)*y+yc);
            glVertex2f((-1)*y+xc,(-1)*x+yc);
        }
        else if(q==4)
        {
            glVertex2f(x+xc,(-1)*y+yc);
            glVertex2f(y+xc,(-1)*x+yc);
        }
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
void disp()
{
    int count=0;
    int gap=1;
    int x=0,y=0,r=100;
    while(true)
    {
        glClear(GL_COLOR_BUFFER_BIT);

        quad(0,0,r,1);
        quad(0,0,r,2);
        quad(0,0,r,3);
        quad(0,0,r,4);

        drawline(0,-100,0,-300);
        
        quad(0,-380,80,1);
        quad(0,-380,80,2);

        drawline(0,-300,20,-200);

        drawline(0,-150,80,-210);

        drawline(0,-150,-50,-200);

        drawline(-50,-200,0+x,-290+y-10);


        quad(0+x,-290+y,10,1);
        quad(0+x,-290+y,10,2);
        quad(0+x,-290+y,10,3);
        quad(0+x,-290+y,10,4);

        int stepsx=100/20;
        int stepsy=1;
        if(y==0)
        {
            gap=1;
            x=0,y=0;
        }
        else if(y>100)
        {
            gap=gap*(-1);
            count=0;
        }
        if(count%stepsx==0)
        {
            x+=gap;
        }
        if(count%stepsy==0)
        {
            y+=gap;
        }
        count++;
        
        glFlush();
        system("sleep 0.0001");
    }
}
int main(int a,char** b)
{
    glutInit(&a,b);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Last...");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
    return 0;
}