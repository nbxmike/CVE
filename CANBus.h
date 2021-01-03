#ifndef CVE_CANBUS_H
#define CVE_CANBUS_H

#include <stdint.h>

#pragma pack(push, 1)       //CAN messages are packed

typedef struct chm_vhcl_h100
{
    uint8_t vhcl_min_current;       //Byte 0
    uint8_t pad1;                   //Byte 1
    uint8_t pad2;                   //Byte 2
    uint8_t pad3;                   //Byte 3
    uint16_t vhcl_max_voltage;      //Bytes 4,5
    uint8_t vhcl_rate_constant;     //Byte 6
    uint8_t pad4;                   //Byte 7
} chm_vhcl_h100_t;

typedef struct chm_vhcl_h101
{
    uint8_t pad1;                   //Byte 0
    uint8_t vhcl_time_seconds;      //Byte 1
    uint8_t vhcl_time_minutes;      //Byte 2
    uint8_t vhcl_estimated_time;    //Byte 3
    uint8_t pad2;                   //Byte 4
    uint16_t vhcl_total_battery;    //Byte 5,6
    uint8_t pad3;                   //Byte 7
} chm_vhcl_h101_t;

typedef struct chm_vhcl_h102
{
    uint8_t vhcl_protocol;          //Byte 0
    uint16_t vhcl_trgt_voltage;     //Byte 1, 2
    uint8_t vhcl_amps_request;      //Byte 3
    uint8_t vhcl_fault;             //Byte 4
    uint8_t vhcl_status;            //Byte 5
    uint8_t vhcl_state_of_charge;   //Byte 6
    uint8_t pad1;                   //Byte 7
}chm_vhcl_h102_t;

typedef struct chm_chgr_h108
{
    uint8_t chgr_id;                //Byte 0
    uint16_t chgr_max_voltage;      //Byte 1,2
    uint8_t chgr_max_current;       //Byte 3
    uint16_t chgr_theshold_voltage; //Byte 4,5
    uint8_t pad1;                   //Byte 6
    uint8_t pad2;                   //Byte 7
}chm_chgr_h108_t;

typedef struct chm_chgr_h109
{
    uint8_t chgr_protocol;          //Byte 0
    uint16_t chgr_output_voltage;   //Byte 1,2
    uint8_t chgr_output_current;    //Byte 3
    uint8_t pad1;                   //Byte 4
    uint8_t chgr_status;            //Byte 5
    uint8_t chgr_timer_seconds;     //Byte 6
    uint8_t chgr_timer_minutes;     //Byte 7
}chm_chgr_h109_t;

typedef struct generic_message
{
    uint8_t d[8];
}generic_message_t;

typedef union can_chademo
{
    chm_vhcl_h100_t vhcl_parameters;
    chm_vhcl_h101_t vhcl_battery;
    chm_vhcl_h102_t vhcl_info;
    chm_chgr_h108_t chgr_capabilities;
    chm_chgr_h109_t chgr_info   ;
    generic_message_t raw;
} can_chademo_t;

#pragma pack(pop)

#endif