/*
 * emptyqtsrc.h
 *
 *  Created on: 16-Sep-2016
 *      Author: varun
 */

#ifndef MW_UI_SRC_EMPTYQTSRC_H_
#define MW_UI_SRC_EMPTYQTSRC_H_


#ifdef __cplusplus
     extern "C" {
#endif

int Qt_main(int argc, char **argv);

void exit_wid(int value);
int mw_ui_intf_getThresholdFlag(char *ThresholdFlag);
int mw_ui_intf_getThresholdValue(unsigned char *SpeedThersholdVal);

#ifdef __cplusplus
    }
#endif

#endif /* MW_UI_SRC_EMPTYQTSRC_H_ */
