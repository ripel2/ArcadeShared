/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** IGameModule
*/

#pragma once

#include <chrono>
#include <map>
#include <string>

#include "GameMap.hpp"
#include "Inputs.hpp"
#include "IGraphicModule.hpp"

namespace acd {
    typedef enum updateType_e {
        UPDATE_NONE,
        PREVGRAPHIC,
        NEXTGRAPHIC,
        PREVGAME,
        NEXTGAME,
        SFML,
        NCURSES,
        SDL,
        NIBBLER,
        SNAKE
    } updateType_t;

    class IGameModule {
        public:
            /**
             * @brief Destroy the IGameModule object
             */
            virtual ~IGameModule() = default;

            /**
             * @brief Update the game
             * @param latestInput the latest input
             */
            virtual updateType_t update(Input latestInput) = 0;
            /**
             * @brief pause the game
             */
            virtual void pause() = 0;
            /**
             * @brief play the game
             */
            virtual void play() = 0;
            /**
             * @brief restart the game
             */
            virtual void restart() = 0;

            /**
             * @brief Set the Map object
             * @param map the map
             */
            virtual void setMap(const GameMap &map) = 0;
            /**
             * @brief Set the Score object
             * @param score the score
             */
            virtual void setScore(std::size_t score) = 0;
            /**
             * @brief Set the Times object
             * @param times the times
             */
            virtual void setTimes(const std::map<std::string, double> &times) = 0;
            /**
             * @brief Set the Time object
             * @param name the name of the time
             * @param time the time
             */
            virtual void setTime(const std::string &name, const double &time) = 0;
            /**
             * @brief Set the Entities object
             * @param entities the entities
             */
            virtual void setEntities(const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &entities) = 0;
            /**
             * @brief Set the Entity object
             * @param name the name of the entity
             * @param entity the entity
             */
            virtual void setEntity(const std::string &name, std::pair<std::size_t, std::size_t> &entity) = 0;

            /**
             * @brief Get the Map object
             * @return GameMap the map
             */
            virtual const GameMap &getMap() const = 0;
            /**
             * @brief Get the Score object
             * @return std::size_t the score
             */
            virtual std::size_t getScore() const = 0;
            /**
             * @brief Get the Times object
             * @return const std::map<std::string, double>& the times
             */
            virtual const std::map<std::string, double> &getTimes() const = 0;
            /**
             * @brief Get the Time object
             * @param name the name of the time
             * @return const double& the time
             */
            virtual double getTime(const std::string &name) const = 0;
            /**
             * @brief Get the Entities object
             * @return const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>>& the entities
             */
            virtual const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &getEntities() const = 0;
            /**
             * @brief Get the Entity object
             * @param name the name of the entity
             * @return const std::vector<std::pair<std::size_t, std::size_t>>& the entity
             */
            virtual std::vector<std::pair<std::size_t, std::size_t>> const &getEntity(const std::string &name) const = 0;
    };
}
