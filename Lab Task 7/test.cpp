

#include <cstdio>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include <iostream>
#include<stdio.h>
#include<string.h>
# define PI           3.14159265358979323846

using namespace std;

GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 2;
GLfloat speed2 = 4;
float xn = 0;
float yq;
float xm;
float yp;
float s, t;
float c, v;
float m, n;
float k, l, q, w;
float _rain = 0.0;

bool rainday = false;


//For Display TEXT
const int font1 = (int)GLUT_BITMAP_TIMES_ROMAN_24;
const int font2 = (int)GLUT_BITMAP_HELVETICA_18;
const int font3 = (int)GLUT_BITMAP_8_BY_13;


void update(int value) {

    if (position1 > 1200)
        position1 = -10;

    position1 += speed;


    if (position2 > 1200)
        position2 = -10;

    position2 += speed2;


    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void fuchka(int a, int b)
{

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.20);

    glVertex2i(a + 240, b + 340);

    glVertex2i(a + 240, b + 370);
    glVertex2i(a + 120, b + 340);
    glVertex2i(a + 120, b + 370);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex2i(a + 120, b + 280);
    glVertex2i(a + 240, b + 280);
    glVertex2i(a + 240, b + 320);
    glVertex2i(a + 120, b + 320);

    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    char string[] = "Fuchka Corner";
    glRasterPos2f(a + 125, b + 300);
    int len = strlen(string);
    for (int i = 0;i < len;i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, string[i]);
    }
}
void grass(int a, int b)
{
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.90, 0.0);
    glVertex2i(a + 50, b + 0);
    glVertex2i(a + 50, b + 30);
    glVertex2i(a + 35, b + 5);
    glVertex2i(a + 25, b + 35);
    glVertex2i(a + 15, b + 6);
    glVertex2i(a + 15, b + 32);
    glVertex2i(a + 10, b + 0);
    glVertex2i(a + 10, b + 35);
    glVertex2i(a + 0, b + 0);
    glEnd();
}


void drawSquare(GLint x1, GLint x2, GLint x3, GLint x4)
{
    glBegin(GL_QUADS);
    glColor3ub(139, 0, 0);
    glVertex2i(x1, 347);
    glVertex2i(x2, 310);
    glVertex2i(x3, 310);
    glVertex2i(x4, 347);
    glEnd();

}
void day(int x, int y)
{
    //sky
    glBegin(GL_QUADS);

    glColor3ub(102, 102, 255);
    glVertex2i(q + 0, w + 500);
    glVertex2i(q + 0, w + 700);
    glVertex2i(q + 1200, w + 700);
    glVertex2i(q + 1200, w + 500);
    glEnd();
    //sun
    int i7;
    GLint x7 = 1050;
    GLint y7 = 640;
    GLfloat radius7 = 30;
    int triangleAmount7 = 30;

    GLfloat twicePi7 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 102);
    glVertex2f(q + x7, w + y7);
    for (i7 = 0; i7 <= triangleAmount7; i7++)
    {
        glVertex2f(
            q + x7 + (radius7 * cos(i7 * twicePi7 / triangleAmount7)),
            w + y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
        );
    }
    glEnd();
}


