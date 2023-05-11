
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEmptyOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO || defined(INCLUDE_DXEmptyOrderValidationParamsTO))
#define DXEmptyOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationOrderValidationParamsTO 1
#define INCLUDE_DXOrderValidationParamsTO 1
#include "DXOrderValidationParamsTO.h"

@protocol PSTransferObject;

@interface DXEmptyOrderValidationParamsTO : DXOrderValidationParamsTO
@property (readonly, class, strong) DXEmptyOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXEmptyOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXEmptyOrderValidationParamsTO *)change;

- (DXEmptyOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXEmptyOrderValidationParamsTO)

inline DXEmptyOrderValidationParamsTO *DXEmptyOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEmptyOrderValidationParamsTO *DXEmptyOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEmptyOrderValidationParamsTO, EMPTY, DXEmptyOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXEmptyOrderValidationParamsTO_init(DXEmptyOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXEmptyOrderValidationParamsTO *new_DXEmptyOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEmptyOrderValidationParamsTO *create_DXEmptyOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEmptyOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO DXEmptyOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationEmptyOrderValidationParamsTO")
