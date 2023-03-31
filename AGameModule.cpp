/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** AGameModule
*/

#include "AGameModule.hpp"

acd::AGameModule::AGameModule()
    : _map(), _score(0), _times(), _entities()
{

}

void acd::AGameModule::setMap(const acd::GameMap &map)
{
    _map = map;
}

void acd::AGameModule::setScore(std::size_t score)
{
    _score = score;
}

void acd::AGameModule::setTimes(const std::map<std::string, double> &times)
{
    _times = times;
}

void acd::AGameModule::setTime(const std::string &name, const double &time)
{
    _times[name] = time;
}

void acd::AGameModule::setEntities(const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &entities)
{
    _entities = entities;
}

void acd::AGameModule::setEntity(const std::string &name, const std::pair<std::size_t, std::size_t> &entity)
{
    _entities[name] = entity;
}

const acd::GameMap &acd::AGameModule::getMap() const
{
    return (_map);
}

std::size_t acd::AGameModule::getScore() const
{
    return (_score)
}

const std::map<std::string, double> &acd::AGameModule::getTimes() const
{
    return (_times);
}

double acd::AGameModule::getTime(const std::string &name) const
{
    std::map<std::string, double>::iterator it = _times.find(name);
        if (it != _times.end()) {
        return (_times[name]);
    } else {
        throw Error::OutOfRange();
    }
}

const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &acd::AGameModule::getEntities() const
{
    return (_entities);
}

const std::vector<std::pair<std::size_t, std::size_t>> &acd::AGameModule::getEntity(const std::string &name) const
{
    std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>>::iterator it = _entities.find(name);

    if (it != _entities.end()) {
        return (_entities[name]);
    } else {
        throw Error::OutOfRange();
    }
}
