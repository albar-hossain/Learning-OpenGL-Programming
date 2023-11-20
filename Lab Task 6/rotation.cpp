#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

using namespace std;

float _angle1 = 0.0f;

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float x = radius * cos(A);
        float y = radius * sin(A);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}

// Function to draw a blade
void drawBlade()
{
    glBegin(GL_POLYGON);
    glColor3ub(193, 205, 211);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.5, -2.5);
    glVertex2f(1.43, -4.42);
    glVertex2f(1.72, -3.9);
    glVertex2f(0.53, -2.2);
    glEnd();
}

void drawWindMill()
{
    // Draw the base
    glColor3ub(193, 205, 211);
    glBegin(GL_QUADS);
    glVertex2f(-1.2f, 0.8f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(1.2f, 0.0f);
    glVertex2f(1.2f, 0.8f);
    glEnd();

    // Draw middle part
    circle(0.57, 0.0, 6.5, 193, 205, 211); //rgb(193, 205, 211)

    // Draw the pole
    glColor3ub(193, 205, 211);
    glBegin(GL_POLYGON);
    glVertex2f(-0.27f, 6.0f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.27f, 6.0f);
    glEnd();
}


void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1, 1, 1);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-5, 5, 0, 12);
    // Draw sky
    glColor3ub(135, 206, 235); // Sky Blue
    glBegin(GL_QUADS);
    glVertex2f(-5.0, 12);
    glVertex2f(-5.0, 0.0);
    glVertex2f(5.0, 0.0);
    glVertex2f(5.0, 12);
    glEnd();

    drawWindMill();

    // Draw three blades
    glTranslatef(0.0, 6.5, 0.0);
    glRotatef(_angle1, 0.0f, 0.0f, 1.0f);
    glColor3ub(217, 226, 233);

    for (int i = 0; i < 3; ++i)
    {
        glPushMatrix();
        glRotatef(i * 120.0f, 0.0f, 0.0f, 1.0f);
        drawBlade();
        glPopMatrix();
    }

    glutSwapBuffers();
}

void update(int value)
{
    _angle1 += 1.5;
    if (_angle1 > 360.0)
    {
        _angle1 -= 360;
    }
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutCreateWindow("Windmill with Rotating Blades");
    glClearColor(1, 1, 1, 1);

    glutDisplayFunc(drawScene);
    glutTimerFunc(20, update, 0);

    glutMainLoop();
    return 0;
}