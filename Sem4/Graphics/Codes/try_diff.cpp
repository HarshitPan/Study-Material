#include<GL/glut.h>
void line(int,int,int,int);
void semi(int,int,int,int);
void init()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500,500,-500,500);
}
int gx,gy;
void line(int x1,int y1,int x2,int y2)
{

    //try agian


    // int delx=abs(x1-x2);
    // int dely=abs(y1-y2);
    // int steps;
    // int temp;
    // if(delx>dely)
    // {
    //     steps=delx;
    // }
    // else
    // {
    //     steps=dely;
    // }
    // delx=steps/delx;
    // dely=steps/dely;
    // for(int i=0;i<steps;i++)
    // {
    //     glVertex2d(x1,y1);
    //     if(i%delx==0) 
    //     {
    //         if(x2>x1) x1++;
    //         else x1--;
    //     }
    //     if(i%dely==0) 
    //     {
    //         if(y2>y1) y1++;
    //         else y1--;
    //     }
    // }
    glVertex2d(x1,y1);
    glVertex2d(x2,y2);
}

void semi(int x,int y,int r,int temp)
{
    int tx=0,ty=r;
    int p=1-r;
    while(tx<ty)
    {
        glVertex2d(tx+x,ty+y);
        glVertex2d(ty+x,tx+y);
        glVertex2d((-1)*tx+x,ty+y);
        glVertex2d((-1)*ty+x,tx+y);
        if(temp==1) 
        {
            glVertex2d((-1)*ty+x,(-1)*tx+y);
            glVertex2d((-1)*tx+x,(-1)*ty+y);
            
        }
        if(temp==2) 
        {
            glVertex2d(ty+x,(-1)*tx+y);
            glVertex2d(tx+x,(-1)*ty+y);
        }
        tx++;
        if(p<0)
        {
            p+=2*tx+1;
        }
        else
        {
            ty--;
            p+=2*tx-2*ty+1;
        }
    }
    gx=tx;
    gy=ty;  

}
void opposite_semi(int x,int y,int r)
{
    int tx=0,ty=r;
    int p=1-r;
    while(tx<ty)
    {
        glVertex2d((-1)*tx+x,(-1)*ty+y);
        glVertex2d((-1)*ty+x,(-1)*tx+y);
        glVertex2d(tx+x,(-1)*ty+y);
        glVertex2d(ty+x,(-1)*tx+y);
        tx++;
        if(p<0)
        {
            p+=2*tx+1;
        }
        else
        {
            ty--;
            p+=2*tx-2*ty+1;
        }
    }
}
void disp()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glColor3d(1,0,0);
    semi(-100,200,100,1);
    glEnd();
    glBegin(GL_LINES);
    line(-100,200-100,-100,200-100-300);
    glEnd();
    glBegin(GL_POINTS);
    semi(100,200,100,2);
    glEnd();
    glBegin(GL_LINES);
    line(100,200-100,100,200-100-300);
    line(100,-200,-100,-200);
    glEnd();
    glBegin(GL_POINTS);
    opposite_semi(0,-200,100);
    glEnd();
    glFlush();

}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("do not watch");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
}