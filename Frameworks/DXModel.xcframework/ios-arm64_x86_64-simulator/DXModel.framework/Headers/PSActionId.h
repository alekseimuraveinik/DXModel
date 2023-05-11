
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionId")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiActionsActionId
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionId 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionId 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiActionsActionId

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSActionId_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionId || defined(INCLUDE_PSActionId))
#define PSActionId_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface PSActionId : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)id_;

- (jboolean)isEqual:(id)o;

- (jint)getId;

- (NSUInteger)hash;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSActionId)

FOUNDATION_EXPORT void PSActionId_initWithInt_(PSActionId *self, jint id_);

FOUNDATION_EXPORT PSActionId *new_PSActionId_initWithInt_(jint id_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSActionId *create_PSActionId_initWithInt_(jint id_);

J2OBJC_TYPE_LITERAL_HEADER(PSActionId)

@compatibility_alias ComDevexpertsPipestoneClientApiActionsActionId PSActionId;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionId")
