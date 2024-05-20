#ifndef ASSETS_H
#define ASSETS_H

#include <iostream>
#include <string>
#include <vector>

class SPUEmployee {
public:
    SPUEmployee(); // Default constructor
    SPUEmployee(const SPUEmployee& other); // Copy constructor
    SPUEmployee& operator=(const SPUEmployee& other); // Copy assignment operator
    virtual ~SPUEmployee(); // Destructor
};

class SPUStudent : public SPUEmployee {
public:
    SPUStudent(const std::string& name);
    SPUStudent(const SPUStudent& other); // Copy constructor
    SPUStudent& operator=(const SPUStudent& other); // Copy assignment operator
    ~SPUStudent(); // Destructor

    void AddTag(const std::string& tag);
    std::string ToString() const;

private:
    std::string name;
    std::vector<std::string> tags;
};

#endif // ASSETS_H
