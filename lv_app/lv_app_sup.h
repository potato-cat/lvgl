/**
 * @file lv_app_sup.h
 *
 */

#ifndef LV_APP_SUP_H
#define LV_APP_SUP_H

/*********************
 *      INCLUDES
 *********************/
#include "lv_app.h"
#if LV_APP_ENABLE != 0

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum
{
	LV_APP_KB_MODE_TXT = 0x01,
	LV_APP_KB_MODE_NUM = 0x02,
    LV_APP_KB_MODE_CLR = 0x04, /*Clear when the first character is pressed*/
}lv_app_kb_mode_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_app_kb_open(lv_obj_t * ta, lv_app_kb_mode_t mode, void (*close)(lv_obj_t *), void (*ok)(lv_obj_t *));
void lv_app_kb_close(bool ok);

/**********************
 *      MACROS
 **********************/
#endif /*LV_APP_ENABLE != 0*/

#endif /*LV_APP_SUP_H*/
