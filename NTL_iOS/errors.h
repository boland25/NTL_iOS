//
//  errors.h
//  NTL_iOS
//
//  Created by Steve Brenneis on 12/7/16.
//

#ifndef errors_h
#define errors_h

void TerminalError(const char *s);

#ifdef NTL_EXCEPTIONS

inline void MemoryError() { throw NTL_SNS bad_alloc(); }
inline void Error(const char *msg) { throw ErrorObject(msg); }
inline void LogicError(const char *msg) { throw LogicErrorObject(msg); }
inline void ArithmeticError(const char *msg) { throw ArithmeticErrorObject(msg); }
inline void InvModError(const char *msg) { throw ArithmeticErrorObject(msg); }
inline void ResourceError(const char *msg) { throw ResourceErrorObject(msg); }
inline void FileError(const char *msg) { throw FileErrorObject(msg); }
inline void InputError(const char *msg) { throw InputErrorObject(msg); }

#else

// Removed the inline keyword for C99 compatibility
void MemoryError() { TerminalError("out of memory"); }
void Error(const char *msg) { TerminalError(msg); }
void LogicError(const char *msg) { TerminalError(msg); }
void ArithmeticError(const char *msg) { TerminalError(msg); }
void InvModError(const char *msg) { TerminalError(msg); }
void ResourceError(const char *msg) { TerminalError(msg); }
void FileError(const char *msg) { TerminalError(msg); }
void InputError(const char *msg) { TerminalError(msg); }

#endif

#endif /* errors_h */
