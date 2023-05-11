
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserStatementsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserStatementsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStatementsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsRequestTO || defined(INCLUDE_DXStatementsRequestTO))
#define DXStatementsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXStatementsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXStatementsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStatementsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStatementsRequestTO *)change;

- (DXStatementsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXStatementsRequestTO)

inline DXStatementsRequestTO *DXStatementsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatementsRequestTO *DXStatementsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatementsRequestTO, EMPTY, DXStatementsRequestTO *)

FOUNDATION_EXPORT void DXStatementsRequestTO_init(DXStatementsRequestTO *self);

FOUNDATION_EXPORT DXStatementsRequestTO *new_DXStatementsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStatementsRequestTO *create_DXStatementsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStatementsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserStatementsRequestTO DXStatementsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsRequestTO")
