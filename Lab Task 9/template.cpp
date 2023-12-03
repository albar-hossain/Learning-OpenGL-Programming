#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if (position < -1.0)
        position = 1.0f;

    position -= speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}



void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);




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



    glFlush();
}

void handleMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON)
    {
        speed += 0.1f;
    }
    if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.1f;
    }
    glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
    case 'a':
        speed = 0.0f;
        break;
    case 'w':
        speed = 0.1f;
        break;
        glutPostRedisplay();
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(display);


    glutTimerFunc(100, update, 0);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
}

