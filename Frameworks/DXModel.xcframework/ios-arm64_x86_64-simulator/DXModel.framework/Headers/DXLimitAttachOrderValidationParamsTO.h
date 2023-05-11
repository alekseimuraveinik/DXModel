
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLimitAttachOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO || defined(INCLUDE_DXLimitAttachOrderValidationParamsTO))
#define DXLimitAttachOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO 1
#define INCLUDE_DXAttachOrderValidationParamsTO 1
#include "DXAttachOrderValidationParamsTO.h"

@protocol PSTransferObject;

@interface DXLimitAttachOrderValidationParamsTO : DXAttachOrderValidationParamsTO
@property (readonly, class, strong) DXLimitAttachOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXLimitAttachOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXLimitAttachOrderValidationParamsTO *)change;

- (DXLimitAttachOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXLimitAttachOrderValidationParamsTO)

inline DXLimitAttachOrderValidationParamsTO *DXLimitAttachOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLimitAttachOrderValidationParamsTO *DXLimitAttachOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLimitAttachOrderValidationParamsTO, EMPTY, DXLimitAttachOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXLimitAttachOrderValidationParamsTO_init(DXLimitAttachOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXLimitAttachOrderValidationParamsTO *new_DXLimitAttachOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLimitAttachOrderValidationParamsTO *create_DXLimitAttachOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLimitAttachOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO DXLimitAttachOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationLimitAttachOrderValidationParamsTO")
