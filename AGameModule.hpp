/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** AGameModule
*/

#pragma once

#include "IGameModule.hpp"

namespace acd {
    class AGameModule : public IGameModule {
        public:
            /**
             * @brief Construct a new AGameModule object
             */
            AGameModule();
            /**
             * @brief Destroy the AGameModule object
             */
            virtual ~AGameModule() = default;

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
            void setMap(const GameMap &map) override;
            /**
             * @brief Set the Score object
             * @param score the score
             */
            void setScore(std::size_t score) override;
            /**
             * @brief Set the Times object
             * @param times the times
             */
            void setTimes(const std::map<std::string, double> &times) override;
            /**
             * @brief Set the Time object
             * @param name the name of the time
             * @param time the time
             */
            void setTime(const std::string &name, const double &time) override;
            /**
             * @brief Set the Entities object
             * @param entities the entities
             */
            void setEntities(const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &entities) override;
            /**
             * @brief Set the Entity object
             * @param name the name of the entity
             * @param entity the entity
             */
            void setEntity(const std::string &name, std::pair<std::size_t, std::size_t> &entity) override;

            /**
             * @brief Get the Map object
             * @return const GameMap& the map
             */
            GameMap getMap() const override;
            /**
             * @brief Get the Score object
             * @return std::size_t the score
             */
            std::size_t getScore() const override;
            /**
             * @brief Get the Times object
             * @return const std::map<std::string, double>& the times
             */
            const std::map<std::string, double> &getTimes() const override;
            /**
             * @brief Get the Time object
             * @param name the name of the time
             * @return double the time
             */
            double getTime(const std::string &name) const override;
            /**
             * @brief Get the Entities object
             * @return const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>>& the entities
             */
            const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &getEntities() const override;
            /**
             * @brief Get the Entity object
             * @param name the name of the entity
             * @return std::vector<std::pair<std::size_t, std::size_t>>& the entity
             */
            std::vector<std::pair<std::size_t, std::size_t>> const &getEntity(const std::string &name) const override;

        private:
            GameMap _map;
            std::size_t _score;
            std::map<std::string, double> _times;
            std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> _entities;
    };
}
