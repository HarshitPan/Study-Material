#include<GL/glut.h>
#include<iostream>
void init(void)
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}

void disp(void)
{
    int x1=50,y1=100,x2=200,y2=150;
    int dx=x2-x1,dy=y2-y1;
    int p=2*dx-dy;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glColor3d(0,1,0);
    // glBegin(GL_POINTS);
    // glVertex2d(50,100);
    // glEnd();
    // if(steps==dy)
    // {
    //     glRasterPos2d(50,100);
    //     char text[]="IN MAINTANENCE";
    //     std::cout<<"HEllo ";
    //     int i=0;
    //     while(text[i]!='\0')
    //     {
    //         glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,text[i]);
    //         i++;
    //     }  
    //     return; 
    // }
    glBegin(GL_POINTS);
    while(x1<=x2)
    {
        glVertex2d(x1,y1);
        x1++;
        if(p<0)
        {
            p+=2*abs(dy);
        }   
        else 
        {
            p+=2*abs(dy)-2*abs(dx);
            y1++; 
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
    glutCreateWindow("breshman line drawing algorithm...");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
    return 0;
}