#include<iostream>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    //light
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor4ub(250, 250, 51, 0);
    glVertex2i(20, 14);
    glVertex2i(18, 14);
    glVertex2i(15, 0);
    glVertex2i(22, 0);
    glEnd();

    //pole
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2i(23, 0);
    glVertex2i(23, 1);
    glVertex2i(20, 1);
    glVertex2i(20, 0);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2f(0.47f, 0.92f);
    glVertex2f(0.47f, 0.97f);
    glVertex2f(0.43f, 0.97f);
    glVertex2f(0.43f, 0.92f);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal

    glVertex2i(21, 1);
    glVertex2i(22, 1);
    glVertex2i(22, 13);
    glVertex2i(21, 13);
    glVertex2i(21, 1);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2i(22, 13);
    glVertex2i(20, 15);
    glVertex2i(20, 14);
    glVertex2i(21, 13);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2i(20, 14);
    glVertex2i(20, 15);
    glVertex2i(18, 15);
    glVertex2i(18, 14);
    glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(700, 700);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner

    glutCreateWindow("Lamp");  // Create window with the given title
    gluOrtho2D(12, 26, 0, 16);
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}