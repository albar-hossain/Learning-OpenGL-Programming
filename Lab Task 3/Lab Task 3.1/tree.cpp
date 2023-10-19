#include <GL/glut.h>
#include <iostream>
#include<math.h>

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3ub(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    //Drawing Trunk
    glBegin(GL_QUADS);
    glColor3ub(114, 92, 66);
    glVertex2i(-14, 0);
    glVertex2i(-14, 6);
    glVertex2i(-12, 6);
    glVertex2i(-12, 0);
    glEnd();

    //Draw Tree
    circle(2.83, -10, 8, 66, 105, 47);
    circle(2.83, -16, 8, 66, 105, 47);
    circle(3.64, -13, 9, 66, 105, 47);




    glFlush(); // Render now

}


int main(int argc, char** argv) {

    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(700, 700);
    glutCreateWindow("Task 3"); // Create a window with the given title

    // Set the window's initial width & height
    gluOrtho2D(-20, -6, 0, 15);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}