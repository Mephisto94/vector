#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:
    const static unsigned long n = 3;

    Vector();

    explicit Vector(double number);

    Vector(const Vector &lhs);

    Vector &operator=(const Vector &object);

    double operator[](unsigned long i) const;

    double &operator[](unsigned long i);

    Vector &operator+=(const Vector &object);

    Vector &operator-=(const Vector &object);

    Vector &operator*=(double number);

    Vector &operator/=(double number);

    friend bool operator==(const Vector &lhs, const Vector &rhs);

    friend Vector operator+(const Vector &lhs, const Vector &rhs);

    friend Vector operator-(const Vector &lhs, const Vector &rhs);

    friend Vector operator*(const Vector &lhs, double);

    friend Vector operator*(double number, const Vector &rhs);

    friend Vector operator/(const Vector &lhs, double number);

    friend double operator^(const Vector &lhs, const Vector &rhs);

    Vector operator-() const;

private:
    double coords_[n];
}; // class Vector

bool operator!=(const Vector &lhs, const Vector &rhs);

#endif // VECTOR_H