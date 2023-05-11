
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTypeProvider")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTypeProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTypeProvider 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSTypeProvider_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTypeProvider || defined(INCLUDE_PSTypeProvider))
#define PSTypeProvider_

@protocol PSTypeProvider < JavaObject >

- (jint)getId;

@end

J2OBJC_EMPTY_STATIC_INIT(PSTypeProvider)

J2OBJC_TYPE_LITERAL_HEADER(PSTypeProvider)

#define ComDevexpertsPipestoneCommonApiTypeProvider PSTypeProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTypeProvider")
