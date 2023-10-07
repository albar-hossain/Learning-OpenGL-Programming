#include <GL/glut.h>
#include <iostream>

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glLineWidth(7.5);


    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    glColor3ub(96, 169, 23); // Green

    glVertex2f(-2, 2);
    glVertex2f(2, 2); // x, y
    glVertex2f(2, -2);
    glVertex2f(-2, -2); // x, y

    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(229, 20, 0); // Red

    glVertex2f(-2, 2);
    glVertex2f(2, 2);
    glVertex2f(0, 4.5); // x, y

    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(229, 20, 0); // Red

    glVertex2f(-2, -2);
    glVertex2f(2, -2);
    glVertex2f(0, -4.5);
    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(250, 104, 0); // Red

    glVertex2f(-2, 2);
    glVertex2f(-2, -2);
    glVertex2f(-4.5, 0);
    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(250, 104, 0); // Red

    glVertex2f(2, 2);
    glVertex2f(2, -2);
    glVertex2f(4.5, 0);
    glEnd();



    glFlush(); // Render now

}


int main(int argc, char** argv) {

    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(640, 480);
    glutCreateWindow("Task 2"); // Create a window with the given title

    // Set the window's initial width & height
    gluOrtho2D(-15, 15, -15, 15);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}