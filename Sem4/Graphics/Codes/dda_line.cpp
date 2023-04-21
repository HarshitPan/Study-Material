#include<GL/glut.h>
#include<stdio.h>
void init(void)
{
    glClearColor(0,0,0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}

void disp()
{
    // wrong
    // float x1=100,y1=350,x2=50,y2=100;
    // float delx=x1-x2;
    // float dely=y1-y2;
    // float steps;
    // float temp;
    // if(delx>dely)
    // {
    //     steps=delx;
    // }
    // else
    // {
    //     steps=dely;
    // }
    // delx=delx/steps;
    // dely=dely/steps;
    // glClear(GL_COLOR_BUFFER_BIT );
    // glColor3d(1,0,0);
    // glBegin(GL_POINTS);
    // for(int i=0;i<steps;i++)
    // {
    //     glVertex3f(x1,y1,0);
    //     if(x2>x1)x1+=delx;
    //     else x1-=delx;
    //     if(y2>y1) y1+=dely;
    //     else y1-=dely;
    // }
    // glEnd();
    // glFlush();


    // method 2 ...
    int x1=400,y1=350,x2=50,y2=340;
        int delx=x1-x2;
        int dely=y1-y2;
        int steps;
        int temp;
        if(delx>dely)
        {
            steps=delx;
        }
        else
        {
            steps=dely;
        }
        delx=steps/delx;
        dely=steps/dely;
        glClear(GL_COLOR_BUFFER_BIT );
        glColor3d(0,1,0);
        glBegin(GL_POINTS);
        for(int i=0;i<steps;i++)
        {
            glVertex3d(x1,y1,0);
            if(i%delx==0) 
            {
                if(x2>x1) x1++;
                else x1--;
            }
            if(i%dely==0) 
            {
                if(y2>y1) y1++;
                else y1--;
            }
        }
    glEnd();
    glFlush();
 }
// void onClick(int button,int state,int x,int y)
// {
//    printf("%d , %d \n",x,y);
// }
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(200,200);
    glutCreateWindow("DDA Line Drawing Algorithm...");
    
    glutDisplayFunc(disp);
   //   ``````````````````                                                                                                                                                                                                                           glutMouseFunc(onClick);
    init();
    glutMainLoop();
    return 0;
}