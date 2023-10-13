#include <GL/glut.h>
#include <iostream>

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);

    glVertex2f(-5.5, 6.5);//j
    glVertex2f(-10, 2);//c
    glVertex2f(-10, -2);//D
    glVertex2f(-5.5, -6.5);//e
    glVertex2f(5.5, -6.5);//F
    glVertex2f(10, -2);//g
    glVertex2f(10, 2);//h
    glVertex2f(5.5, 6.5);//I

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);

    glVertex2f(-5.5, 5.5);//k
    glVertex2f(-9.5, 1.5);//L
    glVertex2f(-9.5, -1.5);//M
    glVertex2f(-5.5, -5.5);//N
    glVertex2f(5.5, -5.5);//O
    glVertex2f(9.5, -1.5);//P
    glVertex2f(9.5, 1.5);//Q
    glVertex2f(5.5, 5.5);//R

    glEnd();


    glLineWidth(20);
    glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-8, 2);//u1
    glVertex2f(-8, -2);//w1
    glVertex2f(8, -2);
    glVertex2f(8, 2);

    //2
    glVertex2f(-7.5, 2.5);
    glVertex2f(-7.5, -2.5);
    glVertex2f(7.5, -2.5);
    glVertex2f(7.5, 2.5);

    //3
    glVertex2f(-7, 3);
    glVertex2f(-7, -3);
    glVertex2f(7, -3);
    glVertex2f(7, 3);

    //4
    glVertex2f(-6.5, 3.5);
    glVertex2f(-6.5, -3.5);
    glVertex2f(6.5, -3.5);
    glVertex2f(6.5, 3.5);

    //5
    glVertex2f(-6, 4);
    glVertex2f(-6, -4);
    glVertex2f(6, -4);
    glVertex2f(6, 4);

    //6
    glVertex2f(-5.5, 4.5);
    glVertex2f(-5.5, -4.5);
    glVertex2f(5.5, -4.5);
    glVertex2f(5.5, 4.5);


    //7

    glVertex2f(-5, 4.5);
    glVertex2f(-5, -4.5);
    glVertex2f(5, -4.5);
    glVertex2f(5, 4.5);

    //8//check after

    glVertex2f(-4.5, 4.5);
    glVertex2f(-4.5, -4.5);
    glVertex2f(4.5, -4.5);
    glVertex2f(4.5, 4.5);

    //9
    glVertex2f(-4, 4.5);
    glVertex2f(-4, 3.5);
    glVertex2f(4, 4.5);
    glVertex2f(4, 3.5);

    //10
    glVertex2f(-4, 1.5);
    glVertex2f(-4, -5);
    glVertex2f(4, 1.5);
    glVertex2f(4, -5);

    //11
    glVertex2f(-3.5, 1);
    glVertex2f(-3.5, -3.5);

    glVertex2f(3.5, 1);
    glVertex2f(3.5, -3.5);

    //13
    glVertex2f(-3, 1);
    glVertex2f(-3, -3);

    glVertex2f(3, 1);
    glVertex2f(3, -3);

    //14
    glVertex2f(-3, 1);
    glVertex2f(-3, -2.5);
    glVertex2f(3, 1);
    glVertex2f(3, -2.5);

    //15
    glVertex2f(-2.5, 1.5);
    glVertex2f(-2.5, -2);

    glVertex2f(2.5, 1.5);
    glVertex2f(2.5, -2);

    //16
    glVertex2f(-2, 1.5);
    glVertex2f(-2, -2);

    glVertex2f(2.5, 1.5);
    glVertex2f(2.5, -2);

    //16
    glVertex2f(-2, 1.5);
    glVertex2f(-2, -2);
    glVertex2f(2, 1.5);
    glVertex2f(2, -2);

    //17 ears
    glVertex2f(-1.5, 5);
    glVertex2f(-1.5, -2.5);
    glVertex2f(1.5, 5);
    glVertex2f(1.5, -2.5);

    //18 head
    glVertex2f(-1, 4);
    glVertex2f(-1, -3.5);
    glVertex2f(1, 4);
    glVertex2f(1, -3.5);

    //19 head
    glVertex2f(-0.5, 4);
    glVertex2f(-0.5, -4.5);
    glVertex2f(0.5, 4);
    glVertex2f(0.5, -4.5);

    //20 head
    glVertex2f(-0, 4);
    glVertex2f(-0, -5);
    glVertex2f(0, 4);
    glVertex2f(0, -5);

    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(920, 720);
    glutCreateWindow("Batman"); // Create a window with the given title

    gluOrtho2D(-30, 30, -30, 30);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}