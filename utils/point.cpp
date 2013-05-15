#include "point.hpp"

namespace Utils {

Point::Point(double x, double y): m_x(x), m_y(y)
{}

double Point::x() const {
    return m_x;
}

double Point::y() const {
    return m_y;
}

bool Point::operator==(const Point& p) const {
    return m_x == p.m_x && m_y == p.m_y;
}

Point& Point::operator +=(const Point& p) {
    m_x += p.x();
    m_y += p.y();
    return *this;
}

Point& Point::operator -=(const Point& p) {
    m_x -= p.x();
    m_y -= p.y();
    return *this;
}

Point& Point::operator *=(double d) {
    m_x *= d;
    m_y *= d;
    return *this;
}

Point& Point::operator /=(double d) {
    m_x /= d;
    m_y /= d;
    return *this;
}

Point operator+(const Point& p1, const Point& p2) {
    return Point(p1.x() + p2.x(), p1.y() + p2.y());
}

Point operator-(const Point& p1, const Point& p2) {
    return Point(p1.x() - p2.x(), p1.y() - p2.y());
}

Point operator*(const Point& p, double d) {
    return Point(d * p.x(), d* p.y());
}

Point operator*(double d, const Point& p) {
    return p*d;
}

Point operator/(const Point& p, double d) {
    return Point(p.x() / d, p.y() / d);
}

}
