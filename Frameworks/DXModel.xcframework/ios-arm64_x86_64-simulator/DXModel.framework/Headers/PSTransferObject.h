
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObject")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiTransferObject
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObject 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObject 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiTransferObject

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSTransferObject_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObject || defined(INCLUDE_PSTransferObject))
#define PSTransferObject_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomSerializable 1
#define INCLUDE_PSCustomSerializable 1
#include "PSCustomSerializable.h"

@protocol PSTransferObject < PSCustomSerializable, JavaObject >

- (jboolean)makeReadOnly;

- (id<PSTransferObject>)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (void)patchWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isComplete;

- (id<PSTransferObject>)change;

@end

@interface PSTransferObject : NSObject
@property (readonly, class, strong) id<PSTransferObject> EMPTY NS_SWIFT_NAME(EMPTY);

+ (id<PSTransferObject>)EMPTY;

@end

J2OBJC_STATIC_INIT(PSTransferObject)

inline id<PSTransferObject> PSTransferObject_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<PSTransferObject> PSTransferObject_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSTransferObject, EMPTY, id<PSTransferObject>)

J2OBJC_TYPE_LITERAL_HEADER(PSTransferObject)

#define ComDevexpertsPipestoneCommonApiTransferObject PSTransferObject

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiTransferObject")
