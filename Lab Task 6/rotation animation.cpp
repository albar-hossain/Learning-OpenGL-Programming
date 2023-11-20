#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>

using namespace std;

float angle = 0.0f;

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
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

//Function to draw a blade
void drawBlade() {
    glBegin(GL_POLYGON);
    glVertex2f(-0.01f, 0.21f);
    glVertex2f(0.01f, 0.21f);
    glVertex2f(0.01f, 0.3f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.02f, 0.22f);
    glEnd();
}


void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1, 0, 0);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    // Draw the base
    glColor3ub(217, 226, 233);
    glBegin(GL_QUADS);
    glVertex2f(-0.04f, 0.0f);
    glVertex2f(0.04f, 0.0f);
    glVertex2f(0.04f, 0.02f);
    glVertex2f(-0.04f, 0.02f);
    glEnd();

    //Draw middle part
    circle(0.02, 0, 0.19, 217, 226, 233); //rgb(217, 226, 233)

    // Draw the pole
    glColor3ub(217, 226, 233);
    glBegin(GL_POLYGON);
    glVertex2f(-0.02f, 0.02f);
    glVertex2f(0.02f, 0.02f);
    glVertex2f(0.01f, 0.18f);
    glVertex2f(-0.01f, 0.18f);
    glEnd();
    glPopMatrix();


    // Draw three blades
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glColor3ub(217, 226, 233);
    for (int i = 0; i < 3; ++i) {
        glPushMatrix();
        glRotatef(i * 120.0f, 0.0f, 0.0f, 1.0f);
        drawBlade();
        glPopMatrix();
    }

    glutSwapBuffers();
}

// Function to handle updates and animations
void update(int value) {
    angle += 1.5f;  // Update the rotation angle
    if (angle > 360.0f) {
        angle -= 360.0f;
    }

    glutPostRedisplay();  // Request a redraw
    glutTimerFunc(45, update, 0);  // Schedule the next update
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Windmill with Rotating Blades");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-0.05, 0.05, 0, 0.35);
    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}
