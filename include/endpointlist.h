#ifndef ENDPOINTLIST_H
#define ENDPOINTLIST_H
#ifndef UTEST
#ifdef TOOL_INTEGRATION
#include <instanceheader.h>
#else

//THE DOMAIN
#define THE_DOMAIN 1

//RED NODE
#define RED_NODE 14
//RED PORTS
#define RED_MSG 0
#define RED_SIN 1
//RED MESSAGE ENDPOINTS
#define RED_MSG_DEF { {THE_DOMAIN, RED_NODE, RED_MSG}, MCAPI_NO_CHAN, CHAN_NO_DIR }

//YELLOW NODE
#define YELLOW_NODE 13
//YELLOW PORTS
#define YELLOW_SIN 1
#define YELLOW_COS 2
#define YELLOW_MSG 0
#define YELLOW_PKT 3
//YELLOW MESSAGE ENDPOINTS
#define YELLOW_MSG_DEF { {THE_DOMAIN, YELLOW_NODE, YELLOW_MSG}, MCAPI_NO_CHAN, CHAN_NO_DIR }

//BLUE NODE
#define BLUE_NODE 15
//BLUE PORTS
#define BLUE_COS 1

//GREEN NODE
#define GREEN_NODE 12
//GREEN PORTS
#define GREEN_PKT 1
#define GREEN_MSG 0
//GREEN MESSAGE ENDPOINTS
#define GREEN_MSG_DEF { {THE_DOMAIN, GREEN_NODE, GREEN_MSG}, MCAPI_NO_CHAN, CHAN_NO_DIR }

//MAGENTA NODE
#define MAG_NODE 10
//MAGENTA PORTS
#define MAG_SEND 0
#define MAG_RECV 1

//CYAN NODE
#define CYAN_NODE 11
//CYAN PORTS
#define CYAN_SEND 0
#define CYAN_RECV 1

//SELF NODE
#define SELF_NODE 3
//SELF PORTS
#define SELF_PKT_SEND 0
#define SELF_PKT_RECV 1

//RED-YELLOW CHANNEL ENDPOINTS
#define RED_SIN_DEF { {THE_DOMAIN, RED_NODE, RED_SIN}, MCAPI_SCL_CHAN, CHAN_DIR_SEND, {THE_DOMAIN, YELLOW_NODE, YELLOW_SIN}, 2 }
#define YELLOW_SIN_DEF { {THE_DOMAIN, YELLOW_NODE, YELLOW_SIN}, MCAPI_SCL_CHAN, CHAN_DIR_RECV, {THE_DOMAIN, RED_NODE, RED_SIN}, 2 }

//BLUE-YELLOW CHANNEL ENDPOINTS
#define BLUE_COS_DEF { {THE_DOMAIN, BLUE_NODE, BLUE_COS}, MCAPI_SCL_CHAN, CHAN_DIR_SEND, {THE_DOMAIN, YELLOW_NODE, YELLOW_COS}, 2 }
#define YELLOW_COS_DEF { {THE_DOMAIN, YELLOW_NODE, YELLOW_COS}, MCAPI_SCL_CHAN, CHAN_DIR_RECV, {THE_DOMAIN, BLUE_NODE, BLUE_COS}, 2 }

//YELLOW-GREEN CHANNEL ENDPOINTS
#define YELLOW_PKT_DEF { {THE_DOMAIN, YELLOW_NODE, YELLOW_PKT}, MCAPI_PKT_CHAN, CHAN_DIR_SEND, {THE_DOMAIN, GREEN_NODE, GREEN_PKT}, 0 }
#define GREEN_PKT_DEF { {THE_DOMAIN, GREEN_NODE, GREEN_PKT}, MCAPI_PKT_CHAN, CHAN_DIR_RECV, {THE_DOMAIN, YELLOW_NODE, YELLOW_PKT}, 0 }

//MAG-CYAN CHANNEL ENDPOINTS
#define MAG_CYAN_SEND_DEF { {THE_DOMAIN, MAG_NODE, MAG_SEND}, MCAPI_PKT_CHAN, CHAN_DIR_SEND, {THE_DOMAIN, CYAN_NODE, CYAN_RECV} }
#define MAG_CYAN_RECV_DEF { {THE_DOMAIN, CYAN_NODE, CYAN_RECV}, MCAPI_PKT_CHAN, CHAN_DIR_RECV, {THE_DOMAIN, MAG_NODE, MAG_SEND} }

//CYAN-MAG CHANNEL ENDPOINTS
#define CYAN_MAG_SEND_DEF { {THE_DOMAIN, CYAN_NODE, CYAN_SEND}, MCAPI_PKT_CHAN, CHAN_DIR_SEND, {THE_DOMAIN, MAG_NODE, MAG_RECV} }
#define CYAN_MAG_RECV_DEF { {THE_DOMAIN, MAG_NODE, MAG_RECV}, MCAPI_PKT_CHAN, CHAN_DIR_RECV, {THE_DOMAIN, CYAN_NODE, CYAN_SEND} }

//SELF-CHANNEL ENDPOINTS
#define SELF_PKT_SEND_DEF { {THE_DOMAIN, SELF_NODE, SELF_PKT_SEND}, MCAPI_PKT_CHAN, CHAN_DIR_SEND, {THE_DOMAIN, SELF_NODE, SELF_PKT_RECV} }
#define SELF_PKT_RECV_DEF { {THE_DOMAIN, SELF_NODE, SELF_PKT_RECV}, MCAPI_PKT_CHAN, CHAN_DIR_RECV, {THE_DOMAIN, SELF_NODE, SELF_PKT_SEND} }

//THE LIST OF ALL DEFINED ENDPOINTS
#define DEF_LIST { YELLOW_MSG_DEF, RED_MSG_DEF, GREEN_MSG_DEF, YELLOW_SIN_DEF,\
YELLOW_COS_DEF, RED_SIN_DEF, BLUE_COS_DEF, YELLOW_PKT_DEF, GREEN_PKT_DEF,\
MAG_CYAN_SEND_DEF, MAG_CYAN_RECV_DEF, CYAN_MAG_SEND_DEF, CYAN_MAG_RECV_DEF,\
SELF_PKT_SEND_DEF, SELF_PKT_RECV_DEF }

#endif
#endif
#endif
