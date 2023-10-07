#include <GL/glut.h>
#include <iostream>

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, .0f); // Set background color to black and opaque

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glLineWidth(7.5);


    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    glColor3f(1, 0, 0); // Red

    glVertex2f(-4, 0);
    glVertex2f(4, 0); // x, y
    glVertex2f(4, 1);
    glVertex2f(-4, 1); // x, y

    glEnd();

    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    glColor3f(255, 255, 0); // Red

    glVertex2f(-4, 1);
    glVertex2f(4, 1); // x, y
    glVertex2f(4, 2);
    glVertex2f(-4, 2); // x, y
    glEnd();


    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    //glColor(204,102,0); // Red
    glColor3ub(255, 128, 0);
    glVertex2f(-4, 2);
    glVertex2f(4, 2); // x, y
    glVertex2f(4, 3);
    glVertex2f(-4, 3); // x, y
    glEnd();

    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    //glColor(204,102,0); // Red
    glColor3ub(0, 204, 0);
    glVertex2f(-4, 3);
    glVertex2f(4, 3); // x, y
    glVertex2f(4, 4);
    glVertex2f(-4, 4); // x, y
    glEnd();

    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    //glColor(204,102,0); // Red
    glColor3ub(51, 153, 255);
    glVertex2f(-4, 4);
    glVertex2f(4, 4); // x, y
    glVertex2f(4, 5);
    glVertex2f(-4, 5); // x, y
    glEnd();

    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    //glColor(204,102,0); // Red
    glColor3ub(0, 102, 204);
    glVertex2f(-4, 5);
    glVertex2f(4, 5); // x, y
    glVertex2f(4, 6);
    glVertex2f(-4, 6); // x, y
    glEnd();

    glBegin(GL_POLYGON); // Each set of 4 vertices form a quad
    //glColor(204,102,0); // Red
    glColor3ub(153, 51, 255);
    glVertex2f(-4, 6);
    glVertex2f(4, 6); // x, y
    glVertex2f(4, 7);
    glVertex2f(-4, 7); // x, y
    glEnd();

    glFlush(); // Render now

}


int main(int argc, char** argv) {

    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(800, 420);
    glutCreateWindow("OpenGL Setup"); // Create a window with the given title

    // Set the window's initial width & height
    gluOrtho2D(-15, 15, -15, 15);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}