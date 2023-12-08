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

void buildingWithVerticleWindows() {

    //Drawing Tall building right side main structure
    glBegin(GL_QUADS);
    glColor3ub(21, 22, 25); // Building rgb(21, 22, 25)
    glVertex2f(6, 11.4);
    glVertex2f(6, 5);
    glVertex2f(4.28, 5);
    glVertex2f(4.28, 11.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 44, 41); // Building rgb(67, 44, 41)
    glVertex2f(5.92, 11.59);
    glVertex2f(5.92, 11.4);
    glVertex2f(5.69, 11.38);
    glVertex2f(5.7, 11.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36, 28, 33); // Building rgb(36, 28, 33)
    glVertex2f(5.69, 11.38);
    glVertex2f(5.7, 11.75);
    glVertex2f(5.26, 11.73);
    glVertex2f(5.27, 11.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36, 28, 33); // Building rgb(36, 28, 33)
    glVertex2f(5.27, 11.38);
    glVertex2f(5.27, 11.57);
    glVertex2f(4.95, 11.55);
    glVertex2f(4.94, 11.37);
    glEnd();

    //Amtenna
    // glBegin(GL_POLYGON);
    // glColor3ub(131, 91, 59); // Building rgb(131, 91, 59)

    // glVertex2f(5.58, 11.74);
    // glVertex2f(5.58, 12.16);
    // glVertex2f(5.55, 12.19);
    // glVertex2f(5.55, 12.65);
    // glVertex2f(5.52, 12.65);
    // glVertex2f(5.52, 12.19);
    // glVertex2f(5.49, 12.16);
    // glVertex2f(5.49, 11.74);
    // glEnd();



    //drawing lines //22 total lines //0.08 difference

    // glBegin(GL_QUADS);
    // glColor3ub(188, 158, 115); // Building light lines rgb(188, 158, 115)
    // glVertex2f(4.4, 11.24);
    // glVertex2f(4.4, 7.2);
    // glVertex2f(4.34, 7.2);
    // glVertex2f(4.34, 11.24);
    // glEnd();


    for (float x = 4.34; x <= 5.92; x += 0.09)
    {

        glBegin(GL_QUADS);
        glColor3ub(188, 158, 115); // Building light lines rgb(188, 158, 115)
        glVertex2f(x + 0.06, 11.24);
        glVertex2f(x + 0.06, 5.32);
        glVertex2f(x, 5.32);
        glVertex2f(x, 11.24);
        glEnd();
    }
}

void wayneTower() {



    //top tower
    glBegin(GL_POLYGON);
    glColor3ub(88, 64, 51); // Building rgb(88, 64, 51)
    glVertex2f(-3.52, 11.38);
    glVertex2f(-4.4, 12.6);
    glVertex2f(-4.4, 10.92);
    glVertex2f(-5.1, 10.94);
    glVertex2f(-3.52, 10.86);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(35, 30, 36); // Building rgb(35, 30, 36)
    glVertex2f(-6, 10.86);
    glVertex2f(-4.4, 10.92);
    glVertex2f(-4.4, 12.6);
    glVertex2f(-5.2, 12.8);
    glVertex2f(-6, 12.51);
    glEnd();

    //Drawing  main structure
    glBegin(GL_QUADS);
    glColor3ub(31, 28, 33); // Building rgb(31, 28, 33)
    glVertex2f(-6, 7.45);
    glVertex2f(-4.1, 7.45);
    glVertex2f(-4.1, 10.94);
    glVertex2f(-6, 10.86);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(69, 44, 40); // Building rgb(69, 44, 40)
    glVertex2f(-4.1, 10.94);
    glVertex2f(-3, 10.8);
    // glVertex2f(-3, 9.8);
    glVertex2f(-3, 7.45);
    glVertex2f(-4.1, 7.45);
    // glVertex2f(-3, 7.37);
    // glVertex2f(-4.1, 7.37);
    glVertex2f(-6, 10.86);
    glEnd();


}
void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    buildingWithVerticleWindows();
    wayneTower();


    glFlush(); // Render now

}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Batman"); // Create a window with the given title
    // Set the window's initial width & height
    gluOrtho2D(-6, 6, 0, 17);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}