#include<cstdio>
#include <iostream>
#include<math.h>
#include <GL/gl.h>
#include <GL/glut.h>

void dis();
void display();
void DayScene();

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

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

void update(int value) {

    // if (position < -1.0)
    //     position = 1.0f;

    // position -= speed;

    glutPostRedisplay();


    glutTimerFunc(1500, update, 0);
}
void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    DayScene();
}

void DayScene() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    //Drawing sky
    glBegin(GL_QUADS);
    glColor3ub(72, 202, 226); // Sky rgb(72, 202, 226)
    glVertex2f(-5, 4.05);
    glVertex2f(5, 4.05);
    glVertex2f(5, 10);
    glVertex2f(-5, 10);
    glEnd();

    //drawing sun
    circle(0.7, 4.18, 9.13, 243, 207, 35); //rgb(243, 207, 35)

    //Drawing building
    glBegin(GL_QUADS);
    glColor3ub(4, 138, 193); // Building rgb(4, 138, 193)
    glVertex2f(-2.25, 4.19);
    glVertex2f(0.22, 4.19);
    glVertex2f(0.23, 9.6);
    glVertex2f(-2.23, 9.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4, 138, 193); // Building rgb(4, 138, 193)
    glVertex2f(0.20, 4.18);
    glVertex2f(1.92, 4.18);
    glVertex2f(1.92, 8.16);
    glVertex2f(0.20, 8.16);
    glEnd();

    //Road 
    glBegin(GL_POLYGON);           // These vertices form a closed polygon
    glColor3ub(102, 100, 111);// road rgb(102, 100, 111)
    glVertex2f(-5, 2.25);
    glVertex2f(5, 2.72);
    glVertex2f(5, 0);
    glVertex2f(-5, 0);
    glEnd();

    //Zebra Crossing
    //glBegin(GL_POLYGON);
    glBegin(GL_QUADS);          // These vertices form a closed polygon
    glColor3ub(245, 235, 230);//Crossing rgb(245, 235, 230)
    glVertex2f(-5, 0.15);
    glVertex2f(-0.38, 0.19);
    glVertex2f(-1.01, 0.83);
    glVertex2f(-5, 0.79);
    glEnd();

    //Zebra Crossing
    //glBegin(GL_POLYGON);
    glBegin(GL_QUADS);           // These vertices form a closed polygon
    glColor3ub(245, 235, 230);//Crossing rgb(245, 235, 230)
    glVertex2f(-5, 1);
    glVertex2f(-1.22, 1.04);
    glVertex2f(-1.73, 1.56);
    glVertex2f(-5, 1.5);
    glEnd();

    //Zebra Crossing
    //glBegin(GL_POLYGON);
    glBegin(GL_QUADS);
    glColor3ub(245, 235, 230);//Crossing rgb(245, 235, 230)
    glVertex2f(-5, 1.65);
    glVertex2f(-1.91, 1.75);
    glVertex2f(-2.33, 2.17);
    glVertex2f(-5, 2.04);
    glEnd();


    //Drawing Curb
    glBegin(GL_QUADS);
    glColor3ub(61, 51, 46); // Dark rgb(61, 51, 46)
    glVertex2f(-5, 2.25);
    glVertex2f(5, 2.72);
    glVertex2f(5, 3);
    glVertex2f(-5, 2.5);
    glEnd();

    //Drawing Sidewalk
    glBegin(GL_QUADS);
    glColor3ub(105, 101, 116); // Sidewalk rgb(105, 101, 116)
    glVertex2f(5, 4.05);
    glVertex2f(5, 4.18);
    glVertex2f(-5, 4.19);
    glVertex2f(-5, 4.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(198, 204, 216); // Sidewalk rgb(198, 204, 216)
    glVertex2f(-5, 2.5);
    glVertex2f(5, 3);
    glVertex2f(5, 4.05);
    glVertex2f(-5, 4.05);
    glEnd();

    //Traffic light
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.83, 3.82);
    glVertex2f(-3.2, 3.82);
    glVertex2f(-3.19, 2.97);
    glVertex2f(-3.84, 2.98);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.83, 3.82);
    glVertex2f(-3.2, 3.82);
    glVertex2f(-3.3, 3.92);
    glVertex2f(-3.74, 3.92);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.74, 3.92);
    glVertex2f(-3.3, 3.92);
    glVertex2f(-3.3, 5.91);
    glVertex2f(-3.75, 5.91);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.84, 5.9);
    glVertex2f(-3.2, 5.9);
    glVertex2f(-3.2, 6.13);
    glVertex2f(-3.84, 6.13);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-4.19, 6.13);
    glVertex2f(-2.85, 6.13);
    glVertex2f(-2.85, 9);
    glVertex2f(-4.19, 9);
    glEnd();



    //Draw Lights
    circle(0.37, -3.53, 8.4, 241, 5, 5); //rgb(241, 5, 5)
    circle(0.37, -3.53, 7.5, 243, 207, 35); //rgb(243, 207, 35)
    circle(0.37, -3.53, 6.58, 101, 166, 4); //rgb(101, 166, 4)

    glFlush(); // Render now

}

