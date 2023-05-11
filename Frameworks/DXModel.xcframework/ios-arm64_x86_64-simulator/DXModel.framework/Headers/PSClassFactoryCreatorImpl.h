
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClassFactoryCreatorImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl || defined(INCLUDE_PSClassFactoryCreatorImpl))
#define PSClassFactoryCreatorImpl_

#define RESTRICT_ComDevexpertsPipestoneCommonApiClassFactoryCreator 1
#define INCLUDE_PSClassFactoryCreator 1
#include "PSClassFactoryCreator.h"

@class PSCustomClassFactory;
@protocol PSDescriptorsChecksum;

@interface PSClassFactoryCreatorImpl : NSObject < PSClassFactoryCreator >

#pragma mark Public

- (instancetype __nonnull)init;

- (PSCustomClassFactory *)createWithInt:(jint)version_;

- (id<PSDescriptorsChecksum>)descriptorsChecksum;

- (jint)highestSupportedVersion;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClassFactoryCreatorImpl)

FOUNDATION_EXPORT void PSClassFactoryCreatorImpl_init(PSClassFactoryCreatorImpl *self);

FOUNDATION_EXPORT PSClassFactoryCreatorImpl *new_PSClassFactoryCreatorImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClassFactoryCreatorImpl *create_PSClassFactoryCreatorImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSClassFactoryCreatorImpl)

@compatibility_alias ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl PSClassFactoryCreatorImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryCreatorImpl")
