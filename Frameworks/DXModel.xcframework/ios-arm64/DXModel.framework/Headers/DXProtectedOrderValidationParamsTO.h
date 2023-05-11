
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXProtectedOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO || defined(INCLUDE_DXProtectedOrderValidationParamsTO))
#define DXProtectedOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationOrderValidationParamsTO 1
#define INCLUDE_DXOrderValidationParamsTO 1
#include "DXOrderValidationParamsTO.h"

@class DXLimitAttachOrderValidationParamsTO;
@class DXPricedOrderValidationParamsTO;
@class DXStopAttachOrderValidationParamsTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXProtectedOrderValidationParamsTO : DXOrderValidationParamsTO
@property (readonly, class, strong) DXProtectedOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXProtectedOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXProtectedOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXProtectedOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getAsk;

- (jlong)getBid;

- (DXPricedOrderValidationParamsTO *)getOrderParams;

- (DXStopAttachOrderValidationParamsTO *)getStopLossParams;

- (DXLimitAttachOrderValidationParamsTO *)getTakeProfitParams;

- (NSUInteger)hash;

- (jboolean)isDefaultStopLossEnabled;

- (jboolean)isDefaultTakeProfitEnabled;

- (jboolean)isStopLossToggleEnabled;

- (jboolean)isTakeProfitToggleEnabled;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAskWithLong:(jlong)ask;

- (void)setBidWithLong:(jlong)bid;

- (void)setDefaultStopLossEnabledWithBoolean:(jboolean)defaultStopLossEnabled;

- (void)setDefaultTakeProfitEnabledWithBoolean:(jboolean)defaultTakeProfitEnabled;

- (void)setOrderParamsWithDXPricedOrderValidationParamsTO:(DXPricedOrderValidationParamsTO *)orderParams;

- (void)setStopLossParamsWithDXStopAttachOrderValidationParamsTO:(DXStopAttachOrderValidationParamsTO *)stopLossParams;

- (void)setStopLossToggleEnabledWithBoolean:(jboolean)stopLossToggleEnabled;

- (void)setTakeProfitParamsWithDXLimitAttachOrderValidationParamsTO:(DXLimitAttachOrderValidationParamsTO *)takeProfitParams;

- (void)setTakeProfitToggleEnabledWithBoolean:(jboolean)takeProfitToggleEnabled;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXProtectedOrderValidationParamsTO)

inline DXProtectedOrderValidationParamsTO *DXProtectedOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXProtectedOrderValidationParamsTO *DXProtectedOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXProtectedOrderValidationParamsTO, EMPTY, DXProtectedOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXProtectedOrderValidationParamsTO_init(DXProtectedOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXProtectedOrderValidationParamsTO *new_DXProtectedOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXProtectedOrderValidationParamsTO *create_DXProtectedOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXProtectedOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO DXProtectedOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationProtectedOrderValidationParamsTO")
