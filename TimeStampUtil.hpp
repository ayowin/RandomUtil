
#ifndef __TIMESTAMPUTIL_H__
#define __TIMESTAMPUTIL_H__

#include <iostream>
#include <chrono>
#include <time.h>

/**
 * @class TimeStampUtil
 * @brief 时间戳工具类，获取秒时间戳、获取时间戳。
 * @author 欧阳伟
 * @date 2021-1-5
 */
class TimeStampUtil
{
public:
    /**
     * @brief 获取秒时间戳
     * @return int 
     */
    static int secondTimestamp()
    {
        time_t now = time(NULL);
        int sTimestamp = now;
        return sTimestamp;
    }

    /**
     * @brief 获取毫秒时间戳
     * @return long 
     */
    static long millisecondTimestamp()
    {
        std::chrono::milliseconds now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch());
        long msTimestamp = now.count();
        return msTimestamp;
    }
};

#endif