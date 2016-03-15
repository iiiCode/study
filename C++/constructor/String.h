#ifndef _STRING_H_
#define _STRING_H_

namespace stu {

    class String {

        public:
            String();
            String(String& other);
            ~String();

            void dump() const;
            String& operator=(String& other);
        private:
            enum { SIZE = 16 };
            char *mPtr;
    }; // class String
} //namespace stu
#endif //_STRING_H_
