class Solution {
public:
    bool checkOverlap(int r, int x, int y, int x1, int y1, int x2, int y2) {
        for(int i=x1;i<=x2;i++) {
            for(int j=y1;j<=y2;j++) {
                int c1 = x - i;
                int c2 = y - j;
                if(c1*c1+c2*c2<=r*r) {  // checks if the distance of any point (x,y), in the rectangle area, from the center of the circle is < or = the square of the radius of the circle
                    return true; // gests triggered on at least one overlap condition
                    break;
                }
            }
        }
        return false; // theres no overlap condition
    }
};
