/*
 * Untitled_05
 * iCAROS7, hominlab@gmail.com
 * Box.cpp
 * 20211208 2330
 */

#include "Box.hpp"

double Box::getVolume() const { return length * width * height; }

Box Box::operator+(const Box &slave) {
    Box result(length + slave.length, width + slave.width, height + slave.height);
    
    return result;
}

Box Box::operator-(const Box &slave) {
    double result[3] = {length - slave.length, width - slave.width, height - slave.height};
    for (double &i : result) {
        if (i < 0) { i == 0; }
    }
    Box resultBox(result[0], result[1], result[2]);
    
    return resultBox;
}

bool Box::operator==(const Box &slave) {
    return (length == slave.length && width == slave.width && height == slave.height);
}

bool Box::operator!=(const Box &slave) {
    return (length != slave.length || width != slave.width || height != slave.height);
}

bool Box::operator<(const Box &slave) {
    return getVolume() < slave.getVolume();
}

bool Box::operator>(const Box &slave) {
    return getVolume() > slave.getVolume();
}
