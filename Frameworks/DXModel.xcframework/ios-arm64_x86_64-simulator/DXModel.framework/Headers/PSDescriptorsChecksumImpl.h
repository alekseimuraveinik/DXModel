
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSDescriptorsChecksumImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl || defined(INCLUDE_PSDescriptorsChecksumImpl))
#define PSDescriptorsChecksumImpl_

#define RESTRICT_ComDevexpertsPipestoneCommonApiDescriptorsChecksum 1
#define INCLUDE_PSDescriptorsChecksum 1
#include "PSDescriptorsChecksum.h"

@interface PSDescriptorsChecksumImpl : NSObject < PSDescriptorsChecksum >

#pragma mark Public

- (instancetype __nonnull)init;

- (NSString *)checksumByApiVersionWithInt:(jint)apiVersion;

@end

J2OBJC_EMPTY_STATIC_INIT(PSDescriptorsChecksumImpl)

FOUNDATION_EXPORT void PSDescriptorsChecksumImpl_init(PSDescriptorsChecksumImpl *self);

FOUNDATION_EXPORT PSDescriptorsChecksumImpl *new_PSDescriptorsChecksumImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDescriptorsChecksumImpl *create_PSDescriptorsChecksumImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSDescriptorsChecksumImpl)

@compatibility_alias ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl PSDescriptorsChecksumImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomDescriptorsChecksumImpl")
