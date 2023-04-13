#include<GL/glut.h>
void init()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}
void draw_line(int x1,int y1,int x2,int y2)
{
    glBegin(GL_LINES);
    glVertex2d(x1,y1);
    glVertex2d(x2,y2);
    glEnd();
    glFlush();
}
void octate(int xc,int yc,int r,int o)
{
    int p=1-r;
    int x=0,y=r;
    glBegin(GL_POINTS);
    while(y>x)
    {
        if(o==1)
            glVertex2d(x+xc,y+yc);
        else if(o==2)
            glVertex2d(y+xc,x+yc);
        else if(o==3)
            glVertex2d((-1)*x+xc,y+yc);
        else if(o==4)
            glVertex2d((-1)*y+xc,x+yc);
        else if(o==5)
            glVertex2d((-1)*x+xc,(-1)*y+yc);
        else if(o==6)
            glVertex2d((-1)*y+xc,(-1)*x+yc);
        else if(o==7)
            glVertex2d(x+xc,(-1)*y+yc);
        else if(o==8)
            glVertex2d(y+xc,(-1)*x+yc);
        
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
    glClear(GL_COLOR_BUFFER_BIT);

    //head
    octate(300,380-50,50,4);
    octate(300,380-50,50,3);
    octate(300,380-50,50,1);
    octate(300,380-50,50,2);

    //back 

    draw_line(250,380-50,250,250);
    //eyes
    octate(325,380-35,10,1);
    octate(325,380-35,10,2);
    octate(325,380-35,10,3);
    octate(325,380-35,10,4);
    octate(325,380-35,10,5);
    octate(325,380-35,10,6);
    octate(325,380-35,10,7);
    octate(325,380-35,10,8);


    octate(328,380-35,4,1);
    octate(328,380-35,4,2);
    octate(328,380-35,4,3);
    octate(328,380-35,4,4);
    octate(328,380-35,4,5);
    octate(328,380-35,4,6);
    octate(328,380-35,4,7);
    octate(328,380-35,4,8);
    
    //peak
    octate(300+50,380-50-50,50,1);
    octate(300+50,380-50-50,50,2);

    draw_line(350,290,400,280);
    draw_line(350-20,295,350,290);

    draw_line(400,280,350,250);
    draw_line(350,250,350-20,295);
    draw_line(350,380-50,350-20,295);

    //stomach

}
int main(int a,char** b)
{
    glutInit(&a,b);
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize(500,500);
    glutInitWindowPosition(200,200);
    glutCreateWindow("kutta");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
    return 0;
}