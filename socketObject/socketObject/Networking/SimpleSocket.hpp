//
//  SimpleSocket.hpp
//  socketObject
//
//  Created by Jinglun Zhou on 2021/5/8.
//

#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>

class SimpleSocket {
public:
    SimpleSocket(int domain, int service, int protocol);
};

#endif /* SimpleSocket_hpp */
