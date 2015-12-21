#include <iostream>
using namespace std;
class Point {
public:
    Point(int x, int y) {
        xPos = x;
        yPos = y;
    }
    ~Point(){}
    void setX(int x) {
        xPos = x;
    }
    void setY(int y) {
        yPos = y;
    }
    int getX() {
        return xPos;
    }
    int getY() {
        return yPos;
    }
    void disp() {
        cout << "( " << xPos << ", "
             << yPos << " )" << endl;
    }
    int getCalcSum() {
        return xPos + yPos;
    }
protected:
private:
    int xPos;
    int yPos;
};
class Point3D : public Point {
public:
    Point3D(int x, int y, int z): Point(x, y) {
        zPos = z;
    }
    ~Point3D(){}
    void setZ(int z) {
        zPos = z;
    }
    int getZ() {
        return zPos;
    }
    void disp() {
        cout << "( " << getX() << ", " 
             << getY() << ", "
             << zPos << " )" << endl;
    }
    int getCalcSum() {
        return Point::getCalcSum() + zPos;
    }
protected:
private:
    int zPos;
};
int main() {
    Point p1(1, 2);
    Point3D p2(1, 2, 3);
    p1.disp();
    p2.disp();
    cout << p2.getCalcSum() << endl;
    return 0;
}
