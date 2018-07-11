#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
double a,b,c,d,m;
void display(void)
{
    m=(d-b)/(c-a);
    while(1)
    {
        if(a==c && b==d)
        {
            break;
        }
        if(m<-1)
        {
            a=a-(1/m);
            b=b-1;
        }
        else if (m>1)
        {
            a=a+(1/m);
            b=b+1;
        }
        else if (m>=-1 && m>=0)
        {
            a=a-1;
            b=b-m;
        }
        else
        {
            a=a+1;
            b=b+m;
        }

        glColor3ub (255, 0, 0);
        glBegin(GL_POINTS);
        glVertex2d (a, b);
//glVertex2d (175, 175);
//glVertex2d (250, 100);

//glVertex2d (100, 175);
        glEnd();
    }


    
    glFlush ();
}
void init (void)
{

    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);
}

int main(int argc, char** argv)
{
    printf("Enter x1, y1, x2, y2 :\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
