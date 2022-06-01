#pragma once

#include <string>

#include "IToString.h"

using namespace std;

class IAddress : public IToString {

};

class Address : public IAddress {
private:
    string _index;
    string _country;
    string _region;
    string _district;
    string _city;
    string _street;
    string _build;

public:
    Address(const string &index, const string &country, const string &region, const string &district,
            const string &city, const string &street, const string &build) : _index(index), _country(country),
                                                                             _region(region), _district(district),
                                                                             _city(city), _street(street),
                                                                             _build(build) {}

    const string &getIndex() const {
        return _index;
    }

    const string &getCountry() const {
        return _country;
    }

    const string &getRegion() const {
        return _region;
    }

    const string &getDistrict() const {
        return _district;
    }

    const string &getCity() const {
        return _city;
    }

    const string &getStreet() const {
        return _street;
    }

    const string &getBuild() const {
        return _build;
    }

    string toString() override {
        return _index + ", " + _country + ", " + _region + ", " + _district + ", " + _city + ", " + _street + ", " + _build;
    }
};