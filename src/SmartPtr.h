#ifndef SMART_PTR
# define SMART_PTR

using namespace std;

template <class T>
class SmartPtr
{
   T *ptr;
public:

   explicit SmartPtr(T *p = NULL) {
     ptr = p;
   }

   ~SmartPtr() {
      delete(ptr);
   }

   T & operator * () {
     return *ptr;
   }

   T * operator -> () {
      return ptr;
   }
};

#endif
