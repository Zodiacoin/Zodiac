/* Copyright (c) 2014, Zodiac 2.0 Developers */
/* See LICENSE for licensing information */

/**
 * \file zodiaccoin.h
 * \brief Headers for zodiaccoin.cpp
 **/

#ifndef TOR_ZODIACCOIN_H
#define TOR_ZODIACCOIN_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* zodiaccoin_tor_data_directory(
    );

    char const* zodiaccoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

