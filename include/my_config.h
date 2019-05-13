/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The library configuration file.
*/

#ifndef MY_CONFIG_H
#define MY_CONFIG_H

#if defined(_WIN32) || defined(__WIN32__)
#define MY_API extern __declspec(dllexport)
#else
#define MY_API extern
#endif

#endif
