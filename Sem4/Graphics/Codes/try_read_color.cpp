#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

// Window size
int width = 500, height = 500;

void display()
{
    glClearColor(1,0,0,0);
  glClear(GL_COLOR_BUFFER_BIT);
  
  // Set the color to red
  glColor3f(.75, 1.0, 0.0);
  
  // Draw a rectangle
  glBegin(GL_QUADS);
  glVertex2f(-0.5, -0.5);
  glVertex2f(0.5, -0.5);
  glVertex2f(0.5, 0.5);
  glVertex2f(-0.5, 0.5);
  glEnd();
  
  // Swap buffers
  glutSwapBuffers();
}

void mouse(int button, int state, int x, int y)
{
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
    // Read the color of the pixel under the mouse cursor
    unsigned char pixel[3];
    glReadPixels(x, height - y, 1, 1, GL_RGB, GL_UNSIGNED_BYTE, &pixel);
    
    // Print the color values
    printf("Red: %d, Green: %d, Blue: %d\n", pixel[0], pixel[1], pixel[2]);
  }
}

int main(int argc, char **argv)
{
  // Initialize GLUT
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(width, height);
  glutCreateWindow("OpenGL Window");
  
  // Set the display function
  glutDisplayFunc(display);
  
  // Set the mouse function
  glutMouseFunc(mouse);
  
  // Enter the main loop
  glutMainLoop();
  
  return 0;
}
