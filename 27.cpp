class FLOAT {
public:
    FLOAT(float value) : value(value) {}

    FLOAT operator+(const FLOAT& other) const {
        return FLOAT(value + other.value);
    }
    
    FLOAT operator-(const FLOAT& other) const {
        return FLOAT(value - other.value);
    }
    
    FLOAT operator*(const FLOAT& other) const {
        return FLOAT(value * other.value);
    }
    
    FLOAT operator/(const FLOAT& other) const {
        return FLOAT(value / other.value);
    }

private:
    float value;
};

