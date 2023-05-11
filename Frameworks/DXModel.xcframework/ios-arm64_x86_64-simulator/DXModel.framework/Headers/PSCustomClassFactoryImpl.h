
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCustomClassFactoryImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl || defined(INCLUDE_PSCustomClassFactoryImpl))
#define PSCustomClassFactoryImpl_

#define RESTRICT_ComDevexpertsPipestoneCommonApiCustomClassFactory 1
#define INCLUDE_PSCustomClassFactory 1
#include "PSCustomClassFactory.h"

@protocol PSCustomSerializable;

@interface PSCustomClassFactoryImpl : PSCustomClassFactory

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)currentProtocolVersion
                         withNSString:(NSString *)checksum;

- (jint)getHighestSupportedVersion;

- (id<PSCustomSerializable>)instanceForWithInt:(jint)id_;

@end

J2OBJC_STATIC_INIT(PSCustomClassFactoryImpl)

FOUNDATION_EXPORT void PSCustomClassFactoryImpl_initWithInt_withNSString_(PSCustomClassFactoryImpl *self, jint currentProtocolVersion, NSString *checksum);

FOUNDATION_EXPORT PSCustomClassFactoryImpl *new_PSCustomClassFactoryImpl_initWithInt_withNSString_(jint currentProtocolVersion, NSString *checksum) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCustomClassFactoryImpl *create_PSCustomClassFactoryImpl_initWithInt_withNSString_(jint currentProtocolVersion, NSString *checksum);

J2OBJC_TYPE_LITERAL_HEADER(PSCustomClassFactoryImpl)

@compatibility_alias ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl PSCustomClassFactoryImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomCustomClassFactoryImpl")
