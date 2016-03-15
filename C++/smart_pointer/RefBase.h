#ifndef _REF_BASE_H_
#define _REF_BASE_H_

template <typename T>
class RefBase {
    public:
        RefBase() :mPtr(0) {}

        void incStrong();
        void decStrong();

        RefBase
    private:
        T *mPtr;
        int mCount;
};

#endif //_REF_BASE_H_
