#ifndef DEVICE_SETTINGS
#define DEVICE_SETTINGS

// Only 1 is required
#define ENTRANCE_MOTION_DETECTOR
//#define TESTING

// const are saved at 40200000h (flash memory)
#ifdef TESTING
static const char DEVICE_NAME[] = "Testing3";
#elif defined(ENTRANCE_MOTION_DETECTOR) // 4MB
static const char DEVICE_NAME[] = "Entrance Motion Detector";
#endif

static const char SERVER_IP_ADDRESS[] = "192.168.0.2";
static const char ACCESS_POINT_PASSWORD[] = "x>vZf8bqX]l-qg%";
static const char ACCESS_POINT_NAME[] = "SAMSUNG";

#define SERVER_PORT 80

#endif
