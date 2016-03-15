#include "RefBase.h"

template <typename T>
RefBase<T>::RefBase()
    :mPtr(0) {
    }

template <typename T>
void RefBase<T>::incStrong()
{
    mCount ++;
}

template <typename T>
void RefBase<T>::decStrong()
{
    mCount --;

    if (mCount == 0) {
        delete this;
    }
}