void NightScene() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    //Drawing sky
    glBegin(GL_QUADS);
    glColor3ub(19, 24, 98); // Sky rgb(19,24,98)
    glVertex2f(-5, 4.05);
    glVertex2f(5, 4.05);
    glVertex2f(5, 10);
    glVertex2f(-5, 10);
    glEnd();

    //drawing moon
    circle(0.7, 4.18, 9.13, 220, 220, 220); //rgb(220,220,220)

    //Drawing building
    glBegin(GL_QUADS);
    glColor3ub(4, 138, 193); // Building rgb(4, 138, 193)
    glVertex2f(-2.25, 4.19);
    glVertex2f(0.22, 4.19);
    glVertex2f(0.23, 9.6);
    glVertex2f(-2.23, 9.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4, 138, 193); // Building rgb(4, 138, 193)
    glVertex2f(0.20, 4.18);
    glVertex2f(1.92, 4.18);
    glVertex2f(1.92, 8.16);
    glVertex2f(0.20, 8.16);
    glEnd();


    //Road 

    glBegin(GL_POLYGON);           // These vertices form a closed polygon
    glColor3ub(102, 100, 111);// road rgb(102, 100, 111)
    glVertex2f(-5, 2.25);
    glVertex2f(5, 2.72);
    glVertex2f(5, 0);
    glVertex2f(-5, 0);
    glEnd();

    //Zebra Crossing
    //glBegin(GL_POLYGON);
    glBegin(GL_QUADS);          // These vertices form a closed polygon
    glColor3ub(245, 235, 230);//Crossing rgb(245, 235, 230)
    glVertex2f(-5, 0.15);
    glVertex2f(-0.38, 0.19);
    glVertex2f(-1.01, 0.83);
    glVertex2f(-5, 0.79);
    glEnd();

    //Zebra Crossing
    //glBegin(GL_POLYGON);
    glBegin(GL_QUADS);           // These vertices form a closed polygon
    glColor3ub(245, 235, 230);//Crossing rgb(245, 235, 230)
    glVertex2f(-5, 1);
    glVertex2f(-1.22, 1.04);
    glVertex2f(-1.73, 1.56);
    glVertex2f(-5, 1.5);
    glEnd();

    //Zebra Crossing
    //glBegin(GL_POLYGON);
    glBegin(GL_QUADS);
    glColor3ub(245, 235, 230);//Crossing rgb(245, 235, 230)
    glVertex2f(-5, 1.65);
    glVertex2f(-1.91, 1.75);
    glVertex2f(-2.33, 2.17);
    glVertex2f(-5, 2.04);
    glEnd();


    //Drawing Curb
    glBegin(GL_QUADS);
    glColor3ub(61, 51, 46); // Dark rgb(61, 51, 46)
    glVertex2f(-5, 2.25);
    glVertex2f(5, 2.72);
    glVertex2f(5, 3);
    glVertex2f(-5, 2.5);
    glEnd();

    //Drawing Sidewalk
    glBegin(GL_QUADS);
    glColor3ub(105, 101, 116); // Sidewalk rgb(105, 101, 116)
    glVertex2f(5, 4.05);
    glVertex2f(5, 4.18);
    glVertex2f(-5, 4.19);
    glVertex2f(-5, 4.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(198, 204, 216); // Sidewalk rgb(198, 204, 216)
    glVertex2f(-5, 2.5);
    glVertex2f(5, 3);
    glVertex2f(5, 4.05);
    glVertex2f(-5, 4.05);
    glEnd();

    //Traffic light
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.83, 3.82);
    glVertex2f(-3.2, 3.82);
    glVertex2f(-3.19, 2.97);
    glVertex2f(-3.84, 2.98);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.83, 3.82);
    glVertex2f(-3.2, 3.82);
    glVertex2f(-3.3, 3.92);
    glVertex2f(-3.74, 3.92);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.74, 3.92);
    glVertex2f(-3.3, 3.92);
    glVertex2f(-3.3, 5.91);
    glVertex2f(-3.75, 5.91);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51); // Traffic rgb(51, 51, 51)
    glVertex2f(-3.84, 5.9);
    glVertex2f(-3.2, 5.9);
    glVertex2f(-3.2, 6.13);
    glVertex2f(-3.84, 6.13);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-4.19, 6.13);
    glVertex2f(-2.85, 6.13);
    glVertex2f(-2.85, 9);
    glVertex2f(-4.19, 9);
    glEnd();

    //Draw Lights
    circle(0.37, -3.53, 8.4, 241, 5, 5); //rgb(241, 5, 5)
    circle(0.37, -3.53, 7.5, 243, 207, 35); //rgb(243, 207, 35)
    circle(0.37, -3.53, 6.58, 101, 166, 4); //rgb(101, 166, 4)

    glFlush(); // Render now

}

void disback(int val) {
    glutDisplayFunc(display);
}

void display5() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    NightScene();
    glutTimerFunc(10, disback, 0);
    glFlush();
}

void display4(int val) {
    glutDisplayFunc(display5);
}

void display3() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    DayScene();
    glutTimerFunc(1500, display4, 0);
    glFlush();
}

void display2(int val) {

    glutDisplayFunc(display3);

}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    DayScene();
    glutTimerFunc(1500, display2, 0);
    glFlush();
}

void dis() {
    glutDisplayFunc(display);
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
    glutCreateWindow("Day & Night Loop Animation");
    gluOrtho2D(-5, 5, 0, 10);
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutMainLoop();
    return 0;
}

