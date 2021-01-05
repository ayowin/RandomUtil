
#ifndef __RANDOMUTIL_H__
#define __RANDOMUTIL_H__

#include <iostream>

#include "TimeStampUtil.hpp"

/**
 * @class RandomUtil
 * @brief 随机数工具类，生成真随机数、根据随机种子生成随机数
 * @author 欧阳伟
 * @date 2021-1-5
 */
class RandomUtil
{
public:
    /**
     * @brief 生成真随机数
     * @return int 
     */
    static int random()
    {
        /* 获取当前毫秒时间戳 */
        long msTimestamp = TimeStampUtil::millisecondTimestamp();
        /* 确定随机种子并生成随机数：以当前毫秒时间戳确保每次执行的种子不同于上次执行的种子 */
        unsigned int seed = msTimestamp;
        srand(seed);
        return rand();
    }

    /**
     * @brief 根据随机种子生成随机数
     * @param seed 随机种子
     * @return int 
     */
    static int random(int seed)
    {
        srand(seed);
        return rand();
    }
};

#endif