//
//  WrappedPtr.hpp
//  NTL_iOS
//
//  Created by Steve Brenneis on 12/7/16.
//

#ifndef WrappedPtr_h
#define WrappedPtr_h

// Original comments

// A very lightly wrapped pointer than does nothing more than provide
// auto cleanup in a destructor.  Use the UniquePtr class (in SmartPtr.h)
// for a class with more safety and convenience features.
// This class is easiest to use to retrofit older code with RAII
// semantics.

// A call to Deleter::apply should free the pointed-to storage
// and set the pointer itself to zero, so apply should
// take an argument that is a reference to a T*.

template<class T, class Deleter>
class WrappedPtr {
private:
    WrappedPtr(const WrappedPtr&); // disable
    void operator=(const WrappedPtr&); // disable
public:
    typedef T * raw_ptr;
    
    raw_ptr rep;
    
    WrappedPtr() : rep(0) { }
    void operator=(const raw_ptr& _rep)  { rep = _rep; }
    
    ~WrappedPtr() { Deleter::apply(rep); }
    
    operator const raw_ptr& () const { return rep; }
    operator raw_ptr& () { return rep; }
    
    const raw_ptr* operator&() const { return &rep; }
    raw_ptr* operator&() { return &rep; }
    
    void kill() { Deleter::apply(rep); }
    
    void swap(WrappedPtr& other) { _ntl_swap(rep, other.rep); }
    
};

#endif /* WrappedPtr_h */
