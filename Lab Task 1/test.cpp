#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


    //SQUARE
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    //WB
    glVertex2f(-0.6f, 0.5f);    // x, y
    glVertex2f(-0.2f, 0.5f);    // x, y
    //BA
    glVertex2f(-0.2f, 0.5f);    // x, y
    glVertex2f(-0.2f, 0.1f);    // x, y
    //AZ
    glVertex2f(-0.2f, 0.1f);    // x, y
    glVertex2f(-0.6f, 0.1f);    // x, y
    //ZW
    glVertex2f(-0.6f, 0.1f);    // x, y
    glVertex2f(-0.6f, 0.5f);    // x, y
    glEnd();

    //Triangle

    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
    glColor3f(128.0f, 0.0f, 128.0f); // Purple 104,71,141
    //DC
    glVertex2f(-0.2f, -0.1f);    // x, y
    glVertex2f(-0.2f, -0.5f);    // x, y
    //CE
    glVertex2f(-0.2f, -0.5f);    // x, y
    glVertex2f(-0.6f, -0.3f);    // x, y

    glEnd();


    //Triangle
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 0.0f); // Purple 104,71,141
    //HG
    glVertex2f(0.3f, -0.1f);    // x, y
    glVertex2f(0.5f, -0.4f);    // x, y
    //GF
    glVertex2f(0.5f, -0.4f);    // x, y
    glVertex2f(0.1f, -0.4f);    // x, y
    glEnd();

    //Arrow
    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 1.0f, 0.0f); // Red
    //M
    glVertex2f(0.7f, 0.3f);    // x, y
    //N
    glVertex2f(0.5f, 0.5f);    // x, y
    //O
    glVertex2f(0.5f, 0.4f);    // x, y
    //I
    glVertex2f(0.1f, 0.4f);    // x, y
    //J
    glVertex2f(0.1f, 0.2f);    // x, y
    //K
    glVertex2f(0.5f, 0.2f);    // x, y
    //L
    glVertex2f(0.5f, 0.1f);    // x, y
    glEnd();
    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(640, 480);   // Set the window's initial width & height
    glutInitWindowPosition(100, -1000); // Set the window's position
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 640) / 2,
        (glutGet(GLUT_SCREEN_HEIGHT) - 480) / 2);
    glutCreateWindow("Task 1"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
