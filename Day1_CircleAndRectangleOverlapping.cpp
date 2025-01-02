class Solution {
public:
    int closest_x(int xCenter, int x1, int x2){
        if(x2 < xCenter)
            return -x2 + xCenter;
        if(x1 > xCenter)
            return x1 - xCenter;
        return 0; 
    }

    int closest_y(int yCenter, int y1, int y2){
        if(y2 < yCenter)
            return -y2 + yCenter;
        if(y1 > yCenter)
            return y1 - yCenter;
        return 0; 
    }

    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int dis_X = closest_x(xCenter, x1, x2);
        int dis_Y = closest_y(yCenter, y1, y2);

        return (dis_X*dis_X + dis_Y*dis_Y <= radius*radius);
    }
};