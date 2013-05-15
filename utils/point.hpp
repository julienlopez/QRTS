#ifndef POINT_HPP
#define POINT_HPP

namespace Utils {

class Point
{
public:
    Point(double x = 0, double y = 0);

    double x() const;
    double y() const;

    bool operator==(const Point& p) const;

    Point& operator +=(const Point& p);
    Point& operator -=(const Point& p);
    Point& operator *=(double d);
    Point& operator /=(double d);

private:
    double m_x;
    double m_y;
};

Point operator+(const Point& p1, const Point& p2);
Point operator-(const Point& p1, const Point& p2);
Point operator*(const Point& p, double d);
Point operator*(double d, const Point& p);
Point operator/(const Point& p, double d);

}

#endif // POINT_HPP
