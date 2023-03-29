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
             * @param refBlocks the ref blocks
             */
            virtual updateType_t update(Input latestInput, const IGraphicModule &refBlocks) = 0;
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
            void setMap(const GameMap &map) override final;
            /**
             * @brief Set the Score object
             * @param score the score
             */
            void setScore(std::size_t score) override final;
            /**
             * @brief Set the Clock object
             * @param clock the clock
             */
            void setClock(std::clock_t clock) override final;
            /**
             * @brief Set the Times object
             * @param times the times
             */
            void setTimes(const std::map<std::string, float> &times) override final;
            /**
             * @brief Set the Time object
             * @param name the name of the time
             * @param time the time
             */
            void setTime(const std::string &name, const float &time) override final;
            /**
             * @brief Set the Entities object
             * @param entities the entities
             */
            void setEntities(const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &entities) override final;
            /**
             * @brief Set the Entity object
             * @param name the name of the entity
             * @param entity the entity
             */
            void setEntity(const std::string &name, const std::pair<std::size_t, std::size_t> &entity) override final;

            /**
             * @brief Get the Map object
             * @return const GameMap& the map
             */
            const GameMap &getMap() const override final;
            /**
             * @brief Get the Score object
             * @return std::size_t the score
             */
            std::size_t getScore() const override final;
            /**
             * @brief Get the Clock object
             * @return std::clock_t the clock
             */
            std::clock_t getClock() const override final;
            /**
             * @brief Get the Times object
             * @return const std::map<std::string, float>& the times
             */
            const std::map<std::string, float> &getTimes() const override final;
            /**
             * @brief Get the Time object
             * @param name the name of the time
             * @return float the time
             */
            float getTime(const std::string &name) const override final;
            /**
             * @brief Get the Entities object
             * @return const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>>& the entities
             */
            const std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> &getEntities() const override final;
            /**
             * @brief Get the Entity object
             * @param name the name of the entity
             * @return const std::vector<std::pair<std::size_t, std::size_t>>& the entity
             */
            const std::vector<std::pair<std::size_t, std::size_t>> &getEntity(const std::string &name) const override final;

        private:
            GameMap _map;
            std::size_t _score;
            std::clock_t _clock;
            std::map<std::string, float> _times;
            std::map<std::string, std::vector<std::pair<std::size_t, std::size_t>>> _entities;
    };
}
