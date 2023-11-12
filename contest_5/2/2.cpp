class Water {
private:
    int temperature;

public:
    Water(int temp) : temperature(temp) {}

    int get_temperature() const {
        return temperature;
    }

    void set_temperature(int temp) {
        temperature = temp;
    }
};

class Teapot {
private:
    Water& water;

public:
    Teapot(Water& w) : water(w) {}

    bool is_boiling() const {
        return water.get_temperature() >= 100;
    }

    void heat_up(int degrees) {
        int new_temp = water.get_temperature() + degrees;
        water.set_temperature(new_temp);
    }
};
