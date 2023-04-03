/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** Block
*/

#pragma once

#include <string>

#include "Colors.hpp"

namespace acd {
    class Block {
        public:
            /**
             * @brief Construct a new Block object
             */
            Block()
            {
                _ncursesForeground = Color::NONE;
                _ncursesBackground = Color::NONE;
                _ncursesCharacters[0] = ' ';
                _ncursesCharacters[1] = ' ';
                _foregroundPath = "";
                _backgroundPath = "";
            }
            /**
             * @brief Destroy the Block object
             */
            ~Block() = default;

            /**
             * @brief Set texture paths
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            void setTextures(const std::string &foregroundPath, const std::string &backgroundPath)
            {
                _foregroundPath = foregroundPath;
                _backgroundPath = backgroundPath;
            }
            /**
             * @brief Set the colors and the character of the block
             * @param foreground the foreground color
             * @param background the background color
             * @param characters the characters
             */
            void loadTexturesNcurses(Color foreground, Color background, char characters[2]) {
                _ncursesForeground = foreground;
                _ncursesBackground = background;
                _ncursesCharacters[0] = characters[0];
                _ncursesCharacters[1] = characters[1];
            }
            /**
             * @brief Get the foreground color Ncurses
             * @return the foreground color
             */
            Color getForegroundColorNcurses()
            {
                return _ncursesForeground;
            }
            /**
             * @brief Get the background color Ncurses
             * @return the background color
             */
            Color getBackgroundColorNcurses()
            {
                return _ncursesBackground;
            }
            /**
             * @brief Get the characters Ncurses
             * @return the characters
             */
            char *getCharactersNcurses()
            {
                return _ncursesCharacters;
            }
            /**
             * @brief Get the foreground path
             * @return the foreground path
            */
            const std::string &getForegroundPath() const
            {
                return _foregroundPath;
            }
            /**
             * @brief Get the background path
             * @return the background path
             */
            const std::string &getBackgroundPath() const
            {
                return _backgroundPath;
            }
            /**
             * @brief Set the foreground path
             * @param foregroundPath the foreground path
            */
            void setForegroundPath(const std::string &foregroundPath)
            {
                _foregroundPath = foregroundPath;
            }
            /**
             * @brief Set the background path
             * @param backgroundPath the background path
             */
            void setBackgroundPath(const std::string &backgroundPath)
            {
                _backgroundPath = backgroundPath;
            }
        private:
            Color _ncursesForeground;
            Color _ncursesBackground;
            char _ncursesCharacters[2];
            std::string _foregroundPath;
            std::string _backgroundPath;
    };
}
