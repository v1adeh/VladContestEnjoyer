class Cat {
private:
    bool alive;

public:
    Cat(bool is_alive) : alive(is_alive) {}

    bool is_alive() const {
        return alive;
    }
};

class Box {
public:
    Cat open() {
        bool is_alive = rand() % 2 == 0;
        return Cat(is_alive);   
    }
};
