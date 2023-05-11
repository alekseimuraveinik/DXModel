
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDescriptorsChecksum")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiDescriptorsChecksum
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDescriptorsChecksum 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDescriptorsChecksum 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiDescriptorsChecksum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSDescriptorsChecksum_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDescriptorsChecksum || defined(INCLUDE_PSDescriptorsChecksum))
#define PSDescriptorsChecksum_

@protocol PSDescriptorsChecksum < JavaObject >

- (NSString *)checksumByApiVersionWithInt:(jint)apiVersion;

@end

J2OBJC_EMPTY_STATIC_INIT(PSDescriptorsChecksum)

J2OBJC_TYPE_LITERAL_HEADER(PSDescriptorsChecksum)

#define ComDevexpertsPipestoneCommonApiDescriptorsChecksum PSDescriptorsChecksum

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDescriptorsChecksum")
