#include <GL/glut.h>
#include <iostream>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    //Drawing front of building
    glBegin(GL_QUADS);
    glColor3ub(127, 130, 116);
    glVertex2i(5, 0);
    glVertex2i(-5, 0);
    glVertex2i(-5, 15);
    glVertex2i(5, 15);
    glEnd();

    //Drawing roof of building
    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2i(5, 15);
    glVertex2i(8, 16);
    glVertex2i(-2, 16);
    glVertex2i(-5, 15);
    glEnd();
    //Drawing side of building
    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2i(5, 0);
    glVertex2i(8, 1);
    glVertex2i(8, 16);
    glVertex2i(5, 15);
    glEnd();

    //Drawing the windows
    for (int y = 3; y <= 14; y += 3)
    {
        glBegin(GL_QUADS);
        glColor3ub(145, 184, 219);
        glVertex2i(4, y);
        glVertex2i(-4, y);
        glVertex2i(-4, y + 2);
        glVertex2i(4, y + 2);
        glEnd();

        glLineWidth(3.0);
        glBegin(GL_LINE_LOOP);
        glColor3ub(0, 0, 0);
        glVertex2i(4, y);
        glVertex2i(-4, y);
        glVertex2i(-4, y + 2);
        glVertex2i(4, y + 2);
        glEnd();
    }

    //Drawing the doors
    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2i(3, 0);
    glVertex2i(-3, 0);
    glVertex2i(-3, 2);
    glVertex2i(3, 2);
    glEnd();

    //Door Outlines
    glLineWidth(3.0);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex2i(-3, 2);
    glVertex2i(3, 2);
    glVertex2i(3, 0);
    glVertex2i(-3, 0);
    glVertex2i(-3, 2);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(0, 0);
    glVertex2i(0, 2);
    glEnd();

    //Building Outlines
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2i(-5, 0);
    glVertex2i(5, 0);
    glVertex2i(5, 15);
    glVertex2i(8, 16);
    glVertex2i(-2, 16);
    glVertex2i(-5, 15);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(-5, 15);
    glVertex2i(5, 15);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2i(5, 0);
    glVertex2i(8, 1);
    glVertex2i(8, 16);
    glVertex2i(5, 15);
    glEnd();

    glFlush(); // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(700, 700);
    glutCreateWindow("Task 3"); // Create a window with the given title
    // Set the window's initial width & height
    gluOrtho2D(-20, 20, -5, 20);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}