#include "assets.h"

// SPUEmployee Class Definitions
SPUEmployee::SPUEmployee() {
    // Default constructor logic (if any)
}

SPUEmployee::SPUEmployee(const SPUEmployee& other) {
    // Copy constructor logic (if any)
}

SPUEmployee& SPUEmployee::operator=(const SPUEmployee& other) {
    if (this != &other) {
        // Copy assignment logic (if any)
    }
    return *this;
}

SPUEmployee::~SPUEmployee() {
    // Destructor logic (if any)
}

// SPUStudent Class Definitions
SPUStudent::SPUStudent(const std::string& name) : name(name) {}

SPUStudent::SPUStudent(const SPUStudent& other) : SPUEmployee(other), name(other.name), tags(other.tags) {}

SPUStudent& SPUStudent::operator=(const SPUStudent& other) {
    if (this != &other) {
        SPUEmployee::operator=(other); // Call base class assignment operator
        name = other.name;
        tags = other.tags;
    }
    return *this;
}

SPUStudent::~SPUStudent() {}

void SPUStudent::AddTag(const std::string& tag) {
    tags.push_back(tag);
}

std::string SPUStudent::ToString() const {
    std::string result = "{\"name\" : \"" + name + "\", \"numberofTags\" : \"" + std::to_string(tags.size()) + "\" , \"Tags\" : ";
    for (const auto& tag : tags) {
        result += tag + ";";
    }
    result += "\"}";
    return result;
}
