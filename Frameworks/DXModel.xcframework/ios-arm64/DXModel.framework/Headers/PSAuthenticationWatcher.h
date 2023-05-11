
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionAuthenticationWatcher")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionAuthenticationWatcher
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionAuthenticationWatcher 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionAuthenticationWatcher 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionAuthenticationWatcher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSAuthenticationWatcher_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionAuthenticationWatcher || defined(INCLUDE_PSAuthenticationWatcher))
#define PSAuthenticationWatcher_

@protocol PSAuthenticationWatcher < JavaObject >

- (void)authenticate;

@end

J2OBJC_EMPTY_STATIC_INIT(PSAuthenticationWatcher)

J2OBJC_TYPE_LITERAL_HEADER(PSAuthenticationWatcher)

#define ComDevexpertsPipestoneClientSessionAuthenticationWatcher PSAuthenticationWatcher

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionAuthenticationWatcher")
