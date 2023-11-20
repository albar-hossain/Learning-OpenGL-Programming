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

void drawWheel() {
    circle(0.78, 0, 0, 1, 1, 1);
    circle(0.55, 0, 0, 82, 85, 87); //rgb(82, 85, 87)
    circle(0.18, 0, 0, 114, 115, 118); //rgb(114, 115, 118)

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.08, -0.16);
    glVertex2f(0.26, -0.49);
    glEnd();
}

void drawTruck() {


    //BODY
    glBegin(GL_QUADS);
    glColor3ub(8, 95, 167); //rgb(8, 95, 167)
    glVertex2f(-1.41, -0.32);
    glVertex2f(2.39, -0.32);
    glVertex2f(2.39, 0.13);
    glVertex2f(-1.41, 0.13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 95, 167); //rgb(8, 95, 167)
    glVertex2f(-1.25, 0.13);
    glVertex2f(2.39, 0.12);
    glVertex2f(2.39, 3.17);
    glVertex2f(0.73, 3.17);
    glVertex2f(-0.33, 1.79);
    glVertex2f(-1.25, 1.43);
    glEnd();
    //Glass
    glBegin(GL_POLYGON);
    glColor3ub(178, 223, 245); //rgb(178, 223, 245)
    glVertex2f(0.23, 1.75);
    glVertex2f(0.83, 1.75);
    glVertex2f(0.83, 2.86);
    glVertex2f(0.23, 2.14);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178, 223, 245); //rgb(178, 223, 245)
    glVertex2f(0.98, 1.75);
    glVertex2f(2.06, 1.75);
    glVertex2f(2.06, 2.86);
    glVertex2f(0.98, 2.86);
    glEnd();
    //Rear body
    glBegin(GL_QUADS);
    glColor3ub(114, 115, 118); //rgb(114, 115, 118)
    glVertex2f(2.5, 0.76);
    glVertex2f(8, 0.76);
    glVertex2f(8, 2.3);
    glVertex2f(2.5, 2.3);
    glEnd();
    //Lower part
    glBegin(GL_QUADS);
    glColor3ub(44, 46, 45); //rgb(44, 46, 45)
    glVertex2f(2.39, 0.65);
    glVertex2f(2.39, -0.2);
    glVertex2f(6.87, -0.2);
    glVertex2f(6.87, 0.65);
    glEnd();

    //lower mid part
    glBegin(GL_QUADS);
    glColor3ub(82, 85, 87); //rgb(82, 85, 87)
    glVertex2f(3.55, 0.78);
    glVertex2f(3.55, 0.64);
    glVertex2f(7.82, 0.64);
    glVertex2f(7.82, 0.78);
    glEnd();
    //LIGHTS
    glBegin(GL_QUADS);
    glColor3ub(247, 160, 31); //rgb(247, 160, 31)
    glVertex2f(-0.9, 0.85);
    glVertex2f(-0.6, 0.85);
    glVertex2f(-0.6, 1);
    glVertex2f(-0.9, 1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(247, 160, 31); //rgb(247, 160, 31)
    glVertex2f(-1.4, 0.64);
    glVertex2f(-1.25, 0.64);
    glVertex2f(-1.25, 1.17);
    glVertex2f(-1.4, 1.17);
    glEnd();

    //Door handle
    glBegin(GL_QUADS);
    glColor3ub(178, 223, 245); //rgb(178, 223, 245)
    glVertex2f(1.42, 1.31);
    glVertex2f(1.42, 1.21);
    glVertex2f(1.84, 1.21);
    glVertex2f(1.84, 1.31);
    glEnd();

    //Holes
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); //rgb(255, 255, 255)
    glVertex2f(3.04, 0.44);
    glVertex2f(3.04, 0.3);
    glVertex2f(3.43, 0.3);
    glVertex2f(3.43, 0.44);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); //rgb(255, 255, 255)
    glVertex2f(3.78, 0.63);
    glVertex2f(3.78, 0.25);
    glVertex2f(4.41, 0.25);
    glVertex2f(4.41, 0.63);
    glEnd();

    //nUMBER PLATE
    glBegin(GL_QUADS);
    glColor3ub(44, 46, 45); //rgb(44, 46, 45)
    glVertex2f(7.64, 0.64);
    glVertex2f(7.64, 0.15);
    glVertex2f(7.76, 0.15);
    glVertex2f(7.76, 0.64);
    glEnd();

    //tOOL BOX
    glBegin(GL_QUADS);
    glColor3ub(8, 95, 167); //rgb(8, 95, 167)
    glVertex2f(2.5, 0.25);
    glVertex2f(2.5, -0.35);
    glVertex2f(3.55, -0.35);
    glVertex2f(3.55, 0.25);
    glEnd();
    //tOOLBOX HANDLE
    glBegin(GL_QUADS);
    glColor3ub(114, 115, 118); //rgb(114, 115, 118)
    glVertex2f(2.93, 0.01);
    glVertex2f(2.93, -0.07);
    glVertex2f(3.14, -0.07);
    glVertex2f(3.14, 0.01);
    glEnd();

}
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1, 1, 1);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-4, 9, -2, 5);

    //Truck
    glPushMatrix();
    // glTranslatef(_angle1 * 0.1, 0.0, 0.0); // Move the car horizontally
    drawTruck();
    glPopMatrix();

    // Both wheels
    glPushMatrix();
    // glTranslatef(_angle1 * 0.1, 0.0, 0.0); // Move the car horizontally
    glRotatef(_angle1, 0.0f, 0.0f, 1.0f);
    //front wheel
    drawWheel();
    glPopMatrix();
    //back wheel
    glPushMatrix();
    // glTranslatef(_angle1 * 0.1, 0.0, 0.0); // Move the car horizontally
    glTranslatef(5.54, 0.0, 0.0);
    glRotatef(_angle1, 0.0f, 0.0f, 1.0f);
    drawWheel();
    glPopMatrix();

    glutSwapBuffers();
}

void update(int value) {

    _angle1 += 5.0f;
    if (_angle1 > 360.0)
    {
        _angle1 -= 360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutCreateWindow("Car with rotating wheels");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    //gluOrtho2D(-10, 10, -10, 10);

    glutDisplayFunc(drawScene);

    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}
