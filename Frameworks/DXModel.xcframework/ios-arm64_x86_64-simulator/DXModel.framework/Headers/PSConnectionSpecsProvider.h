
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnectionSpecsProvider_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider || defined(INCLUDE_PSConnectionSpecsProvider))
#define PSConnectionSpecsProvider_

@class PSConnectionSpec;

@protocol PSConnectionSpecsProvider < JavaObject >

- (PSConnectionSpec *)nextConnectionSpec;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionSpecsProvider)

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionSpecsProvider)

#define ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider PSConnectionSpecsProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider")
