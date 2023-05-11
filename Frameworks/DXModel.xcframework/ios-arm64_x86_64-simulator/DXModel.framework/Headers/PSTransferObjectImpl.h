
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObjectImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiTransferObjectImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObjectImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObjectImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiTransferObjectImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSTransferObjectImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObjectImpl || defined(INCLUDE_PSTransferObjectImpl))
#define PSTransferObjectImpl_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTransferObject 1
#define INCLUDE_PSTransferObject 1
#include "PSTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;

@interface PSTransferObjectImpl : NSObject < PSTransferObject >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<PSTransferObject>)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (id<PSTransferObject>)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isComplete;

- (jboolean)makeReadOnly;

- (void)patchWithPSTransferObject:(id<PSTransferObject>)base;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

@end

J2OBJC_EMPTY_STATIC_INIT(PSTransferObjectImpl)

FOUNDATION_EXPORT void PSTransferObjectImpl_init(PSTransferObjectImpl *self);

FOUNDATION_EXPORT PSTransferObjectImpl *new_PSTransferObjectImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSTransferObjectImpl *create_PSTransferObjectImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSTransferObjectImpl)

@compatibility_alias ComDevexpertsPipestoneCommonApiTransferObjectImpl PSTransferObjectImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObjectImpl")
