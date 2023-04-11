
//incomplete -  cant find a method to read pixels where window is set from a negitive left to positive right and same for top and bottom...


#include<GL/glut.h>
#include<iostream>
void init()
{
    
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(-500,500,-500,500);
    glViewport(0, 0, 1000, 1000);
    
}
void semi(int x,int y,int r,int temp)
{
    glColor3d(0,1,0);
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

}
void boundary_fill(int x,int y,float b_color[],float n_color[])
{
    unsigned char color[3];
    glReadPixels(x,y, 1, 1, GL_RGB , GL_UNSIGNED_BYTE, &color);
    int flag=0;
    int count=0;
    // for(int i=0;i<3;i++)
    // {
    //     color[i]%=2;
    // }


    for(int i=0;i<3;i++)
    {
        if(int(color[i]) == n_color[i])
        {
            count++;
        }
    }
    if(count==3)
    {
        flag=1;
    }
    count=0;
    if(flag==0)
    {
        for(int i=0;i<3;i++)
        {
            if(int(color[i]) == b_color[i])
            {
                count++;
            }
        }
        if(count==3)
        {
            flag=1;
        }
    }
    for(int i=0;i<3;i++)
    {
        std::cout<<int(color[i])<<" ";
        std::cout<<b_color[i];
        std::cout<<" "<<n_color[i];
        std::cout<<"\n";
    }
    int read;
   // std::cin>>read;
    std::cout<<flag<<" "<<x<<" "<<y<<std::endl;
    // if(flag==0)
    // {
    //     glColor3f(n_color[0],n_color[1],n_color[2]);
    //     glVertex2d(x,y);
    //     boundary_fill(x+1,y,b_color,n_color);
    //     boundary_fill(x,y+1,b_color,n_color);
    //     if(x-1 >= 0 )boundary_fill(x-1,y,b_color,n_color);
    //     if(y-1 >=0 )boundary_fill(x,y-1,b_color,n_color);
    // }
}
void quad(int x,int y,int r,int pos)
{
    int tx=0,ty=r;
    int p=1-r;
    while(tx<ty)
    {
        if(pos==1) 
        {
            glVertex2d(tx+x,ty+y);
            glVertex2d(ty+x,tx+y);
        }
        if(pos==2) 
        {
            glVertex2d((-1)*tx+x,ty+y);
            glVertex2d((-1)*ty+x,tx+y);
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
}
// void color_background()
// {
//     glColor3d(0,0,1);
//     glBegin(GL_POINTS);
//     for(int i=-500;i<=500;i++)
//     {
//         for(int j=-500;j<=500;j++)
//         {
//             glVertex2d(i,j);
//         }
//     }
//     glEnd();
// }
void disp()
{
    //color_background()
    glColor3d(1,0,0);
    glBegin(GL_POINTS);
    glVertex2d(100,100);
    semi(-100,200,100,1);
    semi(100,200,100,2);
    quad(-100,0,100,1);
    quad(100,0,100,2);
    glEnd();
    glFlush();
    //float b_color[]={255,0,0},n_color[]={0,0,255};
    //boundary_fill(100+500,400,b_color,n_color);
    // glColor3f(1.0,1.0,1.0);
    // glRasterPos2d(-40,150);
    // char name[]="XYZ";
    // for(int i=0;name[i]!='\0';i++)
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name[i]);
    glFlush();
}
//void boundary_fill(int x,int y,)

int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("heart");
    glutDisplayFunc(disp);
    init();
    glutMainLoop();
}