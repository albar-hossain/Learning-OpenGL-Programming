#include <GL/glut.h>
#include <iostream>

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glLineWidth(1);


    glBegin(GL_LINES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0); // white 
    glVertex2f(4, 8);
    glVertex2f(-4, 8);
    glVertex2f(-4, 8);
    glVertex2f(-4, 0);
    glVertex2f(4, 8);
    glVertex2f(4, 0); // x, y
    glVertex2f(4, 0); // x, y
    glVertex2f(-4, 0);

    glEnd();

    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(-2, 4);
    glVertex2f(-4, 4);
    glVertex2f(-4, 2); // x, y
    glVertex2f(-2, 2); // x, y
    glEnd();


    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(2, 4);
    glVertex2f(0, 4);
    glVertex2f(0, 2); // x, y
    glVertex2f(2, 2); // x, y
    glEnd();

    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(0, 2);
    glVertex2f(-2, 2);
    glVertex2f(-2, 0); // x, y
    glVertex2f(0, 0); // x, y
    glEnd();

    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(4, 2);
    glVertex2f(2, 2);
    glVertex2f(2, 0); // x, y
    glVertex2f(4, 0); // x, y
    glEnd();


    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(-2, 8);
    glVertex2f(-4, 8);
    glVertex2f(-4, 6); // x, y
    glVertex2f(-2, 6); // x, y
    glEnd();


    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(2, 8);
    glVertex2f(0, 8);
    glVertex2f(0, 6); // x, y
    glVertex2f(2, 6); // x, y
    glEnd();

    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(0, 6);
    glVertex2f(-2, 6);
    glVertex2f(-2, 4); // x, y
    glVertex2f(0, 4); // x, y
    glEnd();

    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);
    glVertex2f(4, 6);
    glVertex2f(2, 6);
    glVertex2f(2, 4); // x, y
    glVertex2f(4, 4); // x, y
    glEnd();


    glFlush(); // Render now

}


int main(int argc, char** argv) {

    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(500, 500);
    glutCreateWindow("Task 3"); // Create a window with the given title

    // Set the window's initial width & height
    gluOrtho2D(-15, 15, -15, 15);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}