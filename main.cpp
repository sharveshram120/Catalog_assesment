#include <iostream>
#include <vector>
#include <string>
#include <cmath>

struct Point {
    int x;
    long long y;
};

long long decode_y(const std::string& base_str, const std::string& value_str) {
    int base = std::stoi(base_str);
    long long value = 0;
    for (char c : value_str) {
        value = value * base + (c - '0');
    }
    return value;
}

double lagrange_interpolation(const std::vector<Point>& points) {
    int k = points.size();
    double constant = 0.0;

    for (int i = 0; i < k; ++i) {
        double term = points[i].y;
        for (int j = 0; j < k; ++j) {
            if (i != j) {
                term *= (0.0 - points[j].x) / static_cast<double>(points[i].x - points[j].x);
            }
        }
        constant += term;
    }

    return constant;
}

int main() {
    std::vector<Point> points;

    points.push_back(Point{1, decode_y("10", "4")});
    points.push_back(Point{2, decode_y("2", "111")});
    points.push_back(Point{3, decode_y("10", "12")});

    double secret_constant = lagrange_interpolation(points);
    std::cout << "The secret constant (c) is: " << static_cast<long long>(round(secret_constant)) << std::endl;

    return 0;
}
