class Water {
    int temperature;

public:
    Water(int temp) {
        temperature = temp;
    }
    int get_temp() {
        return temperature;
    }

};

class Teapot {
    int temp;

public:
    Teapot(Water& water_) {

        temp = water_.get_temp();
    }
    bool is_boiling() {
        return temp >= 100;
    }
    void heat_up(int t) {
        temp += t;
    }

};