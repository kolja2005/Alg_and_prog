class Cat {
    bool alive;
public:
    Cat() {
        alive = (rand() % 2 == 0);
    }
    bool is_alive() {
        return alive;
    }
};

class Box {
public:
    Cat open() {
        std::cout << "\n";
        Cat cat;
        return cat;
    }
};