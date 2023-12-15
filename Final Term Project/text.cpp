#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0); // Set text color to white

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Position the text in the window
    glTranslatef(-2.0, 0.0, 0.0);

    // Scale the text
    glScalef(1, 1, 1);

    // Display the string
    glutStrokeString(GLUT_STROKE_ROMAN, reinterpret_cast<const unsigned char*>("Hello, GLUT!"));

    glutSwapBuffers();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, 0, height);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("FreeGLUT Stroke String Example");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(0.0, 0.0, 0.0, 0.0); // Set background color to black

    glutMainLoop();

    return 0;
}