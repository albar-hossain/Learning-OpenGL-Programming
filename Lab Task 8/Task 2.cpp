#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;
void dis();
void display();

void update(int value) {
    // if (position < -1.0)
    //     position = 1.0f;
    // position -= speed;
    glutPostRedisplay();
    glutTimerFunc(200, update, 0);
}


void update1(int value) {
    // if (position1 > 1.0)
    //     position1 = -1.0f;
    // position1 += speed;
    glutPostRedisplay();
    glutTimerFunc(200, update1, 0);
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void disback(int val)
{
    glutDisplayFunc(display);
}

void display7()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f, position, 0.0f);
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
    glPopMatrix();
    glutTimerFunc(20, disback, 0);
    glFlush();

}


void display6(int val) {

    glutDisplayFunc(display7);


}

void display5()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f, position, 0.0f);
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
    glPopMatrix();
    glutTimerFunc(20, display6, 0);
    glFlush();

}

void display4(int val) {

    glutDisplayFunc(display5);


}



void display3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
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
    glPopMatrix();
    glutTimerFunc(20, display4, 0);
    glFlush();
}

void display2(int val) {

    glutDisplayFunc(display3);


}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();



    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
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

    glPopMatrix();

    glutTimerFunc(20, display2, 0);
    glFlush();

}

void dis()
{
    glutDisplayFunc(display);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Call four objects");
    glutDisplayFunc(dis);
    init();

    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}

