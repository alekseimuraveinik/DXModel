
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiSynchronizer")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiSynchronizer
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiSynchronizer 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiSynchronizer 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiSynchronizer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSynchronizer_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiSynchronizer || defined(INCLUDE_PSSynchronizer))
#define PSSynchronizer_

@protocol JavaLangRunnable;

@protocol PSSynchronizer < JavaObject >

- (void)invokeAndWaitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSynchronizer)

J2OBJC_TYPE_LITERAL_HEADER(PSSynchronizer)

#define ComDevexpertsPipestoneClientApiSynchronizer PSSynchronizer

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiSynchronizer")
