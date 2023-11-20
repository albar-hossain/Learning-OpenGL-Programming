#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>

using namespace std;

float _angle1 = 0.0f;

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
    glTranslatef(0.01, -6.5, 0.0);
    glColor3ub(193, 205, 211);
    glVertex2f(0.5, 6.5);
    glVertex2f(0, 6);
    glVertex2f(2.86, 4.42);
    glVertex2f(3.15, 4.94);
    glVertex2f(0.96, 6.64);
    glEnd();
}

void drawBlade2() {
    glTranslatef(0.25, -6.9, 0.0);

    glBegin(GL_POLYGON);
    glColor3ub(193, 205, 211);
    glVertex2f(0.47, 6.73);
    glVertex2f(0.43, 9.99);
    glVertex2f(-0.12, 9.94);
    glVertex2f(-0.56, 7.23);
    glVertex2f(-0.25, 6.9);
    glEnd();
}

void drawWindMill() {


    // Draw the base
    glColor3ub(193, 205, 211);
    glBegin(GL_QUADS);
    glVertex2f(-1.2f, 0.8f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(1.2f, 0.0f);
    glVertex2f(1.2f, 0.8f);
    glEnd();

    //Draw middle part
    circle(0.57, -0.01, 6.5, 193, 205, 211); //rgb(193, 205, 211)

    // Draw the pole
    glColor3ub(193, 205, 211);
    glBegin(GL_POLYGON);
    glVertex2f(-0.27f, 6.0f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.27f, 6.0f);
    glEnd();

}
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1, 1, 1);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-5, 5, 0, 10.5);
    drawWindMill();

    // Draw three blades
    glTranslatef(-0.01, 6.5, 0.0);

    glRotatef(_angle1, 0.0f, 0.0f, 1.0f);
    glColor3ub(217, 226, 233);

    for (int i = 0; i < 3; ++i) {
        glPushMatrix();
        glTranslatef(0.01, -6.5, 0.0);
        glRotatef(i * 120.0f, 0.0f, 0.0f, 1.0f);
        drawBlade();
        glPopMatrix();
    }


    // glPushMatrix();
    // glTranslatef(0.01, -6.5, 0.0);
    // glRotatef(1 * 120.0f, 0.0f, 0.0f, 1.0f);
    // drawBlade();
    // glPopMatrix();

    // glPushMatrix();
    // glRotatef(2 * 120.0f, 0.0f, 0.0f, 1.0f);
    // drawBlade2();
    // glPopMatrix();

    // glPushMatrix();
    // glTranslatef(0.01, -6.5, 0.0);
    // glRotatef(3 * 120.0f, 0.0f, 0.0f, 1.0f);
    // drawBlade();
    // glPopMatrix();

    glutSwapBuffers();
}

void update(int value) {

    _angle1 += 1.5;
    if (_angle1 > 360.0)
    {
        _angle1 -= 360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(16, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutCreateWindow("Windmill with Rotating Blades");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    //gluOrtho2D(-10, 10, -10, 10);

    glutDisplayFunc(drawScene);

    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}
