#include <GL/glut.h>
#include <iostream>

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //Behind leg 1
    glBegin(GL_QUADS);
    glColor3ub(69, 58, 60);//metal
    glVertex2f(-3.2, 3); //E1
    glVertex2f(-3.2, -1);//h1
    glVertex2f(-2.9, -1);//g1
    glVertex2f(-2.9, 3);//f1
    glEnd();

    //Behind leg 2
    glBegin(GL_QUADS);
    glColor3ub(69, 58, 60);//metal
    glVertex2f(2.9, 3); //I1
    glVertex2f(2.9, -1);//L1
    glVertex2f(3.2, -1);//k1
    glVertex2f(3.2, 3);//j1
    glEnd();


    //top bench log
    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);//brown
    glVertex2f(-4, 2.8); //C
    glVertex2f(-4.08, 2.4);//F
    glVertex2f(4.08, 2.4);//E
    glVertex2f(4, 2.8);//D
    glEnd();


    //2nd bench log
    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);//brown
    glVertex2f(-4, 2.14); //G
    glVertex2f(-4.1, 1.7);//j
    glVertex2f(4.1, 1.7);//I
    glVertex2f(4, 2.14);//h
    glEnd();

    //3rd bench log
    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);//brown
    glVertex2f(-4.1, 1.5); //k
    glVertex2f(-4.09, 1);//L
    glVertex2f(4.1, 1);//M
    glVertex2f(4.09, 1.5);//N
    glEnd();

    //sitting bench log
    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);//brown
    glVertex2f(-4.2, 0.6); //S
    glVertex2f(-5, 0.2);//R
    glVertex2f(5, 0.2);//Q
    glVertex2f(4.2, 0.6);//T
    glEnd();

    //sitting bench log front
    glBegin(GL_QUADS);
    glColor3ub(92, 64, 51);//dark brown
    glVertex2f(-5, 0.2); //R
    glVertex2f(-5, 0);//O
    glVertex2f(5, 0);//P
    glVertex2f(5, 0.2);//Q
    glEnd();

    //front leg 1
    glBegin(GL_QUADS);
    glColor3ub(69, 58, 60);//metal
    glVertex2f(-4, 0); //U
    glVertex2f(-4, -2);//V
    glVertex2f(-3.7, -2);//W
    glVertex2f(-3.7, 0);//Z
    glEnd();

    //Front leg 2
    glBegin(GL_QUADS);
    glColor3ub(69, 58, 60);//metal
    glVertex2f(3.7, 0); //A1
    glVertex2f(3.7, -2);//B1
    glVertex2f(4, -2);//C1
    glVertex2f(4, 0);//D1
    glEnd();


    glFlush();  // Render now
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(920, 720);
    glutCreateWindow("openGL window"); // Create a window with the given title

    gluOrtho2D(-7, 7, -7, 7);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}