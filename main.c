#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int width;
    int height;
    float perimeter;
    float area;

    printf("Enter the width of rectangle");
    scanf("%d", &width);

    printf("Enter the height of the rectangle");
    scanf("%d", &height);

    area = width * height;
    perimeter = (width + height) * 2.0;

    printf("The height entered is: %d\n",height);
    printf("The width entered is: %d\n",width);
    printf("The area of the rectangle is: %.2f\n",area);
    printf("The perimeter of the rectangle is: %.2f\n",perimeter);


    return 0;
}
