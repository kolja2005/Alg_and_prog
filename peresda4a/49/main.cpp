class Point {
    double x, y,r,a;
    
public:
    Point(double x0, double y0){
        x = x0;
        y = y0;
        r = sqrt(y * y + x * x);
        if (r != 0) {
            a = acos(x / r);
        }
    }
    void set_x(double x0) {
        x = x0;
        r = sqrt(y * y + x * x);
        if (r != 0) {
            a = acos(x / r);
        }
    }
    double get_x() {
        return x;
    }
    void set_y(double y0) {
        y = y0;
        r = sqrt(y * y + x * x);
        if (r != 0) {
            a = asin(y / r);
        }
    }
    double get_y() {
        return y;
    } 
    
    void set_r(double r0){
        r = r0;
        x = r * cos(a);
        y = r * sin(a);
    }
 
    double get_r() {
        return r;
    }

    void set_a(double a0) {
        a = a0;
        x = r * cos(a);
        y = r * sin(a);
    }
    double get_a() {
        return a;
    }
};