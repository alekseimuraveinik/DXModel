
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrdersRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO || defined(INCLUDE_DXOrdersRequestTO))
#define DXOrdersRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXOrdersRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrdersRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrdersRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrdersRequestTO *)change;

- (DXOrdersRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXOrdersRequestTO)

inline DXOrdersRequestTO *DXOrdersRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrdersRequestTO *DXOrdersRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrdersRequestTO, EMPTY, DXOrdersRequestTO *)

FOUNDATION_EXPORT void DXOrdersRequestTO_init(DXOrdersRequestTO *self);

FOUNDATION_EXPORT DXOrdersRequestTO *new_DXOrdersRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrdersRequestTO *create_DXOrdersRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrdersRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO DXOrdersRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdersRequestTO")
