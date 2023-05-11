
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiClassFactoryCreator")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiClassFactoryCreator
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiClassFactoryCreator 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiClassFactoryCreator 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiClassFactoryCreator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClassFactoryCreator_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiClassFactoryCreator || defined(INCLUDE_PSClassFactoryCreator))
#define PSClassFactoryCreator_

@class PSCustomClassFactory;
@protocol PSDescriptorsChecksum;

@protocol PSClassFactoryCreator < JavaObject >

- (PSCustomClassFactory *)createWithInt:(jint)version_;

- (jint)highestSupportedVersion;

- (id<PSDescriptorsChecksum>)descriptorsChecksum;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClassFactoryCreator)

J2OBJC_TYPE_LITERAL_HEADER(PSClassFactoryCreator)

#define ComDevexpertsPipestoneCommonApiClassFactoryCreator PSClassFactoryCreator

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiClassFactoryCreator")
