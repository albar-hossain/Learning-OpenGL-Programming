#include <GL/glut.h>
#include <iostream>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


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
    //Antenna top
    glBegin(GL_QUADS);
    glColor3ub(142, 99, 63); //

    glVertex2f(5.52085, 12.64831);//j1
    glVertex2f(5.51921, 12.1929);//k1
    glVertex2f(5.54875, 12.19425);//h1
    glVertex2f(5.54912, 12.64755);//i1
    glEnd();

    //Antenna mid
    glBegin(GL_QUADS);
    glColor3ub(113, 84, 63); // Building rgb(131, 91, 59)

    glVertex2f(5.51921, 12.1929);//k1
    glVertex2f(5.48451, 12.15581);//l1
    glVertex2f(5.58, 11.74);//f1

    glVertex2f(5.54875, 12.19425);//h1
    glEnd();

    //Antennabottom
    glBegin(GL_QUADS);
    glColor3ub(75, 49, 46); // Building rgb(131, 91, 59)

    glVertex2f(5.48451, 12.15581);//l1
    glVertex2f(5.487, 11.74127);//m1
    glVertex2f(5.58, 11.74);//f1
    glColor3ub(115, 82, 55);
    glVertex2f(5.57833, 12.15752);//g1
    glEnd();

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
        glVertex2f(x, 11.24);
        glVertex2f(x + 0.06, 11.24);
        glColor3ub(88, 51, 46); // Building light lines rgb(88, 51, 46)S
        glVertex2f(x + 0.06, 5.32);
        glVertex2f(x, 5.32);
        glEnd();
    }
}

void wayneTower() {

    //top tower
    glBegin(GL_QUADS);
    glColor3ub(115, 74, 52); // Building rgb(115, 74, 52)
    glVertex2f(-3.52, 11.38);
    glColor3ub(80, 60, 51); // Building rgb(88, 64, 51)
    glVertex2f(-4.4, 12.6);
    glVertex2f(-4.4, 10.92);
    //glVertex2f(-5.1, 10.94);
    glVertex2f(-3.52, 10.6);
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

    glColor3ub(56, 40, 41); // Building rgb(56, 40, 41)
    glVertex2f(-4.1, 7.45);
    glVertex2f(-4.1, 10.94);
    glColor3ub(34, 28, 32); // Building rgb(56, 40, 41)
    glVertex2f(-3, 10.6);
    // glVertex2f(-3, 9.8);
    glVertex2f(-3, 7.45);

    // glVertex2f(-3, 7.37);
    // glVertex2f(-4.1, 7.37);
    glVertex2f(-6, 10.86);
    glEnd();


}


void batmanBuilding() {

    //building body
    glBegin(GL_POLYGON);
    glColor3ub(18, 14, 16); // Building rgb(18, 14, 16)
    glVertex2f(-6, 2.8196);
    glVertex2f(-6, 0);
    glVertex2f(-3.33, 0);
    glColor3ub(32, 24, 25); // Building rgb(32, 24, 25)
    glVertex2f(-1.32857, 1.61253);
    glVertex2f(-1.32902, 4.95088);
    glEnd();
    //building mid ledge
    glBegin(GL_POLYGON);
    glColor3ub(13, 20, 26); // Building rgb(18, 14, 16)
    glVertex2f(-3.72, 0);
    glVertex2f(-3.53812, 0.00917);
    glColor3ub(13, 20, 26); // Building rgb(32, 24, 25)
    glVertex2f(-0.89972, 2.18233);
    glVertex2f(-0.87452, 2.33164);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(18, 14, 16); // Building rgb(18, 14, 16)
    glVertex2f(-4.08156, 0.00368);
    glVertex2f(-3.72, 0);
    glColor3ub(32, 24, 25); // Building rgb(32, 24, 25)
    glVertex2f(-0.87452, 2.33164);
    glVertex2f(-1.31265, 2.39414);
    glEnd();





    //bottom ledge
    glBegin(GL_QUADS);
    glColor3ub(21, 16, 16); // Building rgb(21, 16, 16)
    glVertex2f(-2.2, 0);
    glVertex2f(-1.51, 0);
    glColor3ub(33, 22, 23); // Building rgb(33, 22, 23)
    glVertex2f(-0.57942, 0.87968);
    glVertex2f(-0.6014, 1.50076);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4, 11, 19); // Building rgb(4, 11, 19)
    glVertex2f(-3.33, 0);
    glVertex2f(-2.2, 0);
    glColor3ub(9, 15, 18); // Building rgb(9, 15, 18)
    glVertex2f(-0.6014, 1.50076);
    glVertex2f(-1.32857, 1.61253);
    glEnd();


}
void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    buildingWithVerticleWindows();
    wayneTower();
    batmanBuilding();


    glFlush(); // Render now

}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT

    glutInitWindowSize(750, 1040);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 750) / 2,
        (glutGet(GLUT_SCREEN_HEIGHT) - 1061) / 2);
    glutCreateWindow("Batman"); // Create a window with the given title
    // Set the window's initial width & height
    gluOrtho2D(-6, 6, 0, 17);
    glutDisplayFunc(display); // Register display callback handler for window re-paint


    // /* Maximize window using Windows API after glutCreateWindow() has been called */

    // HWND win_handle = FindWindow(0, "Batman");
    // if (!win_handle)
    // {
    //     printf("!!! Failed FindWindow\n");
    //     return -1;
    // }

    // SetWindowLong(win_handle, GWL_STYLE, (GetWindowLong(win_handle, GWL_STYLE) | WS_MAXIMIZE));
    // ShowWindowAsync(win_handle, SW_SHOWMAXIMIZED);

    // /* Activate GLUT main loop */

    // glutMainLoop();

    //glutFullScreen();

    glutMainLoop(); // Enter the event-processing loop
    return 0;
}