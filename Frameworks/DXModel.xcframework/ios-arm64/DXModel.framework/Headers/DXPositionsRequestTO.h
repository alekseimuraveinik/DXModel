
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO || defined(INCLUDE_DXPositionsRequestTO))
#define DXPositionsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXPositionsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXPositionsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPositionsRequestTO *)change;

- (DXPositionsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXPositionsRequestTO)

inline DXPositionsRequestTO *DXPositionsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionsRequestTO *DXPositionsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionsRequestTO, EMPTY, DXPositionsRequestTO *)

FOUNDATION_EXPORT void DXPositionsRequestTO_init(DXPositionsRequestTO *self);

FOUNDATION_EXPORT DXPositionsRequestTO *new_DXPositionsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionsRequestTO *create_DXPositionsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO DXPositionsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionsRequestTO")
