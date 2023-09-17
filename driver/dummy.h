#define DUMMY_MTU UINT16_MAX
#ifndef DUMMY_H
#define DUMMY_H
#include "net.h"
extern struct net_device *
dummy_init(void);
#endif
