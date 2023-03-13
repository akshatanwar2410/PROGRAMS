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
    
    FLOAT& operator+=(const FLOAT& other) {
        value += other.value;
        return *this;
    }
    
    FLOAT& operator-=(const FLOAT& other) {
        value -= other.value;
        return *this;
    }
    
    FLOAT& operator*=(const FLOAT& other) {
        value *= other.value;
        return *this;
    }
    
    FLOAT& operator/=(const FLOAT& other) {
        value /= other.value;
        return *this;
    }

    float getValue() const {
        return value;
    }

