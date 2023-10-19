#include <GL/glut.h>

void drawBuilding() {
    // Draw the building
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5); // Gray color for the building
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(-1.0, 1.0);
    glEnd();

    // Draw the front door
    glColor3f(0.4, 0.2, 0.0); // Brown color for the door
    glBegin(GL_QUADS);
    glVertex2f(-0.2, -1.0);
    glVertex2f(0.2, -1.0);
    glVertex2f(0.2, 0.2);
    glVertex2f(-0.2, 0.2);
    glEnd();

    // Draw the windows
    glColor3f(0.2, 0.7, 0.8); // Blue color for the windows

    // Loop to draw windows on each floor
    for (float y = 0.3; y < 1.0; y += 0.4) {
        glBegin(GL_QUADS);
        glVertex2f(-0.8, y);
        glVertex2f(-0.6, y);
        glVertex2f(-0.6, y + 0.2);
        glVertex2f(-0.8, y + 0.2);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(0.6, y);
        glVertex2f(0.8, y);
        glVertex2f(0.8, y + 0.2);
        glVertex2f(0.6, y + 0.2);
        glEnd();
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    drawBuilding();
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Five-Story Building");

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
