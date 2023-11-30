#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>

void dis();
void display();

void update(int value) {
    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void disback(int val) {
    glutDisplayFunc(display);
}

void display5() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutTimerFunc(20, disback, 0);
    glFlush();
}

void display4(int val) {
    glutDisplayFunc(display5);
}

void display3() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    glutTimerFunc(20, display4, 0);
    glFlush();
}

void display2(int val) {

    glutDisplayFunc(display3);

}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutTimerFunc(20, display2, 0);
    glFlush();

}

void dis() {
    glutDisplayFunc(display);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1920, 1080);
    // glutInitWindowPosition(50, 50);
    glutCreateWindow("Animation");
    glutDisplayFunc(dis);
    init();
    glutTimerFunc(20, update, 0);
    glutMainLoop();
    return 0;
}