#include <GL/glut.h>
#include <iostream>
#include<math.h>

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    //Drawing Trunk
    glBegin(GL_QUADS);
    glColor3ub(114, 92, 66);
    glVertex2i(-14, 0);
    glVertex2i(-14, 6);
    glVertex2i(-12, 6);
    glVertex2i(-12, 0);
    glEnd();
    //Draw Tree
    circle(2.83, -10, 8, 66, 105, 47);
    circle(2.83, -16, 8, 66, 105, 47);
    circle(3.64, -13, 9, 66, 105, 47);



    //BENCH

     //Drawing support of bench
    glBegin(GL_QUADS);
    glColor3ub(127, 130, 116);
    glVertex2f(-29.1, 5);
    glVertex2f(-29.11, 2.92);
    glVertex2f(-28.8, 2.92);
    glVertex2f(-28.8, 5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(127, 130, 116);
    glVertex2f(-23, 5);
    glVertex2f(-23, 2.91);
    glVertex2f(-22.7, 2.91);
    glVertex2f(-22.7, 5);
    glEnd();

    //Drawing legs of bench
    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-29.1, 0.92);
    glVertex2f(-29, 1.13);
    glVertex2f(-29, 1.69);
    glVertex2f(-29.4, 1.69);
    glVertex2f(-29.4, 0.92);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-22.98, 1.13);
    glVertex2f(-22.88, 0.92);
    glVertex2f(-22.59, 0.92);
    glVertex2f(-22.58, 1.69);
    glVertex2f(-22.98, 1.69);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-30, 1.9);
    glVertex2f(-30, 0);
    glVertex2f(-29.67, 0);
    glVertex2f(-29.55, 0.25);
    glVertex2f(-29.56, 1.69);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-30, 1.9);
    glVertex2f(-29.56, 1.69);
    glVertex2f(-22.46, 1.69);
    glVertex2f(-22, 1.9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2f(-22, 1.9);
    glVertex2f(-22, 0);
    glVertex2f(-22.34, 0);
    glVertex2f(-22.46, 0.25);
    glVertex2f(-22.46, 1.69);
    glEnd();



    //Drawing the planks
    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 3);
    glVertex2f(-22.3, 3);
    glVertex2f(-22.3, 3.3);
    glVertex2f(-29.5, 3.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 3.5);
    glVertex2f(-22.3, 3.5);
    glVertex2f(-22.3, 3.8);
    glVertex2f(-29.5, 3.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 4);
    glVertex2f(-22.3, 4);
    glVertex2f(-22.3, 4.3);
    glVertex2f(-29.5, 4.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-29.5, 4.5);
    glVertex2f(-22.3, 4.5);
    glVertex2f(-22.3, 4.8);
    glVertex2f(-29.5, 4.8);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-30.34, 2.07);
    glVertex2f(-30.34, 1.9);
    glVertex2f(-21.54, 1.9);
    glVertex2f(-21.53, 2.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2f(-30.34, 2.07);
    glVertex2f(-21.53, 2.07);
    glVertex2f(-22.23, 2.91);
    glVertex2f(-29.57, 2.92);
    glEnd();


    //BUILDING
    //Drawing front of building
    glBegin(GL_QUADS);
    glColor3ub(127, 130, 116);
    glVertex2i(5, 0);
    glVertex2i(-5, 0);
    glVertex2i(-5, 15);
    glVertex2i(5, 15);
    glEnd();

    //Drawing roof of building
    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2i(5, 15);
    glVertex2i(8, 16);
    glVertex2i(-2, 16);
    glVertex2i(-5, 15);
    glEnd();
    //Drawing side of building
    glBegin(GL_POLYGON);
    glColor3ub(127, 130, 116);
    glVertex2i(5, 0);
    glVertex2i(8, 1);
    glVertex2i(8, 16);
    glVertex2i(5, 15);
    glEnd();

    //Drawing the windows
    for (int y = 3; y <= 14; y += 3)
    {
        glBegin(GL_QUADS);
        glColor3ub(145, 184, 219);
        glVertex2i(4, y);
        glVertex2i(-4, y);
        glVertex2i(-4, y + 2);
        glVertex2i(4, y + 2);
        glEnd();

        glLineWidth(3.0);
        glBegin(GL_LINE_LOOP);
        glColor3ub(0, 0, 0);
        glVertex2i(4, y);
        glVertex2i(-4, y);
        glVertex2i(-4, y + 2);
        glVertex2i(4, y + 2);
        glEnd();
    }

    //Drawing the doors
    glBegin(GL_QUADS);
    glColor3ub(64, 47, 29);
    glVertex2i(3, 0);
    glVertex2i(-3, 0);
    glVertex2i(-3, 2);
    glVertex2i(3, 2);
    glEnd();

    //Door Outlines
    glLineWidth(3.0);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex2i(-3, 2);
    glVertex2i(3, 2);
    glVertex2i(3, 0);
    glVertex2i(-3, 0);
    glVertex2i(-3, 2);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(0, 0);
    glVertex2i(0, 2);
    glEnd();

    //Building Outlines
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2i(-5, 0);
    glVertex2i(5, 0);
    glVertex2i(5, 15);
    glVertex2i(8, 16);
    glVertex2i(-2, 16);
    glVertex2i(-5, 15);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(-5, 15);
    glVertex2i(5, 15);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2i(5, 0);
    glVertex2i(8, 1);
    glVertex2i(8, 16);
    glVertex2i(5, 15);
    glEnd();

    //LAMP POST
    //light
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor4ub(250, 250, 51, 0);
    glVertex2i(20, 14);
    glVertex2i(18, 14);
    glVertex2i(15, 0);
    glVertex2i(22, 0);
    glEnd();

    //pole
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2i(23, 0);
    glVertex2i(23, 1);
    glVertex2i(20, 1);
    glVertex2i(20, 0);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2f(0.47f, 0.92f);
    glVertex2f(0.47f, 0.97f);
    glVertex2f(0.43f, 0.97f);
    glVertex2f(0.43f, 0.92f);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal

    glVertex2i(21, 1);
    glVertex2i(22, 1);
    glVertex2i(22, 13);
    glVertex2i(21, 13);
    glVertex2i(21, 1);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2i(22, 13);
    glVertex2i(20, 15);
    glVertex2i(20, 14);
    glVertex2i(21, 13);
    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(69, 58, 60);//metal
    glVertex2i(20, 14);
    glVertex2i(20, 15);
    glVertex2i(18, 15);
    glVertex2i(18, 14);
    glEnd();

    //ROAD
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
    glColor3ub(68, 68, 71);//asphalt
    glVertex2i(-3, 0);
    glVertex2i(3, 0);
    glVertex2i(-4, -10);
    glVertex2i(-12, -10);
    glEnd();

    glFlush(); // Render now

}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(700, 700);
    glutCreateWindow("Task 4"); // Create a window with the given title
    // Set the window's initial width & height
    gluOrtho2D(-35, 30, -5, 25);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}