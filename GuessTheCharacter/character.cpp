#include "character.h"

Character::Character(QString const& name, QString const& gender, QString const& hairColor, QString const& species, QString const& age, QString const& nenType, QString const& firstArc, const QString &image)
    : _name(name), _gender(gender), _hairColor(hairColor), _species(species), _age(age), _nenType(nenType), _firstArc(firstArc), _image(image) {}

QString Character::getName() {
    return _name;
}

QString Character::getGender() {
    return _gender;
}

QString Character::getHairColor() {
    return _hairColor;
}

QString Character::getSpecies() {
    return _species;
}

QString Character::getAge() {
    return _age;
}


QString Character::getNenType() {
    return _nenType;
}

QString Character::getFirstArc() {
    return _firstArc;
}

QString Character::getImage() {
    return _image;
}
