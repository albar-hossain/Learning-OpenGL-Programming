#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;
void dis();
void display();

void update(int value) {

    if (position < -1.5)
        position = 1.0f;

    position -= speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}


void update1(int value) {

    if (position1 > 1.0)
        position1 = -1.0f;

    position1 += speed;

    glutPostRedisplay();


    glutTimerFunc(100, update1, 0);
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void disback(int val)
{
    glutDisplayFunc(display);
}
void display5()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f, position, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glEnd();
    glPopMatrix();
    //glutTimerFunc(1500,disback,0);
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
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glEnd();
    glPopMatrix();
    glutTimerFunc(1500, display4, 0);
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
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.2f, 0.2f);
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
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(dis);
    init();

    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutMainLoop();
    return 0;
}

