#include<math.h>
#include<GL/glut.h>
class skin_colors{
public :
   float r= 1;
   float g= 0.67451;
   float b= 0.5882353;
    //sc.r,sc.g,sc.b
};

class shirt_colors{
public :
   float r= 0.77;
   float g= 0.3;
   float b= 0.74;
    //shc.r,shc.g,shc.b
};
class leg{
public :
   float r= 0.77;
   float g= 0.3;
   float b= 0.74;
    //shc.r,shc.g,shc.b
};



void display(){
skin_colors sc;
shirt_colors shc;
glClear(GL_COLOR_BUFFER_BIT);



//face
glPushMatrix();
glColor3f(sc.r,sc.g,sc.b);
glTranslated(0,0.6,0);
glScaled(1,1,1);
glutSolidSphere(0.125,64,64);
glPopMatrix();

//neck
glPushMatrix();
glColor3f(sc.r,sc.g,sc.b);
glTranslated(0,0.445,0);
glScaled(0.5,0.5,1);
glutSolidCube(0.125);
glPopMatrix();

//torso
glPushMatrix();
glColor3f(shc.r,shc.g,shc.b);
glTranslated(0,0.2125,0);
glScaled(0.75,1,1);
glutSolidCube(0.4);
glPopMatrix();


//leg left

glPushMatrix();
glColor3f(sc.r,sc.g,sc.b);
glTranslated(-0.1,-0.1375,0);
glRotated()
glScaled(0.75,3,1);
glutSolidCube(0.1);
glPopMatrix();

//leg right

glPushMatrix();
glColor3f(sc.r,sc.g,sc.b);
glTranslated(0.1,-0.1375,0);
glScaled(0.75,3,1);
glutSolidCube(0.1);
glPopMatrix();




glutSwapBuffers();
}







int main(int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(900, 900);
glutCreateWindow("DS");
glutDisplayFunc(display);
glutMainLoop();


}
