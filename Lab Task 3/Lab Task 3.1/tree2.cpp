#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3ub(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);

    glBegin(GL_POLYGON);
    glColor3ub(255, 128, 0);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.4, 0.45);
    glVertex2f(0.3, 0.45);
    glEnd();

    circle(0.2, 0.35, 0.6, 0, 255, 0);
    circle(0.175, 0.5, 0.6, 0, 255, 0);
    circle(0.175, 0.2, 0.6, 0, 255, 0);
    circle(0.175, 0.35, 0.8, 0, 255, 0);


    glFlush();  // Render now
}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Tree");
    //gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
    glutInitWindowSize(320, 320);// Set the window's initial width & height
    gluOrtho2D(0, 0.7, 0, 1.0);
    glutDisplayFunc(display);// Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}

