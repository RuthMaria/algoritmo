#include <stdio.h>

void trocar(float a, float b)
{
    float aux;
    aux = a;
    a = b;
    b = aux;
}

int main()
{
    float x,y,z,aux;
    scanf("%f%f%f",&x,&y,&z);

    if ( (x>y) || (x>z))
    {
        if (y<z)
        {
            trocar(x,y);
        }
        else
        {
            trocar(x,z);
        }
    }
    if ( y > z)
    {
        trocar(y,z);
    }

    printf("%f %f %f",x, y, z);

    return 0;
}
