#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(150, 75, 0); // Yellow
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.9f, 0.5f);
    glVertex2f(0.2f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(150, 75, 0); // Yellow
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.0f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(150, 75, 0); // Yellow
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.75f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(150, 75, 0); // Yellow
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.7f, 0.2f);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(150, 90, 0); // Yellow
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.15f, 0.0f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.1f, 0.2f);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(150, 90, 0); // Yellow
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.85f, 0.0f);
    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.9f, 0.5f);
    glVertex2f(0.8f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.75f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("Bench");  // Create window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    gluOrtho2D(-0.2, 1, -0.2, 1);
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}

