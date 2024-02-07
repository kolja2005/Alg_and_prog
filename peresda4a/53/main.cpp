class Shape {
public:
    virtual double getPerimeter() const = 0;
};

class Rectangle: public Shape {
public:
    Rectangle(int a, int b)  {
        length = a;
        width = b;
    }
 
    double getPerimeter() const override{
        return 2*(width + length);
    }
private:
    int length, width;
};
class Circle :public Shape {
public:
    Circle(int r) {
        radius = r;
    }
 
    double getPerimeter() const override {
        return PI * 2 * radius;
    }

private:
    int radius;
    const double PI = 3.141592653589793238463;
};

class Triangle : public Shape {
public:
    Triangle(int a, int b, int c) {
        a1= a;
        b1 = b;
        c1 = c;
    }
    double getPerimeter() const override {
        if (a1 + b1 <= c1 || a1 + c1 <= b1 || b1 + c1 <= a1) {
            return 0;
        }
        return a1 + b1 + c1;
    }
private:
    int a1, b1, c1;
};