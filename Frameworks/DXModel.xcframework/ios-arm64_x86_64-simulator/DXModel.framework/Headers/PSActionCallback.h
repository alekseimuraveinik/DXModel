
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionCallback")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiActionsActionCallback
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionCallback 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionCallback 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiActionsActionCallback

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSActionCallback_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionCallback || defined(INCLUDE_PSActionCallback))
#define PSActionCallback_

@protocol PSActionCallback < JavaObject >

- (void)performedWithId:(id)request
                 withId:(id)response;

- (void)lostWithId:(id)request;

@end

J2OBJC_EMPTY_STATIC_INIT(PSActionCallback)

J2OBJC_TYPE_LITERAL_HEADER(PSActionCallback)

#define ComDevexpertsPipestoneClientApiActionsActionCallback PSActionCallback

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionCallback")
