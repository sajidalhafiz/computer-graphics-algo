/*
    H.W --> Creating star with line graph
*/

#include<graphics.h>

int main(){

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    //simple-star
    /*line(100,150,500,150);//horizontal line
    line(100,150,450,350);//left-top to right-down line
    line(500,150,150,350);//right-top to left-down line
    line(150,350,300,50);//left-down to center-top line
    line(300,50,450,350);//center-top to right-down line
    */

    //    x1, y1, x2, y2
    line(100,100,200,100);//left horizontal line
    //    x2, y2, x3, y3
    line(200,100,250,50);//left horizontal to top slop center
    //    x3, y3, x4, y4
    line(250,50,300,100);//top slop center right horizontal line
    //    x4, y4, x5, y5
    line(300,100,400,100);//right horizontal line
    //    x5, y5, x6, y6
    line(400,100,350,160);//right horizontal to middle center right line
    //    x6, y6, x7, y7
    line(350,160,380,230);//middle center right to down right corner line
    //    x7, y7, x8, y8
    line(380,230,250,200);//right corner to middle center line
    //    x8, y8, x9, y9
    line(250,200,130,230);//middle center to left corner line
    //    x9, y9, x10, y10
    line(130,230,150,160);//left corner to  middle center left line
    //    x10, y10, x1, y1
    line(150,160,100,100);//middle center left to left horizontal line

    getch();
    closegraph();

}
