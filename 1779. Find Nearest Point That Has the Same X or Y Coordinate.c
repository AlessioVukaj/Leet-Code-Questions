#include <math.h>

int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize){
    
 int index=-1,dist=INT_MAX ,temp;
    
 for(int i=0;i<pointsSize;i++){
         if(points[i][0]==x || points[i][1]==y){
            temp=abs(x-points[i][0]) + abs(y-points[i][1]);
            if(temp<dist){
                     dist=temp;
                     index=i;
                    }
                   }
                }
    return index;
}