//
// Created by Matteo Marescotti on 07/12/15.
//

#ifndef CLAUSE_SHARING_SOCKET_H
#define CLAUSE_SHARING_SOCKET_H

#include <iostream>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>
#include "Exception.h"


class FrameException : public Exception {
public:
    explicit FrameException(const char *message) : Exception(message) { }

    explicit FrameException(const std::string &message) : Exception(message) { }
};


class Frame {
private:
    int fd;
    bool close;

    inline uint32_t readn(char *buffer, uint32_t length);

public:
    static Frame connect(std::string hostname, uint16_t port);

    Frame(int fd);

    Frame(int fd, bool close);

    ~Frame();

    uint32_t read(char **frame);

    uint32_t read(std::string &frame);

    uint32_t write(const char *frame, uint32_t length);

    uint32_t write(std::string &frame);

    int file_descriptor();

};


class Pipe {
private:
    Frame r;
    Frame w;

    Pipe(int r, int w);

public:
    static Pipe New();

    Frame &reader();

    Frame &writer();

};


#endif //CLAUSE_SHARING_SOCKET_H
