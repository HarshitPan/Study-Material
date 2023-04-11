#include <GL/glut.h>
#include<stdio.h>
void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        printf("Left mouse button clicked at %d, %d\n", x, y);
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("OpenGL Mouse Click Example");
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
