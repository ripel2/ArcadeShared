/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu-20.04]
** File description:
** IGameModule
*/

#pragma once

#include <memory>

#include "IDisplayModule.hpp"

namespace acd {
    typedef enum updateType_e {
        NONE,
        NEXTLIB,
        NEXTGAME,
    } updateType_t;

    class IGameModule {
        public:
            /**
             * @brief Destructor of the game module
            */
            virtual ~IGameModule() = 0;
            /**
             * @brief Initialize the game module
            */
            virtual void init() = 0;
            /**
             * @brief Pause the game module
            */
            virtual void pause() = 0;
            /**
             * @brief Play the game module
             */
            virtual void play() = 0;
            /**
             * @brief Stop the game module
            */
            virtual void stop() = 0;
            /**
             * @brief Restart the game module
            */
            virtual void restart() = 0;
            /**
             * @brief Update the game module
            */
            virtual updateType_t update(Input latestInput) = 0;
            /**
             * @brief Display the game module
            */
            virtual void displayGame(std::unique_ptr<IDisplayModule> &displayModule) = 0;
            /**
             * @brief Hide the game module
            */
            virtual void hideGame() = 0;
        protected:
        private:
    };
}
