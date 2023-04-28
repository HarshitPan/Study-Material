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
void octate(int xc,int yc,int r,int o,int count)
{
    int p=1-r;
    int x=0,y=r;
    int c=0;
    glBegin(GL_POINTS);
    while(y>x)
    {
        if(count==-1)
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
            
            
        }
        else
        {
            if(c==count)
            {
                if(o==1)
                drawline(0,0,x+xc,y+yc);
            else if(o==2)
                drawline(0,0,y+xc,x+yc);
            else if(o==3)
                drawline(0,0,(-1)*x+xc,y+yc);
            else if(o==4)
                drawline(0,0,(-1)*y+xc,x+yc);
            else if(o==5)
                drawline(0,0,(-1)*x+xc,(-1)*y+yc);
            else if(o==6)
                drawline(0,0,(-1)*y+xc,(-1)*x+yc);
            else if(o==7)
                drawline(0,0,x+xc,(-1)*y+yc);
            else if(o==8)
                drawline(0,0,y+xc,(-1)*x+yc);
            break;
            }
            c++;
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
    glFlush();
}

void disp()
{
    
    while(true)
    {
        int count=0;
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_POINTS);
        
        octate(0,0,400,1,-1);
        octate(0,0,400,2,-1);
        octate(0,0,400,3,-1);
        octate(0,0,400,4,-1);
        octate(0,0,400,5,-1);
        octate(0,0,400,6,-1);
        octate(0,0,400,7,-1);
        octate(0,0,400,8,-1);

        glEnd();


        int loop=0; 
        while(loop<200);
        {
            octate(0,0,200,1,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200);
        {
            octate(0,0,200,2,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200);
        {
            octate(0,0,200,8,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200)
        {
            octate(0,0,200,7,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200)
        {
            octate(0,0,200,6,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200)
        {
            octate(0,0,200,5,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200)
        {
            octate(0,0,200,4,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200)
        {
            octate(0,0,200,3,count);
            loop++;
            count++;
            system("sleep 0.01");
        }
        count=0;
        loop=0;
        while(loop<200)
        {
            octate(0,0,200,3,count);
            loop++;
            count++;
            system("sleep 0.01");
        }


    }
}

int main(int a,char** b)
{
    glutInit(&a,b);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Face...");
    glutDisplayFunc(disp);
    init();

    glutMainLoop();
    return 0;
}