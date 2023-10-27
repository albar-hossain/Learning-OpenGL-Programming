#include <GL/glut.h>
#include <iostream>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    //Drawing support of bench
    glBegin(GL_QUADS);
    glColor3ub(127, 130, 116);
    glVertex2f(-29.1, 5);
    glVertex2f(-29.11, 2.92);
    glVertex2f(-28.8, 2.92);
    glVertex2f(-28.8, 5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(127, 130, 116);
    glVertex2f(-23, 5);
    glVertex2f(-23, 2.91);
    glVertex2f(-22.7, 2.91);
    glVertex2f(-22.7, 5);
    glEnd();

    //Drawing legs of bench
    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-29.1, 0.92);
    glVertex2f(-29, 1.13);
    glVertex2f(-29, 1.69);
    glVertex2f(-29.4, 1.69);
    glVertex2f(-29.4, 0.92);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-22.98, 1.13);
    glVertex2f(-22.88, 0.92);
    glVertex2f(-22.59, 0.92);
    glVertex2f(-22.58, 1.69);
    glVertex2f(-22.98, 1.69);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-30, 1.9);
    glVertex2f(-30, 0);
    glVertex2f(-29.67, 0);
    glVertex2f(-29.55, 0.25);
    glVertex2f(-29.56, 1.69);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-30, 1.9);
    glVertex2f(-29.56, 1.69);
    glVertex2f(-22.46, 1.69);
    glVertex2f(-22, 1.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-22, 1.9);
    glVertex2f(-22, 0);
    glVertex2f(-22.34, 0);
    glVertex2f(-22.46, 0.25);
    glVertex2f(-22.46, 1.69);
    glEnd();



    //Drawing the planks
    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 3);
    glVertex2f(-22.3, 3);
    glVertex2f(-22.3, 3.3);
    glVertex2f(-29.5, 3.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 3.5);
    glVertex2f(-22.3, 3.5);
    glVertex2f(-22.3, 3.8);
    glVertex2f(-29.5, 3.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 4);
    glVertex2f(-22.3, 4);
    glVertex2f(-22.3, 4.3);
    glVertex2f(-29.5, 4.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 4.5);
    glVertex2f(-22.3, 4.5);
    glVertex2f(-22.3, 4.8);
    glVertex2f(-29.5, 4.8);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-30.34, 2.07);
    glVertex2f(-30.34, 1.9);
    glVertex2f(-21.54, 1.9);
    glVertex2f(-21.53, 2.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-30.34, 2.07);
    glVertex2f(-21.53, 2.07);
    glVertex2f(-22.23, 2.91);
    glVertex2f(-29.57, 2.92);
    glEnd();

    glFlush(); // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(700, 700);
    glutCreateWindow("Task 4"); // Create a window with the given title
    // Set the window's initial width & height
    gluOrtho2D(-32, -20, 0, 10);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}