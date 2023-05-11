
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLimitCashOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO || defined(INCLUDE_DXLimitCashOrderValidationParamsTO))
#define DXLimitCashOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO 1
#define INCLUDE_DXAbstractCashOrderValidationParamsTO 1
#include "DXAbstractCashOrderValidationParamsTO.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXLimitCashOrderValidationParamsTO : DXAbstractCashOrderValidationParamsTO
@property (readonly, class, strong) DXLimitCashOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXLimitCashOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXLimitCashOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXLimitCashOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXLimitCashOrderValidationParamsTO)

inline DXLimitCashOrderValidationParamsTO *DXLimitCashOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLimitCashOrderValidationParamsTO *DXLimitCashOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLimitCashOrderValidationParamsTO, EMPTY, DXLimitCashOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXLimitCashOrderValidationParamsTO_init(DXLimitCashOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXLimitCashOrderValidationParamsTO *new_DXLimitCashOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLimitCashOrderValidationParamsTO *create_DXLimitCashOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLimitCashOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO DXLimitCashOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashLimitCashOrderValidationParamsTO")
