#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>

using namespace std;


float BoxL = 0.0f; // Initial position of the box
float BoxR = 0.0f; // Initial position of the box

void BOXR() {

    glBegin(GL_QUADS);
    glColor3ub(178, 223, 245); //rgb(178, 223, 245)
    glVertex2f(-1, 1);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 1);
    glEnd();
}

void BOXL() {

    glBegin(GL_QUADS);
    glColor3ub(8, 95, 167); //rgb(8, 95, 167)
    glVertex2f(-1, 1);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 1);
    glEnd();


}
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1, 1, 1);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-5, 5, -5, 5);

    glPushMatrix();
    glTranslatef(BoxR, 0.0, 0.0); // Move the box horizontally
    BOXR();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(BoxL, 0.0, 0.0); // Move the box horizontally
    BOXL();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(BoxL + 5.54, 0.0, 0.0); // Move the box horizontally
    glTranslatef(BoxR + 5.54, 0.0, 0.0); // Move the box horizontally
    glPopMatrix();

    glutSwapBuffers();
}



void update(int value) {
    BoxL += 0.05f; // Adjust the speed of the box
    BoxR -= 0.05f; // Adjust the speed of the box

    if (BoxL > 6.5f) {
        BoxL = 0.0f; // Reset the box position when it goes out of the window
    }

    if (BoxR < -6.5f) {
        BoxR = 0.0f; // Reset the box position when it goes out of the window
    }

    glutPostRedisplay();
    glutTimerFunc(30, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Box");
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(drawScene);
    glutTimerFunc(20, update, 0);
    glutMainLoop();
    return 0;
}