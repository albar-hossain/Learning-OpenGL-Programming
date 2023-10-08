#include <GL/glut.h>
#include <iostream>

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glLineWidth(99999);


    glBegin(GL_LINES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0); // white 
    glVertex2f(3, 0);
    glVertex2f(5, 2);
    glVertex2f(5, 2);
    glVertex2f(5, 4); // x, y
    glVertex2f(5, 4); // x, y
    glVertex2f(3, 6); // x, y
    glVertex2f(3, 6); // x, y
    glVertex2f(-3, 6); // x, y
    glVertex2f(-3, 6); // x, y
    glVertex2f(-5, 4); // x, y
    glVertex2f(-5, 4); // x, y
    glVertex2f(-5, 2); // x, y
    glVertex2f(-5, 2); // x, y
    glVertex2f(-3, 0); // x, y
    glVertex2f(-3, 0); // x, y
    glVertex2f(3, 0);




    glEnd();

    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    glColor3ub(255, 255, 1);
    glVertex2f(3, 0);
    glVertex2f(5, 2);
    glVertex2f(5, 4); // x, y
    glVertex2f(3, 6); // x, y
    glVertex2f(-3, 6); // x, y
    glVertex2f(-5, 4); // x, y
    glVertex2f(-5, 2); // x, y
    glVertex2f(-3, 0); // x, y
    glEnd();





    glFlush(); // Render now

}


int main(int argc, char** argv) {

    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(700, 700);
    glutCreateWindow("Task 3"); // Create a window with the given title

    // Set the window's initial width & height
    gluOrtho2D(-15, 15, -15, 15);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}