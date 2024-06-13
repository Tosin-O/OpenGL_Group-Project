#include <GLUT/glut.h>

void displayFunc() {
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glRotatef(2,  1,1,0);
    
    glBegin(GL_QUADS);
    glColor3f(  1.0,  0.0,  0.0 );
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f( 0.5, -0.5, -0.5);
    glVertex3f( 0.5,  0.5, -0.5);
    glVertex3f(-0.5,  0.5, -0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(  0.5,  0.0,  0.0 );
    glVertex3f(-0.5, -0.5,  0.5);
    glVertex3f( 0.5, -0.5,  0.5);
    glVertex3f( 0.5,  0.5,  0.5);
    glVertex3f(-0.5,  0.5,  0.5);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(  0.0,  1.0,  0.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5,  0.5, -0.5);
    glVertex3f(-0.5,  0.5,  0.5);
    glVertex3f(-0.5, -0.5,  0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(  0.0,  0.5,  0.0);
    glVertex3f( 0.5, -0.5, -0.5);
    glVertex3f( 0.5,  0.5, -0.5);
    glVertex3f( 0.5,  0.5,  0.5);
    glVertex3f( 0.5, -0.5,  0.5);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(  0.0,  0.0,  1.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f( 0.5, -0.5, -0.5);
    glVertex3f( 0.5, -0.5,  0.5);
    glVertex3f(-0.5, -0.5,  0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(  0.0,  0.0,  0.5);
    glVertex3f(-0.5,  0.5, -0.5);
    glVertex3f( 0.5,  0.5, -0.5);
    glVertex3f( 0.5,  0.5,  0.5);
    glVertex3f(-0.5,  0.5,  0.5);
    glEnd();
    
    glFlush();
    
    glutSwapBuffers();
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
        
    glutCreateWindow("3D cube");
    glutInitWindowSize(150, 150);
    
    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(displayFunc);
    
    glutMainLoop();
    
    return 0;
}


