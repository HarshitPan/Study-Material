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
    octate(0,0,300,1);
    octate(0,0,300,2);
    octate(0,0,300,3);
    octate(0,0,300,4);

    //hair
    drawline(300,0,100,100);
    drawline(-300,0,100,100);

    //face - border

    drawline(300,0,280,-150); //take this for ear..
    drawline(-300,0,-280,-150);

    drawline(280,-150,270,-180); 
    drawline(-280,-150,-270,-180);

    drawline(270,-180,260,-210);
    drawline(-270,-180,-260,-210);

    
    drawline(260,-210,200,-300);
    drawline(-260,-210,-200,-300);

    
    drawline(200,-300,150,-350);
    drawline(-200,-300,-150,-350);


    drawline(150,-350,100,-400);
    drawline(-150,-350,-100,-400);


    drawline(100,-400,50,-420);
    drawline(-100,-400,-50,-420);

    drawline(50,-420,20,-430);
    drawline(-50,-420,-20,-430);

    drawline(20,-430,0,-435);
    drawline(-20,-430,0,-435);

    //eyebrows

    drawline(50,-50,150,-30);
    drawline(150,-30,200,-50);
    drawline(50,-50,150,-20);
    drawline(150,-20,200,-50);

    drawline(-50,-50,-150,-30);
    drawline(-150,-30,-200,-50);
    drawline(-50,-50,-150,-20);
    drawline(-150,-20,-200,-50);

    //eyes 

    drawline(60,-70,190,-70);
    drawline(60,-120,190,-120);
    drawline(60,-70,50,-80);
    drawline(190,-70,200,-80);
    drawline(60,-120,50,-110);
    drawline(190,-120,200,-110);

    drawline(-60,-70,-190,-70);
    drawline(-60,-120,-190,-120);
    drawline(-60,-70,-50,-80);
    drawline(-190,-70,-200,-80);
    drawline(-60,-120,-50,-110);
    drawline(-190,-120,-200,-110);

    //eyes balls

    octate(125,-95,20,1);
    octate(125,-95,20,2);
    octate(125,-95,20,3);
    octate(125,-95,20,4);
    octate(125,-95,20,5);
    octate(125,-95,20,6);
    octate(125,-95,20,7);
    octate(125,-95,20,8);

    octate(-125,-95,20,1);
    octate(-125,-95,20,2);
    octate(-125,-95,20,3);
    octate(-125,-95,20,4);
    octate(-125,-95,20,5);
    octate(-125,-95,20,6);
    octate(-125,-95,20,7);
    octate(-125,-95,20,8);

    //smaller eye balls 
    octate(120,-90,8,1);
    octate(120,-90,8,2);
    octate(120,-90,8,3);
    octate(120,-90,8,4);
    octate(120,-90,8,5);
    octate(120,-90,8,6);
    octate(120,-90,8,7);
    octate(120,-90,8,8);

    octate(-130,-90,8,1);
    octate(-130,-90,8,2);
    octate(-130,-90,8,3);
    octate(-130,-90,8,4);
    octate(-130,-90,8,5);
    octate(-130,-90,8,6);
    octate(-130,-90,8,7);
    octate(-130,-90,8,8);

    //nose

    drawline(50,-220,0,-225);

   // drawline(5,-140,0,-220);

    drawline(-50,-220,0,-225);


    //lips

    drawline(0,-300,100,-290);
    drawline(100,-290,50,-310);
    drawline(50,-310,30,-320);
    drawline(30,-320,0,-325);


    drawline(0,-300,-100,-290);
    drawline(-100,-290,-50,-310);
    drawline(-50,-310,-30,-320);
    drawline(-30,-320,0,-325);


    //ears

    drawline(300,0,310,10);
    drawline(310,10,320,5);
    drawline(320,5,300,-100);
    drawline(300,-100,290,-130);
    drawline(290,-130,280,-150);

    drawline(-300,0,-310,10);
    drawline(-310,10,-320,5);
    drawline(-320,5,-300,-100);
    drawline(-300,-100,-290,-130);
    drawline(-290,-130,-280,-150);

    glFlush();
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