#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <QVector>


class Character
{
public:
    Character(QString const& name, QString const& gender, QString const& hairColor, QString const& species, QString const& age, QString const& nenType, QString const& firstArc);

    QString getName();
    QString getGender();
    QString getHairColor();
    QString getSpecies();
    QString getAge();
    QString getNenType();
    QString getFirstArc();

private:
    QString _name;
    QString _gender;
    QString _hairColor;
    QString _species;
    QString _age;
    QString _nenType;
    QString _firstArc;
};

#endif // CHARACTER_H
