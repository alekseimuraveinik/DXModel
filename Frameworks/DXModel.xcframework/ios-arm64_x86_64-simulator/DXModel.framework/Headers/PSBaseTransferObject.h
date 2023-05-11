
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseTransferObject")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseTransferObject 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBaseTransferObject_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseTransferObject || defined(INCLUDE_PSBaseTransferObject))
#define PSBaseTransferObject_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTransferObject 1
#define INCLUDE_PSTransferObject 1
#include "PSTransferObject.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;

@interface PSBaseTransferObject : NSObject < PSTransferObject, NSCopying, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (PSBaseTransferObject *)change;

- (PSBaseTransferObject *)java_clone;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (id<PSTransferObject>)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)isComplete;

- (jboolean)makeReadOnly;

- (void)patchWithPSTransferObject:(id<PSTransferObject>)base;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

- (void)ensureComplete;

- (void)ensureImmutable;

- (void)ensureMutable;

+ (id)ensureNotNullWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(PSBaseTransferObject)

FOUNDATION_EXPORT void PSBaseTransferObject_init(PSBaseTransferObject *self);

FOUNDATION_EXPORT id PSBaseTransferObject_ensureNotNullWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(PSBaseTransferObject)

@compatibility_alias ComDevexpertsPipestoneCommonApiBaseTransferObject PSBaseTransferObject;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseTransferObject")
