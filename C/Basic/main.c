#include <stdio.h>

typedef struct{
    int x;
    int y;
} PointValue;

int get_line_parameter(PointValue p1, PointValue p2, float *slope, float *yintercept)
{
    if(p1.x == p2.x) return (-1);
    else{
        *slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x);
        *yintercept = p1.y - (*slope)*p1.x;
        return 0;
    }
}
int main(){
    PointValue pt1={3, 3}, pt2={6, 6};
    float s, y;
    if(get_line_parameter(pt1, pt2, &s, &y) == -1)
    {
        printf("Error\n");
    }else{
        printf("기울기는 %f, y절편은 %f\n\n", s, y);
    }
}



