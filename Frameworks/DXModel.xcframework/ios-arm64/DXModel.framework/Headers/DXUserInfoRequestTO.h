
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUserInfoRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO || defined(INCLUDE_DXUserInfoRequestTO))
#define DXUserInfoRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXUserInfoRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXUserInfoRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXUserInfoRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXUserInfoRequestTO *)change;

- (DXUserInfoRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXUserInfoRequestTO)

inline DXUserInfoRequestTO *DXUserInfoRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUserInfoRequestTO *DXUserInfoRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUserInfoRequestTO, EMPTY, DXUserInfoRequestTO *)

FOUNDATION_EXPORT void DXUserInfoRequestTO_init(DXUserInfoRequestTO *self);

FOUNDATION_EXPORT DXUserInfoRequestTO *new_DXUserInfoRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserInfoRequestTO *create_DXUserInfoRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUserInfoRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO DXUserInfoRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoRequestTO")
