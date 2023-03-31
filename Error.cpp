/*
** EPITECH PROJECT, 2023
** Error
** File description:
** Error
*/

#include "Error.hpp"

Error::Error()
{
}

Error::~Error()
{
}

const char *Error::ErrorType::what() const noexcept
{
    return (std::strerror(errno));
}

const char *Error::OutOfRange::what() const noexcept
{
    return ("Out of range.");
}

