
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXDeleteUserRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO || defined(INCLUDE_DXDeleteUserRequestTO))
#define DXDeleteUserRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXDeleteUserRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXDeleteUserRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXDeleteUserRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXDeleteUserRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXDeleteUserRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXDeleteUserRequestTO)

inline DXDeleteUserRequestTO *DXDeleteUserRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXDeleteUserRequestTO *DXDeleteUserRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXDeleteUserRequestTO, EMPTY, DXDeleteUserRequestTO *)

FOUNDATION_EXPORT void DXDeleteUserRequestTO_init(DXDeleteUserRequestTO *self);

FOUNDATION_EXPORT DXDeleteUserRequestTO *new_DXDeleteUserRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDeleteUserRequestTO *create_DXDeleteUserRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXDeleteUserRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO DXDeleteUserRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserRequestTO")
