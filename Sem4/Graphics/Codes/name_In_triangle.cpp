#include<GL/glut.h>
#include<math.h>
void draw_triangle()
{
    glBegin(GL_POLYGON);
    //glColor3d(255.0, 255.0, 255.0);
    glColor3ub(0,255,0);
    float p=sqrt(0.75);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(0.5, p, 0.0);
    glEnd();
}
void drawline(float x1,float y1,float x2,float y2)
{
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
}
void draw_name()
{
     glColor3ub(0,0,255);
    // glLineWidth(4.1);
    // drawline(0.0,0.0,0.0,1.0);
    // drawline(0.1,0.0,0.1,0.1);
    // drawline(0.1,0.05,0.15,0.05);
    // drawline(0.15,0.0,0.15,0.1);

    // drawline(0.17,0.0,0.20,0.1);
    // drawline(0.18,0.05,0.22,0.05);
    // drawline(0.20,0.1,0.23,0.0);

    // drawline(0.25,0.0,0.25,.1);
    // drawline(0.25,0.1,0.28,0.1);
    // drawline(0.28,0.1,0.28,0.05);
    // drawline(0.28,0.05,0.25,0.05);
    // drawline(0.25,0.05,0.28,0.0);

    // not feasable...
    glRasterPos2f(0.35,0.3);
    char name[]="Harshit Pandey";
    for(int i=0;name[i]!='\0';i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name[i]);
}
void disp()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    draw_triangle();
    draw_name();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);

    glutInitWindowPosition(100, 100);
    glutCreateWindow("triangles");
    glutDisplayFunc(disp);
    //disp();
    glutMainLoop();
    return 0;
}