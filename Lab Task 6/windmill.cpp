#include <GL/glut.h>
#include <cmath>

// Global variables
GLfloat angle = 0.0f;  // Initial rotation angle

// Function to draw a blade
void drawBlade() {
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(-0.2f, 0.5f);
    glEnd();
}

// Function to draw the windmill
void drawWindmill() {
    glPushMatrix();

    // Draw the base
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(0.1f, -0.5f);
    glVertex2f(0.2f, -1.0f);
    glVertex2f(-0.2f, -1.0f);
    glEnd();

    // Draw the pole
    glColor3f(0.4f, 0.4f, 0.4f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, -0.5f);
    glVertex2f(0.05f, -0.5f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(-0.05f, 0.5f);
    glEnd();

    // Draw three blades
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glColor3f(0.8f, 0.8f, 0.9f);
    for (int i = 0; i < 3; ++i) {
        glPushMatrix();
        glRotatef(i * 120.0f, 0.0f, 0.0f, 1.0f);
        drawBlade();
        glPopMatrix();
    }

    glPopMatrix();
}

// Function to handle all drawings
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the windmill
    drawWindmill();

    glutSwapBuffers();
}

// Function to handle updates and animations
void update(int value) {
    angle += 2.0f;  // Update the rotation angle
    if (angle > 360.0f) {
        angle -= 360.0f;
    }

    glutPostRedisplay();  // Request a redraw
    glutTimerFunc(16, update, 0);  // Schedule the next update
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("Windmill with Rotating Blades");
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);  // Start the update timer
    glClearColor(0.6f, 0.9f, 1.0f, 1.0f);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glutMainLoop();

    return 0;
}
