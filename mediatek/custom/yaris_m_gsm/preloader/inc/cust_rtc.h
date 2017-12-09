#ifndef __CUST_RTC_H__
#define __CUST_RTC_H__

/*
 * Default values for RTC initialization
 * Year (YEA)        : 1970 ~ 2037
 * Month (MTH)       : 1 ~ 12
 * Day of Month (DOM): 1 ~ 31
 */
#define RTC_DEFAULT_YEA		2014
#define RTC_DEFAULT_MTH		1
#define RTC_DEFAULT_DOM		1

//modify by jiangtao for pr 639185 for mmi test start
#ifdef NO_AUTOBOOT
#else
#define RTC_2SEC_REBOOT_ENABLE  1
//#define RTC_2SEC_MODE  2
#define RTC_2SEC_MODE  0 //fangjie modify for PR852955 
#endif
//modify by jiangtao for pr 639185 for mmi test end

#endif /* __CUST_RTC_H__ */
