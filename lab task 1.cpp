#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glLineWidth(4);
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 0.0f); // Red
    //AB
    glVertex2f(-0.2f, 0.0f);    // x, y
    glVertex2f(0.2f, 0.0f);    // x, y
    //CD
    glVertex2f(-0.2f, 0.3f);    // x, y
    glVertex2f(0.2f, 0.3);    // x, y
    //AC
    glVertex2f(-0.2f, 0.0f);    // x, y
    glVertex2f(-0.2f, 0.3f);    // x, y
    //BD
    glVertex2f(0.2f, 0.3f);    // x, y
    glVertex2f(0.2f, 0.0f);    // x, y

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