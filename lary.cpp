#include <GL/glut.h>

void init(){
    glColorClear(1.0,1.0,1.0);
    glEnable(GL_DEPTH_TEST);
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    
}

void mouseMotion(){

}

void mouseClick(int button, int state, int x, int y){
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
        exit();

    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        drawsquare(x,y);
}

void main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(500,500);
    glutDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    glutCreateWindow("Name of the Window");

    glutMainLoop();
}

