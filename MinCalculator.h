#pragma once

template<typename Value>

class MinCalculator {

public:
    Value Min(Value a, Value b) {
        return (a < b) ? a : b;
    };
};