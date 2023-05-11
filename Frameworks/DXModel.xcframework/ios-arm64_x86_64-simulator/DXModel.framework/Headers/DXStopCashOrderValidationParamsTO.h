
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStopCashOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO || defined(INCLUDE_DXStopCashOrderValidationParamsTO))
#define DXStopCashOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO 1
#define INCLUDE_DXAbstractCashOrderValidationParamsTO 1
#include "DXAbstractCashOrderValidationParamsTO.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXStopCashOrderValidationParamsTO : DXAbstractCashOrderValidationParamsTO
@property (readonly, class, strong) DXStopCashOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStopCashOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStopCashOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStopCashOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXStopCashOrderValidationParamsTO)

inline DXStopCashOrderValidationParamsTO *DXStopCashOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopCashOrderValidationParamsTO *DXStopCashOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopCashOrderValidationParamsTO, EMPTY, DXStopCashOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXStopCashOrderValidationParamsTO_init(DXStopCashOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXStopCashOrderValidationParamsTO *new_DXStopCashOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStopCashOrderValidationParamsTO *create_DXStopCashOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStopCashOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO DXStopCashOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashStopCashOrderValidationParamsTO")
