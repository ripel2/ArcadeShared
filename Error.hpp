/*
** EPITECH PROJECT, 2023
** Error
** File description:
** Error
*/

#pragma once
#include <cerrno>
#include <iostream>
#include <cstring>

class Error {
    public:
        Error();
        ~Error();

        class ErrorType : public std::exception {
            public:
                const char *what() const noexcept override;
        };
        class OutOfRange : public std::exception {
            public:
                const char *what() const noexcept override;
        };

    protected:
    private:
};