void roaddevider(GLint x1, GLint x2, GLint x3, GLint x4)
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2i(x1, 155);
    glVertex2i(x2, 145);
    glVertex2i(x3, 145);
    glVertex2i(x4, 155);
    glEnd();
}
void manus(int x, int y)
{

    //Head
    glBegin(GL_QUADS);
    glColor3d(220, 200, 50);
    glVertex2i(x + 1, y + 18);
    glVertex2i(x + 8, y + 18);
    glVertex2i(x + 8, y + 22);
    glVertex2i(x + 1, y + 22);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x, y + 22);
    glVertex2i(x + 10, y + 22);
    glVertex2i(x + 10, y + 24);
    glVertex2i(x, y + 24);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x, y + 24);
    glVertex2i(x + 9, y + 24);
    glVertex2i(x + 9, y + 26);
    glVertex2i(x, y + 26);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 3, y + 26);
    glVertex2i(x + 7, y + 26);
    glVertex2i(x + 7, y + 28);
    glVertex2i(x + 3, y + 28);
    glEnd();
    //black
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(x + 5, y + 24);
    glVertex2i(x + 6, y + 24);
    glVertex2i(x + 6, y + 28);
    glVertex2i(x + 5, y + 28);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 6, y + 22);
    glVertex2i(x + 7, y + 22);
    glVertex2i(x + 7, y + 24);
    glVertex2i(x + 6, y + 24);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 5, y + 20);
    glVertex2i(x + 9, y + 20);
    glVertex2i(x + 9, y + 22);
    glVertex2i(x + 5, y + 22);
    glEnd();

    //hair
    glBegin(GL_QUADS);
    glColor3f(0.120, 0.20, 0.0);
    glVertex2i(x - 1, y + 20);
    glVertex2i(x, y + 20);
    glVertex2i(x, y + 26);
    glVertex2i(x - 1, y + 26);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x, y + 20);
    glVertex2i(x + 1, y + 20);
    glVertex2i(x + 1, y + 22);
    glVertex2i(x, y + 22);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x, y + 26);
    glVertex2i(x + 3, y + 26);
    glVertex2i(x + 3, y + 28);
    glVertex2i(x, y + 28);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 1, y + 22);
    glVertex2i(x + 2, y + 22);
    glVertex2i(x + 2, y + 26);
    glVertex2i(x + 1, y + 26);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 2, y + 22);
    glVertex2i(x + 3, y + 22);
    glVertex2i(x + 3, y + 24);
    glVertex2i(x + 2, y + 24);
    glEnd();

    //red tshirt
    glBegin(GL_QUADS);
    glColor3f(255.0, 0.0, 0.0);
    glVertex2i(x - 2, y + 7);
    glVertex2i(x + 10, y + 7);
    glVertex2i(x + 10, y + 12);
    glVertex2i(x - 2, y + 12);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x - 1, y + 12);
    glVertex2i(x + 9, y + 12);
    glVertex2i(x + 9, y + 15);
    glVertex2i(x - 1, y + 15);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x, y + 15);
    glVertex2i(x + 6, y + 15);
    glVertex2i(x + 6, y + 18);
    glVertex2i(x, y + 18);
    glEnd();

    //cap
    glBegin(GL_QUADS);
    glVertex2i(x, y + 28);
    glVertex2i(x + 9, y + 28);
    glVertex2i(x + 9, y + 30);
    glVertex2i(x, y + 30);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 1, y + 30);
    glVertex2i(x + 6, y + 30);
    glVertex2i(x + 6, y + 32);
    glVertex2i(x + 1, y + 32);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 255.0, 0.0);
    glVertex2i(x + 3, y + 32);
    glVertex2i(x + 4, y + 32);
    glVertex2f(x + 4, y + 32.5);
    glVertex2f(x + 3, y + 32.5);
    glEnd();

    //Galise
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 10.0);
    glVertex2i(x + 3, y + 3);
    glVertex2i(x + 3, y + 5);
    glVertex2i(x, y + 5);
    glVertex2i(x, y + 3);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(x + 8, y + 3);
    glVertex2i(x + 8, y + 5);
    glVertex2i(x + 5, y + 5);
    glVertex2i(x + 5, y + 3);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(x + 8, y + 5);
    glVertex2i(x + 8, y + 9);
    glVertex2i(x, y + 9);
    glVertex2i(x, y + 5);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 7, y + 9);
    glVertex2i(x + 7, y + 12);
    glVertex2i(x + 1, y + 12);
    glVertex2i(x + 1, y + 9);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 6, y + 12);
    glVertex2i(x + 6, y + 13);
    glVertex2i(x + 2, y + 13);
    glVertex2i(x + 2, y + 12);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 3, y + 13);
    glVertex2i(x + 3, y + 18);
    glVertex2i(x + 2, y + 18);
    glVertex2i(x + 2, y + 13);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 6, y + 13);
    glVertex2i(x + 6, y + 15);
    glVertex2i(x + 5, y + 15);
    glVertex2i(x + 5, y + 13);
    glEnd();
    //Button
    glBegin(GL_QUADS);
    glColor3f(0.0, 5.0, 0.0);
    glVertex2i(x + 6, y + 9);
    glVertex2i(x + 6, y + 10);
    glVertex2i(x + 5, y + 10);
    glVertex2i(x + 5, y + 9);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 3, y + 9);
    glVertex2i(x + 3, y + 10);
    glVertex2i(x + 2, y + 10);
    glVertex2i(x + 2, y + 9);
    glEnd();

    //Shoe
    glBegin(GL_QUADS);
    glColor3f(55.0, 0.0, 0.0);
    glVertex2i(x + 2, y + 1);
    glVertex2i(x + 2, y + 3);
    glVertex2i(x - 1, y + 3);
    glVertex2i(x - 1, y + 1);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 2, y - 1);
    glVertex2i(x + 2, y + 1);
    glVertex2i(x - 2, y + 1);
    glVertex2i(x - 2, y - 1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(55.0, 0.0, 0.0);
    glVertex2i(x + 6, y + 1);
    glVertex2i(x + 6, y + 3);
    glVertex2i(x + 9, y + 3);
    glVertex2i(x + 9, y + 1);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x + 6, y - 1);
    glVertex2i(x + 6, y + 1);
    glVertex2i(x + 10, y + 1);
    glVertex2i(x + 10, y - 1);
    glEnd();

    //Hands
    glBegin(GL_QUADS);
    glColor3f(255.0, 255.0, 255.0);
    glVertex2i(x, y + 7);
    glVertex2i(x, y + 11);
    glVertex2i(x - 2, y + 11);
    glVertex2i(x - 2, y + 7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(255.0, 255.0, 255.0);
    glVertex2i(x + 8, y + 7);
    glVertex2i(x + 8, y + 11);
    glVertex2i(x + 10, y + 11);
    glVertex2i(x + 10, y + 7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(255.0, 255.0, 255.0);
    glVertex2i(x + 7, y + 8);
    glVertex2i(x + 7, y + 9);
    glVertex2i(x + 8, y + 9);
    glVertex2i(x + 8, y + 8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(255.0, 255.0, 255.0);
    glVertex2i(x, y + 8);
    glVertex2i(x, y + 9);
    glVertex2i(x + 1, y + 9);
    glVertex2i(x + 1, y + 8);
    glEnd();


}

void wheel(int a, int b)
{
    int i;
    GLint x = a + 20;
    GLint y = b + 65;
    GLfloat radius = 12;
    int triangleAmount = 10;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
    glVertex2f(x, y);
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}
void car1(int a, int b)
{
    glBegin(GL_QUADS);
    glColor3f(0.50, 0.0, 0.0);
    glVertex2i(a + 300, b + 90);
    glVertex2i(a + 450, b + 90);
    glVertex2i(a + 450, b + 120);
    glVertex2i(a + 300, b + 120);

    glVertex2i(a + 300, b + 120);
    glVertex2i(a + 340, b + 145);
    glVertex2i(a + 380, b + 145);
    glVertex2i(a + 410, b + 120);


    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(a + 302, b + 122);
    glVertex2i(a + 342, b + 143);
    glVertex2i(a + 378, b + 143);
    glVertex2i(a + 406, b + 122);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.50, 0.0, 0.0);
    glVertex2i(a + 360, b + 120);
    glVertex2i(a + 360, b + 145);
    glVertex2i(a + 355, b + 145);
    glVertex2i(a + 355, b + 120);
    glEnd();



}
void car2(int a, int b)
{
    glBegin(GL_QUADS);
    glColor3f(245.0, 242.0, 108.0);
    glVertex2i(a + 300, b + 90);
    glVertex2i(a + 450, b + 90);
    glVertex2i(a + 450, b + 120);
    glVertex2i(a + 300, b + 120);

    glVertex2i(a + 300, b + 120);
    glVertex2i(a + 340, b + 145);
    glVertex2i(a + 380, b + 145);
    glVertex2i(a + 410, b + 120);


    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(a + 302, b + 122);
    glVertex2i(a + 342, b + 143);
    glVertex2i(a + 378, b + 143);
    glVertex2i(a + 406, b + 122);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(245.0, 242.0, 108.0);
    glVertex2i(a + 360, b + 120);
    glVertex2i(a + 360, b + 145);
    glVertex2i(a + 355, b + 145);
    glVertex2i(a + 355, b + 120);
    glEnd();



}
void rickshaw(int a, int b)
{

    glBegin(GL_POLYGON);
    glColor3f(0.0, 255.0, 22.0);


    glVertex2i(a + 232, b + 208);
    glVertex2i(a + 228, b + 180);  //leg
    glVertex2i(a + 235, b + 180);
    glVertex2i(a + 242, b + 208);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(a + 200, b + 200);
    glVertex2i(a + 260, b + 200);
    glVertex2i(a + 260, b + 202);
    glVertex2i(a + 200, b + 202);

    glVertex2i(a + 260, b + 210);
    glVertex2i(a + 265, b + 210);
    glVertex2i(a + 265, b + 170);
    glVertex2i(a + 270, b + 170);

    glVertex2i(a + 200, b + 205);
    glVertex2i(a + 260, b + 205);
    glVertex2i(a + 260, b + 207);
    glVertex2i(a + 200, b + 207);

    glVertex2i(a + 200, b + 200);
    glVertex2i(a + 200, b + 203);
    glVertex2i(a + 230, b + 170);
    glVertex2i(a + 233, b + 173);

    glVertex2i(a + 260, b + 200);
    glVertex2i(a + 260, b + 203);
    glVertex2i(a + 230, b + 170);
    glVertex2i(a + 233, b + 173);

    glVertex2i(a + 200, b + 213);
    glVertex2i(a + 205, b + 213);
    glVertex2i(a + 195, b + 170);
    glVertex2i(a + 200, b + 173);

    glVertex2i(a + 250, b + 170);
    glVertex2i(a + 230, b + 175);
    glVertex2i(a + 280, b + 175);
    glVertex2i(a + 280, b + 170);


    glVertex2i(a + 250, b + 170);
    glVertex2i(a + 230, b + 180);
    glVertex2i(a + 250, b + 180);
    glVertex2i(a + 230, b + 170);

    glVertex2i(a + 200, b + 213);
    glVertex2i(a + 215, b + 213);
    glVertex2i(a + 200, b + 216);
    glVertex2i(a + 215, b + 216);


    glColor3f(0.0, 330.0, 0.0);
    glVertex2i(a + 210, b + 213);
    glVertex2i(a + 240, b + 216);
    glVertex2i(a + 210, b + 220);
    glVertex2i(a + 235, b + 220);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.50);
    glVertex2i(a + 267, b + 192);
    glVertex2i(a + 292, b + 192);
    glVertex2i(a + 302, b + 202);
    glVertex2i(a + 302, b + 212);
    glVertex2i(a + 292, b + 212);
    glVertex2i(a + 292, b + 202);
    glVertex2i(a + 267, b + 202);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.50, 0.0, 0.0);
    glVertex2i(a + 287, b + 227);
    glVertex2i(a + 302, b + 227);
    glVertex2i(a + 307, b + 255);
    glVertex2i(a + 290, b + 255);
    glVertex2i(a + 275, b + 260);
    glVertex2i(a + 275, b + 255);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.90, 0.0);

    glVertex2i(a + 292, b + 227);
    glVertex2i(a + 294, b + 227);
    glVertex2i(a + 292, b + 210);
    glVertex2i(a + 294, b + 210);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.90, 0.0);

    glVertex2i(a + 288, b + 227);
    glVertex2i(a + 290, b + 227);
    glVertex2i(a + 292, b + 210);
    glVertex2i(a + 294, b + 210);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.90, 0.0);

    glVertex2i(a + 296, b + 227);
    glVertex2i(a + 300, b + 227);
    glVertex2i(a + 292, b + 210);
    glVertex2i(a + 294, b + 210);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.90);

    glVertex2i(a + 296, b + 220);
    glVertex2i(a + 300, b + 220);
    glVertex2i(a + 296, b + 210);
    glVertex2i(a + 300, b + 210);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 2.0, 0.0);


    glVertex2i(a + 235, b + 238);
    glVertex2i(a + 235, b + 230);
    glVertex2i(a + 245, b + 230);
    glVertex2i(a + 245, b + 238);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(255.0, 255.0, 255.0);


    glVertex2i(a + 235, b + 230);
    glVertex2i(a + 228, b + 208);
    glVertex2i(a + 252, b + 208);
    glVertex2i(a + 245, b + 230);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 255.0, 22.0);


    glVertex2i(a + 240, b + 208);
    glVertex2i(a + 238, b + 180);  //leg
    glVertex2i(a + 245, b + 180);
    glVertex2i(a + 248, b + 208);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);


    glVertex2i(a + 235, b + 242);
    glVertex2i(a + 235, b + 238);
    glVertex2i(a + 245, b + 238);
    glVertex2i(a + 245, b + 242);
    glEnd();

}
void lamp(int a, int b)
{
    int i15;
    GLint x15 = 915;
    GLint y15 = 370;
    GLfloat radius15 = 15;
    int triangleAmount15 = 30;

    GLfloat twicePi15 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(96, 96, 96);
    glVertex2f(a + x15, b + y15);
    for (i15 = 0; i15 <= triangleAmount15; i15++)
    {
        glVertex2f(
            a + x15 + (radius15 * cos(i15 * twicePi15 / triangleAmount15)),
            b + y15 + (radius15 * sin(i15 * twicePi15 / triangleAmount15))
        );
    }
    glEnd();




    int i13;
    GLint x13 = 515;
    GLint y13 = 370;
    GLfloat radius13 = 15;
    int triangleAmount13 = 30;

    GLfloat twicePi13 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(96, 96, 96);
    glVertex2f(a + x13, b + y13);
    for (i13 = 0; i13 <= triangleAmount13; i13++)
    {
        glVertex2f(
            a + x13 + (radius13 * cos(i13 * twicePi13 / triangleAmount13)),
            b + y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13))
        );
    }
    glEnd();

    int i14;
    GLint x14 = 715;
    GLint y14 = 370;
    GLfloat radius14 = 15;
    int triangleAmount14 = 30;

    GLfloat twicePi14 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(96, 96, 96);
    glVertex2f(a + x14, b + y14);
    for (i14 = 0; i14 <= triangleAmount14; i14++)
    {
        glVertex2f(
            a + x14 + (radius14 * cos(i14 * twicePi14 / triangleAmount14)),
            b + y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14))
        );
    }
    glEnd();
    int i12;
    GLint x12 = 315;
    GLint y12 = 370;
    GLfloat radius12 = 15;
    int triangleAmount12 = 30;

    GLfloat twicePi12 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(96, 96, 96);
    glVertex2f(a + x12, b + y12);
    for (i12 = 0; i12 <= triangleAmount12; i12++)
    {
        glVertex2f(
            a + x12 + (radius12 * cos(i12 * twicePi12 / triangleAmount12)),
            b + y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
        );
    }
    glEnd();
    int i11;
    GLint x11 = 115;
    GLint y11 = 370;
    GLfloat radius11 = 15;
    int triangleAmount11 = 30;

    GLfloat twicePi11 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(96, 96, 96);
    glVertex2f(a + x11, b + y11);
    for (i11 = 0; i11 <= triangleAmount11; i11++)
    {
        glVertex2f(
            a + x11 + (radius11 * cos(i11 * twicePi11 / triangleAmount11)),
            b + y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
        );
    }
    glEnd();



}
void tree(int x, int y)
{

    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(x + 445, y + 340);
    glVertex2i(x + 492, y + 440);
    glVertex2i(x + 540, y + 340);
    glEnd();

    glColor3f(0, 0.8, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2i(x + 445, y + 360);
    glVertex2i(x + 492, y + 460);
    glVertex2i(x + 540, y + 360);
    glEnd();

    glColor3f(0.4, 0.5, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(x + 497, y + 340);
    glVertex2i(x + 486, y + 340);
    glVertex2i(x + 486, y + 250);
    glVertex2i(x + 497, y + 250);
    glEnd();


}
void car(int a, int b)
{


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2i(a, b + 60);
    glVertex2i(a + 200, b + 60);
    glVertex2i(a + 215, b + 75);
    glVertex2i(a + 215, b + 120);
    glVertex2i(a + 200, b + 120);
    glVertex2i(a, b + 120);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(a, b + 80);
    glVertex2i(a + 200, b + 80);
    glVertex2i(a + 215, b + 95);
    glVertex2i(a + 215, b + 115);
    glVertex2i(a + 200, b + 100);
    glVertex2i(a + 200, b + 110);
    glVertex2i(a, b + 110);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(a + 200, b + 65);
    glVertex2i(a + 215, b + 80);

    glVertex2i(a + 200, b + 70);
    glVertex2i(a + 215, b + 85);

    glVertex2i(a + 200, b + 75);
    glVertex2i(a + 215, b + 90);

    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    char string[] = "AIUB";
    glRasterPos2f(a + 75, b + 85);
    int len = strlen(string);
    for (int i = 0;i < len;i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    }
    glFlush();


}
void carmove()
{
    if (xn > 1200.0)
    {
        xn = -850.0;
    }
    xn += 0.001;


    if (xm < -600.0)
    {
        xm = 900.0;
    }
    xm -= 0.0001;

    if (m > 15.0)
    {
        m = 0.0;
    }
    m += 0.001;

    if (k > 1200.0)
    {
        k = -5.0;
    }
    k += 0.0001;

}


void myDisplay(void)
{
    //glClear(GL_COLOR_BUFFER_BIT);
   //glLoadIdentity();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255, 255, 255);
    glPointSize(5.0);
    //moon
    int i8;
    GLint x8 = 1100;
    GLint y8 = 640;
    GLfloat radius8 = 30;
    int triangleAmount8 = 30;

    GLfloat twicePi8 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(224, 224, 224);
    glVertex2f(x8, y8);
    for (i8 = 0; i8 <= triangleAmount8; i8++)
    {
        glVertex2f(
            x8 + (radius8 * cos(i8 * twicePi8 / triangleAmount8)),
            y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8))
        );
    }
    glEnd();


    day(q, w);
    //background
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2i(0, 350);
    glVertex2i(0, 500);
    glVertex2i(1200, 500);
    glVertex2i(1200, 350);
    glEnd();
    /*
        glBegin(GL_QUADS);
        glColor3ub(102, 255, 102);
        glVertex2i(0,350);
        glVertex2i(0,250);
        glVertex2i(1200,250);
        glVertex2i(1200,350);
        glEnd();
        */
    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2i(0, 450);
    glVertex2i(0, 300);                  //green field
    glVertex2i(1200, 300);
    glVertex2i(1200, 450);
    glEnd();


    //stars
    glColor3ub(102, 102, 255);
    glBegin(GL_POINTS);
    glVertex2i(250, 650);
    glVertex2i(260, 640);
    glVertex2i(220, 670);
    glVertex2i(210, 660);

    glVertex2i(280, 650);
    glVertex2i(290, 640);
    glVertex2i(250, 670);
    glVertex2i(240, 660);

    glVertex2i(320, 650);
    glVertex2i(310, 640);
    glVertex2i(280, 670);
    glVertex2i(270, 660);

    glVertex2i(350, 650);
    glVertex2i(360, 640);
    glVertex2i(320, 670);
    glVertex2i(310, 660);

    glVertex2i(380, 650);
    glVertex2i(390, 640);
    glVertex2i(350, 670);
    glVertex2i(340, 660);

    glVertex2i(420, 650);
    glVertex2i(410, 640);
    glVertex2i(480, 670);
    glVertex2i(470, 660);

    glVertex2i(650, 650);
    glVertex2i(660, 640);
    glVertex2i(620, 670);
    glVertex2i(610, 660);

    glVertex2i(680, 650);
    glVertex2i(690, 640);
    glVertex2i(650, 670);
    glVertex2i(640, 660);

    glVertex2i(720, 650);
    glVertex2i(710, 640);
    glVertex2i(780, 670);
    glVertex2i(770, 660);

    glEnd();



    //cloud
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    int i;
    GLint x = 50;
    GLint y = 640;
    GLfloat radius = 30;
    int triangleAmount = 30;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(224, 224, 224);
    glVertex2f(x, y);
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    int i3;
    GLint x3 = 90;
    GLint y3 = 660;
    GLfloat radius3 = 30;
    int triangleAmount3 = 30;

    GLfloat twicePi3 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(224, 224, 224);
    glVertex2f(x3, y3);
    for (i3 = 0; i3 <= triangleAmount; i3++)
    {
        glVertex2f(
            x3 + (radius3 * cos(i3 * twicePi3 / triangleAmount3)),
            y3 + (radius3 * sin(i3 * twicePi3 / triangleAmount3))
        );
    }
    glEnd();

    int i4;
    GLint x4 = 140;
    GLint y4 = 660;
    GLfloat radius4 = 30;
    int triangleAmount4 = 30;

    GLfloat twicePi4 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(224, 224, 224);
    glVertex2f(x4, y4);
    for (i4 = 0; i4 <= triangleAmount4; i4++)
    {
        glVertex2f(
            x4 + (radius4 * cos(i4 * twicePi4 / triangleAmount4)),
            y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))
        );
    }
    glEnd();

    int i5;
    GLint x5 = 90;
    GLint y5 = 620;
    GLfloat radius5 = 30;
    int triangleAmount5 = 30;

    GLfloat twicePi5 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(224, 224, 224);
    glVertex2f(x5, y5);
    for (i5 = 0; i5 <= triangleAmount5; i5++)
    {
        glVertex2f(
            x5 + (radius5 * cos(i5 * twicePi5 / triangleAmount5)),
            y5 + (radius5 * sin(i5 * twicePi5 / triangleAmount5))
        );
    }
    glEnd();

    int i6;
    GLint x6 = 130;
    GLint y6 = 630;
    GLfloat radius6 = 30;
    int triangleAmount6 = 30;

    GLfloat twicePi6 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(224, 224, 224);
    glVertex2f(x6, y6);
    for (i6 = 0; i6 <= triangleAmount6; i6++)
    {
        glVertex2f(
            x6 + (radius6 * cos(i6 * twicePi6 / triangleAmount6)),
            y6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6))
        );
    }
    glEnd();
    glPopMatrix();

    //bird

    glPushMatrix();
    glTranslatef(position2, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(180, 650);
    glVertex2i(200, 640);
    glVertex2i(180, 630);
    glVertex2i(200, 640);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(210, 650);
    glVertex2i(230, 640);
    glVertex2i(210, 630);
    glVertex2i(230, 640);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(190, 665);
    glVertex2i(210, 655);
    glVertex2i(190, 645);
    glVertex2i(210, 655);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(220, 665);
    glVertex2i(240, 655);
    glVertex2i(220, 645);
    glVertex2i(240, 655);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(250, 680);
    glVertex2i(270, 670);
    glVertex2i(250, 660);
    glVertex2i(270, 670);
    glEnd();

    glPushMatrix();
    glTranslatef(+30, -30, 0);
    //glScalef(1.3, 1.3, 0);

    glPushMatrix();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(250, 680);
    glVertex2i(270, 670);
    glVertex2i(250, 660);
    glVertex2i(270, 670);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(+0, -60, 0);
    //glScalef(1.3, 1.3, 0);

    glPushMatrix();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(250, 680);
    glVertex2i(270, 670);
    glVertex2i(250, 660);
    glVertex2i(270, 670);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    //l1
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(550, 630);
    glVertex2i(550, 430);
    glVertex2i(450, 430);
    glVertex2i(450, 630);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 615);
    glVertex2i(450, 615);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 600);
    glVertex2i(450, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 585);
    glVertex2i(450, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 570);
    glVertex2i(450, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 555);
    glVertex2i(450, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 540);
    glVertex2i(450, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 525);
    glVertex2i(450, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 510);
    glVertex2i(450, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 495);
    glVertex2i(450, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 480);
    glVertex2i(450, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 465);
    glVertex2i(450, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 450);
    glVertex2i(450, 450);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(510, 630);
    glVertex2i(510, 430);
    glEnd();



    //r1
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(610, 630);
    glVertex2i(610, 430);
    glVertex2i(710, 430);
    glVertex2i(710, 630);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 615);
    glVertex2i(710, 615);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 600);
    glVertex2i(710, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 585);
    glVertex2i(710, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 570);
    glVertex2i(710, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 555);
    glVertex2i(710, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 540);
    glVertex2i(710, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 525);
    glVertex2i(710, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 510);
    glVertex2i(710, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 495);
    glVertex2i(710, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 480);
    glVertex2i(710, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 465);
    glVertex2i(710, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(610, 450);
    glVertex2i(710, 450);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(650, 630);
    glVertex2i(650, 430);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(710, 600);
    glVertex2i(710, 430);
    glEnd();

    //middle
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);
    glVertex2i(610, 630);
    glVertex2i(610, 430);
    glVertex2i(550, 430);
    glVertex2i(550, 630);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(550, 620);
    glVertex2i(550, 570);
    glVertex2i(610, 570);
    glVertex2i(610, 620);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 605);
    glVertex2i(610, 605);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(550, 588);
    glVertex2i(610, 588);
    glEnd();

    //r2
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(710, 600);
    glVertex2i(790, 610);
    glVertex2i(790, 430);
    glVertex2i(710, 430);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 610);
    glVertex2i(715, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 595);
    glVertex2i(710, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 580);
    glVertex2i(710, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 565);
    glVertex2i(710, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 550);
    glVertex2i(710, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 535);
    glVertex2i(710, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 520);
    glVertex2i(710, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 505);
    glVertex2i(710, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 490);
    glVertex2i(710, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 475);
    glVertex2i(710, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 460);
    glVertex2i(710, 450);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 610);
    glVertex2i(790, 430);
    glEnd();

    int i9;
    GLint x9 = 750;
    GLint y9 = 500;
    GLfloat radius9 = 30;
    int triangleAmount9 = 30;

    GLfloat twicePi9 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(128, 128, 128);
    glVertex2f(x9, y9);
    for (i9 = 0; i9 <= triangleAmount9; i9++)
    {
        glVertex2f(
            x9 + (radius9 * cos(i9 * twicePi9 / triangleAmount9)),
            y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
        );
    }
    glEnd();


    //r1.1
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(710, 600);
    glVertex2i(715, 600);
    glVertex2i(715, 430);
    glVertex2i(710, 430);
    glEnd();


    //r3
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(790, 610);
    glVertex2i(870, 600);
    glVertex2i(870, 430);
    glVertex2i(790, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 610);
    glVertex2i(870, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 595);
    glVertex2i(870, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 580);
    glVertex2i(870, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 565);
    glVertex2i(870, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 550);
    glVertex2i(870, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 535);
    glVertex2i(870, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 520);
    glVertex2i(870, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 505);
    glVertex2i(870, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 490);
    glVertex2i(870, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 475);
    glVertex2i(870, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(790, 460);
    glVertex2i(870, 450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(128, 128, 128);
    glVertex2i(800, 480);
    glVertex2i(825, 590);
    glVertex2i(850, 480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2i(800, 460);
    glVertex2i(850, 460);
    glVertex2i(850, 430);
    glVertex2i(800, 430);
    glEnd();

    //r2.1
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(790, 610);
    glVertex2i(795, 610);
    glVertex2i(795, 430);
    glVertex2i(790, 430);
    glEnd();

    //r4
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(870, 600);
    glVertex2i(880, 600);
    glVertex2i(880, 430);
    glVertex2i(870, 430);
    glEnd();

    //r5
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(880, 600);
    glVertex2i(960, 590);
    glVertex2i(960, 430);
    glVertex2i(880, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 590);
    glVertex2i(880, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 575);
    glVertex2i(880, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 560);
    glVertex2i(880, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 545);
    glVertex2i(880, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 530);
    glVertex2i(880, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 515);
    glVertex2i(880, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 500);
    glVertex2i(880, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 485);
    glVertex2i(880, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 470);
    glVertex2i(880, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 455);
    glVertex2i(880, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(960, 440);
    glVertex2i(880, 450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(128, 128, 128);
    glVertex2i(890, 480);
    glVertex2i(915, 590);
    glVertex2i(940, 480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2i(890, 460);
    glVertex2i(940, 460);
    glVertex2i(940, 430);
    glVertex2i(890, 430);
    glEnd();

    //r6
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(960, 580);
    glVertex2i(970, 580);
    glVertex2i(970, 430);
    glVertex2i(960, 430);
    glEnd();

    //r7
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(970, 580);
    glVertex2i(1050, 580);
    glVertex2i(1050, 430);
    glVertex2i(970, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 570);
    glVertex2i(1050, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 555);
    glVertex2i(1050, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 540);
    glVertex2i(1050, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 525);
    glVertex2i(1050, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 510);
    glVertex2i(1050, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 495);
    glVertex2i(1050, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 480);
    glVertex2i(1050, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 465);
    glVertex2i(1050, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(970, 450);
    glVertex2i(1050, 450);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(1005, 580);
    glVertex2i(1005, 430);
    glEnd();

    //l2
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(450, 600);
    glVertex2i(450, 430);
    glVertex2i(370, 430);
    glVertex2i(370, 610);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 610);
    glVertex2i(445, 600);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 595);
    glVertex2i(445, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 580);
    glVertex2i(445, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 565);
    glVertex2i(445, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 550);
    glVertex2i(445, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 535);
    glVertex2i(445, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 520);
    glVertex2i(445, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 505);
    glVertex2i(445, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 490);
    glVertex2i(445, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 475);
    glVertex2i(445, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 460);
    glVertex2i(445, 450);
    glEnd();

    int i10;
    GLint x10 = 410;
    GLint y10 = 500;
    GLfloat radius10 = 30;
    int triangleAmount10 = 30;

    GLfloat twicePi10 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(128, 128, 128);
    glVertex2f(x10, y10);
    for (i10 = 0; i10 <= triangleAmount10; i10++)
    {
        glVertex2f(
            x10 + (radius10 * cos(i10 * twicePi10 / triangleAmount10)),
            y10 + (radius10 * sin(i10 * twicePi10 / triangleAmount10))
        );
    }
    glEnd();

    //l1.1
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(450, 600);
    glVertex2i(445, 600);
    glVertex2i(445, 430);
    glVertex2i(450, 430);
    glEnd();


    //l3
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(370, 610);
    glVertex2i(370, 430);
    glVertex2i(290, 430);
    glVertex2i(290, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(290, 600);
    glVertex2i(365, 610);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 595);
    glVertex2i(290, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 580);
    glVertex2i(290, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 565);
    glVertex2i(290, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 550);
    glVertex2i(290, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 535);
    glVertex2i(290, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 520);
    glVertex2i(290, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 505);
    glVertex2i(290, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 490);
    glVertex2i(290, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 475);
    glVertex2i(290, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(365, 460);
    glVertex2i(290, 450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(128, 128, 128);
    glVertex2i(305, 480);
    glVertex2i(330, 590);
    glVertex2i(355, 480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2i(305, 460);
    glVertex2i(355, 460);
    glVertex2i(355, 430);
    glVertex2i(305, 430);
    glEnd();


    //l2.1
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(370, 610);
    glVertex2i(365, 610);
    glVertex2i(365, 430);
    glVertex2i(370, 430);
    glEnd();

    //l4
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(280, 600);
    glVertex2i(290, 600);
    glVertex2i(290, 430);
    glVertex2i(280, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(370, 610);
    glVertex2i(370, 430);
    glEnd();

    //l5
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(280, 600);
    glVertex2i(280, 430);
    glVertex2i(200, 430);
    glVertex2i(200, 590);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 590);
    glVertex2i(280, 600);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 575);
    glVertex2i(280, 585);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 560);
    glVertex2i(280, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 545);
    glVertex2i(280, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 530);
    glVertex2i(280, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 515);
    glVertex2i(280, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 500);
    glVertex2i(280, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 485);
    glVertex2i(280, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 470);
    glVertex2i(280, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 455);
    glVertex2i(280, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(200, 440);
    glVertex2i(280, 450);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(128, 128, 128);
    glVertex2i(210, 480);
    glVertex2i(235, 590);
    glVertex2i(260, 480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2i(210, 460);
    glVertex2i(260, 460);
    glVertex2i(260, 430);
    glVertex2i(210, 430);
    glEnd();

    //l6
    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2i(190, 580);
    glVertex2i(200, 580);
    glVertex2i(200, 430);
    glVertex2i(190, 430);
    glEnd();

    //l7
    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2i(190, 580);
    glVertex2i(190, 430);
    glVertex2i(110, 430);
    glVertex2i(110, 580);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(450, 600);
    glVertex2i(450, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 570);
    glVertex2i(190, 570);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 555);
    glVertex2i(190, 555);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 540);
    glVertex2i(190, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 525);
    glVertex2i(190, 525);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 510);
    glVertex2i(190, 510);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 495);
    glVertex2i(190, 495);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 480);
    glVertex2i(190, 480);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 465);
    glVertex2i(190, 465);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(110, 450);
    glVertex2i(190, 450);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(155, 580);
    glVertex2i(155, 430);
    glEnd();


    //left shiri
    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(360, 450);
    glVertex2i(110, 450);
    glVertex2i(110, 440);
    glVertex2i(360, 440);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(110, 440);
    glVertex2i(360, 440);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(340, 440);
    glVertex2i(100, 440);
    glVertex2i(100, 430);
    glVertex2i(340, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(100, 430);
    glVertex2i(340, 430);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(320, 430);
    glVertex2i(90, 430);
    glVertex2i(90, 420);
    glVertex2i(320, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(90, 420);
    glVertex2i(320, 420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(300, 420);
    glVertex2i(80, 420);
    glVertex2i(80, 410);
    glVertex2i(300, 410);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(80, 410);
    glVertex2i(300, 410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(280, 410);
    glVertex2i(70, 410);
    glVertex2i(70, 400);
    glVertex2i(280, 400);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(70, 400);
    glVertex2i(280, 400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(260, 400);
    glVertex2i(60, 400);
    glVertex2i(60, 390);
    glVertex2i(260, 390);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(60, 390);
    glVertex2i(260, 390);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(240, 390);
    glVertex2i(50, 390);
    glVertex2i(50, 380);
    glVertex2i(240, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(50, 380);
    glVertex2i(240, 380);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(163, 42, 42);
    glVertex2i(220, 380);
    glVertex2i(30, 380);
    glVertex2i(30, 370);
    glVertex2i(220, 370);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(30, 370);
    glVertex2i(220, 370);
    glEnd();

    //middle shiri

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(370, 450);
    glVertex2i(790, 450);
    glVertex2i(790, 440);
    glVertex2i(370, 440);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(370, 440);
    glVertex2i(790, 440);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(350, 440);
    glVertex2i(810, 440);
    glVertex2i(810, 430);
    glVertex2i(350, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(350, 430);
    glVertex2i(810, 430);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(330, 430);
    glVertex2i(830, 430);
    glVertex2i(830, 420);
    glVertex2i(330, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(330, 420);
    glVertex2i(830, 420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(310, 420);
    glVertex2i(850, 420);
    glVertex2i(850, 410);
    glVertex2i(310, 410);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(310, 410);
    glVertex2i(850, 410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(290, 410);
    glVertex2i(870, 410);
    glVertex2i(870, 400);
    glVertex2i(290, 400);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(290, 400);
    glVertex2i(870, 400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(270, 400);
    glVertex2i(890, 400);
    glVertex2i(890, 390);
    glVertex2i(270, 390);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(270, 390);
    glVertex2i(890, 390);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(250, 390);
    glVertex2i(910, 390);
    glVertex2i(910, 380);
    glVertex2i(250, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(250, 380);
    glVertex2i(910, 380);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(230, 380);
    glVertex2i(930, 380);
    glVertex2i(930, 370);
    glVertex2i(230, 370);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(230, 370);
    glVertex2i(930, 370);
    glEnd();

    //right shiri
    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(800, 450);
    glVertex2i(1050, 450);
    glVertex2i(1050, 440);
    glVertex2i(800, 440);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(800, 440);
    glVertex2i(1050, 440);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(820, 440);
    glVertex2i(1060, 440);
    glVertex2i(1060, 430);
    glVertex2i(820, 430);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(1060, 430);
    glVertex2i(820, 430);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(840, 430);
    glVertex2i(1070, 430);
    glVertex2i(1070, 420);
    glVertex2i(840, 420);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(840, 420);
    glVertex2i(1070, 420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(860, 420);
    glVertex2i(1080, 420);
    glVertex2i(1080, 410);
    glVertex2i(860, 410);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(860, 410);
    glVertex2i(1080, 410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(880, 410);
    glVertex2i(1090, 410);
    glVertex2i(1090, 400);
    glVertex2i(880, 400);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(1090, 400);
    glVertex2i(880, 400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(900, 400);
    glVertex2i(1100, 400);
    glVertex2i(1100, 390);
    glVertex2i(900, 390);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(900, 390);
    glVertex2i(1100, 390);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(165, 42, 42);
    glVertex2i(920, 390);
    glVertex2i(1110, 390);
    glVertex2i(1110, 380);
    glVertex2i(920, 380);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(920, 380);
    glVertex2i(1110, 380);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(163, 42, 42);
    glVertex2i(940, 380);
    glVertex2i(1120, 380);
    glVertex2i(1120, 370);
    glVertex2i(940, 370);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(32, 32, 32);
    glVertex2i(940, 370);
    glVertex2i(1120, 370);
    glEnd();


    //road
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2i(0, 20);
    glVertex2i(0, 30);
    glVertex2i(1200, 30);
    glVertex2i(1200, 20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2i(0, 130);
    glVertex2i(0, 140);
    glVertex2i(1200, 140);
    glVertex2i(1200, 130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2i(0, 75);
    glVertex2i(0, 85);
    glVertex2i(1200, 85);
    glVertex2i(1200, 75);
    glEnd();

    //flag
    glBegin(GL_QUADS);
    glColor3ub(160, 82, 45);
    glVertex2i(560, 430);
    glVertex2i(600, 430);
    glVertex2i(600, 390);
    glVertex2i(560, 390);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32, 32, 32);
    glVertex2i(565, 425);
    glVertex2i(595, 425);
    glVertex2i(595, 395);
    glVertex2i(565, 395);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160, 82, 45);
    glVertex2i(570, 420);
    glVertex2i(590, 420);
    glVertex2i(590, 400);
    glVertex2i(570, 400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32, 32, 32);
    glVertex2i(575, 415);
    glVertex2i(585, 415);
    glVertex2i(585, 405);
    glVertex2i(575, 405);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2i(578, 410);
    glVertex2i(578, 520);
    glVertex2i(583, 520);
    glVertex2i(583, 410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2i(583, 520);
    glVertex2i(630, 520);
    glVertex2i(630, 475);
    glVertex2i(583, 475);
    glEnd();

    //circle
    int i2;
    GLint x2 = 604;
    GLint y2 = 497;
    GLfloat radius2 = 10;
    int triangleAmount2 = 30;

    GLfloat twicePi2 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);
    glVertex2f(x2, y2);
    for (i2 = 0; i2 <= triangleAmount2; i2++)
    {
        glVertex2f(
            x2 + (radius2 * cos(i2 * twicePi2 / triangleAmount2)),
            y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
    glEnd();

    //tree
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(50, 350);
    glVertex2i(70, 380);
    glVertex2i(90, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(50, 340);
    glVertex2i(70, 370);
    glVertex2i(90, 340);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224, 224, 224);
    glVertex2i(65, 340);
    glVertex2i(75, 340);
    glVertex2i(75, 310);
    glVertex2i(65, 310);
    glEnd();

    //lamp
    glBegin(GL_QUADS);
    glColor3ub(32, 32, 32);
    glVertex2i(110, 360);
    glVertex2i(120, 360);
    glVertex2i(120, 310);
    glVertex2i(110, 310);
    glEnd();

    int i11;
    GLint x11 = 115;
    GLint y11 = 370;
    GLfloat radius11 = 15;
    int triangleAmount11 = 30;

    GLfloat twicePi11 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 255, 47);
    glVertex2f(x11, y11);
    for (i11 = 0; i11 <= triangleAmount11; i11++)
    {
        glVertex2f(
            x11 + (radius11 * cos(i11 * twicePi11 / triangleAmount11)),
            y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
        );
    }
    glEnd();

    //tree2

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(250, 350);
    glVertex2i(270, 380);
    glVertex2i(290, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(250, 340);
    glVertex2i(270, 370);
    glVertex2i(290, 340);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224, 224, 224);
    glVertex2i(265, 340);
    glVertex2i(275, 340);
    glVertex2i(275, 310);
    glVertex2i(265, 310);
    glEnd();

    //lamp2
    glBegin(GL_QUADS);
    glColor3ub(32, 32, 32);
    glVertex2i(310, 360);
    glVertex2i(320, 360);
    glVertex2i(320, 310);
    glVertex2i(310, 310);
    glEnd();

    int i12;
    GLint x12 = 315;
    GLint y12 = 370;
    GLfloat radius12 = 15;
    int triangleAmount12 = 30;

    GLfloat twicePi12 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 255, 47);
    glVertex2f(x12, y12);
    for (i12 = 0; i12 <= triangleAmount12; i12++)
    {
        glVertex2f(
            x12 + (radius12 * cos(i12 * twicePi12 / triangleAmount12)),
            y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
        );
    }
    glEnd();

    //tree3
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(450, 350);
    glVertex2i(470, 380);
    glVertex2i(490, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(450, 340);
    glVertex2i(470, 370);
    glVertex2i(490, 340);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224, 224, 224);
    glVertex2i(465, 340);
    glVertex2i(475, 340);
    glVertex2i(475, 310);
    glVertex2i(465, 310);
    glEnd();

    //lamp3
    glBegin(GL_QUADS);
    glColor3ub(34, 34, 34);
    glVertex2i(510, 360);
    glVertex2i(520, 360);
    glVertex2i(520, 310);
    glVertex2i(510, 310);
    glEnd();

    int i13;
    GLint x13 = 515;
    GLint y13 = 370;
    GLfloat radius13 = 15;
    int triangleAmount13 = 30;

    GLfloat twicePi13 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 255, 47);
    glVertex2f(x13, y13);
    for (i13 = 0; i13 <= triangleAmount13; i13++)
    {
        glVertex2f(
            x13 + (radius13 * cos(i13 * twicePi13 / triangleAmount13)),
            y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13))
        );
    }
    glEnd();

    //tree4
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(650, 350);
    glVertex2i(670, 380);
    glVertex2i(690, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(650, 340);
    glVertex2i(670, 370);
    glVertex2i(690, 340);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224, 224, 224);
    glVertex2i(665, 340);
    glVertex2i(675, 340);
    glVertex2i(675, 310);
    glVertex2i(665, 310);
    glEnd();

    //lamp4
    glBegin(GL_QUADS);
    glColor3ub(34, 34, 34);
    glVertex2i(710, 360);
    glVertex2i(720, 360);
    glVertex2i(720, 310);
    glVertex2i(710, 310);
    glEnd();


    int i14;
    GLint x14 = 715;
    GLint y14 = 370;
    GLfloat radius14 = 15;
    int triangleAmount14 = 30;

    GLfloat twicePi14 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 255, 47);
    glVertex2f(x14, y14);
    for (i14 = 0; i14 <= triangleAmount14; i14++)
    {
        glVertex2f(
            x14 + (radius14 * cos(i14 * twicePi14 / triangleAmount14)),
            y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14))
        );
    }
    glEnd();

    //tree5
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(850, 350);
    glVertex2i(870, 380);
    glVertex2i(890, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2i(850, 340);
    glVertex2i(870, 370);
    glVertex2i(890, 340);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224, 224, 224);
    glVertex2i(865, 340);
    glVertex2i(875, 340);
    glVertex2i(875, 310);
    glVertex2i(865, 310);
    glEnd();

    //lamp5
    glBegin(GL_QUADS);
    glColor3ub(34, 34, 34);
    glVertex2i(910, 380);
    glVertex2i(920, 380);
    glVertex2i(920, 310);
    glVertex2i(910, 310);
    glEnd();

    for (c = 0; c <= 1200; c += 40)
    {
        grass(c, v + 290);
    }
    glBegin(GL_QUADS);
    glColor3ub(108, 122, 134);
    glVertex2i(0, 300);
    glVertex2i(0, 250);                  //footpath
    glVertex2i(1200, 250);
    glVertex2i(1200, 300);
    glEnd();



    //road
    glBegin(GL_QUADS);
    glColor3ub(106, 108, 109);
    glVertex2i(0, 250);
    glVertex2i(0, 50);
    glVertex2i(1200, 50);
    glVertex2i(1200, 250);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(0, 260);
    glVertex2i(0, 250);
    glVertex2i(1200, 250);
    glVertex2i(1200, 260);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(0, 50);
    glVertex2i(0, 30);
    glVertex2i(1200, 30);
    glVertex2i(1200, 50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2i(100, 50);                       //white border
    glVertex2i(100, 30);
    glVertex2i(200, 30);
    glVertex2i(200, 50);


    glVertex2i(300, 50);
    glVertex2i(300, 30);
    glVertex2i(400, 30);
    glVertex2i(400, 50);

    glVertex2i(500, 50);
    glVertex2i(500, 30);
    glVertex2i(600, 30);
    glVertex2i(600, 50);

    glVertex2i(700, 50);
    glVertex2i(700, 30);
    glVertex2i(800, 30);
    glVertex2i(800, 50);

    glVertex2i(900, 50);
    glVertex2i(900, 30);
    glVertex2i(1000, 30);
    glVertex2i(1000, 50);

    glVertex2i(1100, 50);
    glVertex2i(1100, 30);
    glVertex2i(1200, 30);
    glVertex2i(1200, 50);

    glVertex2i(0, 260);
    glVertex2i(0, 250);
    glVertex2i(50, 250);
    glVertex2i(50, 260);

    glVertex2i(100, 260);
    glVertex2i(100, 250);
    glVertex2i(150, 250);
    glVertex2i(150, 260);

    glVertex2i(200, 260);
    glVertex2i(200, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 260);

    glVertex2i(300, 260);
    glVertex2i(300, 250);
    glVertex2i(350, 250);
    glVertex2i(350, 260);

    glVertex2i(400, 260);
    glVertex2i(400, 250);
    glVertex2i(450, 250);
    glVertex2i(450, 260);

    glVertex2i(500, 260);
    glVertex2i(500, 250);
    glVertex2i(550, 250);
    glVertex2i(550, 260);

    glVertex2i(600, 260);
    glVertex2i(600, 250);
    glVertex2i(650, 250);
    glVertex2i(650, 260);

    glVertex2i(700, 260);
    glVertex2i(700, 250);
    glVertex2i(750, 250);
    glVertex2i(750, 260);

    glVertex2i(800, 260);
    glVertex2i(800, 250);
    glVertex2i(850, 250);
    glVertex2i(850, 260);

    glVertex2i(900, 260);
    glVertex2i(900, 250);
    glVertex2i(950, 250);
    glVertex2i(950, 260);

    glVertex2i(1000, 260);
    glVertex2i(1000, 250);
    glVertex2i(1050, 250);
    glVertex2i(1050, 260);

    glVertex2i(1100, 260);
    glVertex2i(1100, 250);
    glVertex2i(1150, 250);
    glVertex2i(1150, 260);


    glEnd();


    //Bariket
    glBegin(GL_QUADS);
    glColor3ub(139, 0, 0);
    glVertex2i(0, 310);
    glVertex2i(0, 300);
    glVertex2i(1200, 300);
    glVertex2i(1200, 310);

    glVertex2i(0, 350);
    glVertex2i(0, 347);
    glVertex2i(1200, 347);
    glVertex2i(1200, 350);

    glVertex2i(0, 347);
    glVertex2i(5, 310);
    glVertex2i(10, 310);
    glVertex2i(5, 347);
    glEnd();


    GLint xx;


    for (xx = 0; xx <= 1200; xx += 50)
    {

        drawSquare(xx, xx + 5, xx + 10, xx + 5);
        roaddevider(xx, xx, xx + 30, xx + 30);
    }


    car(xn, yq);
    car1(xn, yq);
    car2(xn + 400, yq - 30);
    wheel(xn, yq);
    wheel(xn + 25, yq);
    wheel(xn + 100, yq);
    wheel(xn + 125, yq);
    wheel(xn + 720, yq);
    wheel(xn + 800, yq);
    wheel(xn + 320, yq + 30);
    wheel(xn + 400, yq + 30);

    manus(m + 160, n + 316);
    fuchka(s, t);
    wheel(s + 120, t + 215);
    wheel(s + 185, t + 215);
    manus(k, l + 265);
    wheel(xm + 255, yp + 120);
    rickshaw(xm, yp);
    wheel(xm + 180, yp + 110);

    wheel(xm + 270, yp + 115);



    wheel(xm + 555, yp + 150);
    rickshaw(xm + 300, yp + 30);
    wheel(xm + 480, yp + 140);

    wheel(xm + 570, yp + 145);





    int i15;
    GLint x15 = 915;
    GLint y15 = 370;
    GLfloat radius15 = 15;
    int triangleAmount15 = 30;

    GLfloat twicePi15 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(173, 255, 47);
    glVertex2f(x15, y15);
    for (i15 = 0; i15 <= triangleAmount15; i15++)
    {
        glVertex2f(
            x15 + (radius15 * cos(i15 * twicePi15 / triangleAmount15)),
            y15 + (radius15 * sin(i15 * twicePi15 / triangleAmount15))
        );
    }
    glEnd();
    /*
    glColor3ub (0, 0, 255);
        GLfloat x=300.0f; GLfloat y=250.0f; GLfloat radius =10.0f;
        int i;
        int lineAmount = 100;
        //GLfloat radius = 0.8f; //radius
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_LINE_LOOP);
            for(i = 0; i <= lineAmount;i++) {
                glVertex2f(
                    x + (radius * cos(i *  twicePi / lineAmount)),
                    y + (radius* sin(i * twicePi / lineAmount))
                );
            }
        glEnd();


    */
    tree(s - 470, t + 50);
    tree(s + 700, t + 50);
    tree(s + 650, t + 50);
    for (c = 0; c <= 1200; c += 40)
    {
        grass(c, v);
    }
    lamp(q, w);
    glFlush();
}

void Rain(int value) {

    if (rainday) {

        _rain += 0.01f;

        glBegin(GL_POINTS);
        for (int i = 1;i <= 1200;i++)
        {
            int x = rand(), y = rand();
            x %= 1200; y %= 1000;
            glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);
            glVertex2d(x, y);
            glVertex2d(x + 5, y + 5);
            glEnd();
        }

        //glutPostRedisplay();
        glutTimerFunc(5, Rain, 0);

        glFlush();

    }
}

void handleKeypress(unsigned char key, int x, int y) {
    /*
        switch (key) {

    case 'a':
        speed = 0.0f;
        break;
    case 'w':
        speed += 0.1f;
        break;


    glutPostRedisplay();

        }
        */
    if (key == 'n')
    {
        q = 2000;
        glutPostRedisplay();
    }
    else if (key == 'b')
    {
        q = 0;
        glutPostRedisplay();
    }

    if (key == 'r')
    {

        rainday = true;
        Rain(_rain);
        //sndPlaySound("River.wav",SND_ASYNC|SND_LOOP);
        glutPostRedisplay();
        //sndPlaySound("River.wav",SND_MEMORY|SND_ASYNC);
    }
    else if (key == 'e')
    {
        rainday = false;
        //sndPlaySound(NULL,SND_ASYNC);
        glutPostRedisplay();
    }


}

void myInit(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0.0, 700.0);
}


void Sprint(float x, float y)
{
}

int main(int argc, char** argv)
{
    cout << endl << "*********Bangladesh parliament area ********" << endl << endl;
    cout << "Press R : For Rain " << endl << endl;
    cout << "Press E : For Stop Rain" << endl << endl;

    cout << "Press N : For Night " << endl << endl;
    cout << "Press B : For Day" << endl << endl;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 700);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("");
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(handleKeypress);
    glutIdleFunc(carmove);

    glutTimerFunc(1000, update, 0);
    myInit();
    init();
    glutMainLoop();
}
