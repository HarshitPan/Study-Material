#include<GL/glut.h>
int main(int a,char **b)
{
    glutInit(&a,b);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Line Clipping...");
    
    
    glutMainLoop();
    return 0;
}