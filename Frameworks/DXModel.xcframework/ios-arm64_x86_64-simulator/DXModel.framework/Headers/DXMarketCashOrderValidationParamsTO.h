
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketCashOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO || defined(INCLUDE_DXMarketCashOrderValidationParamsTO))
#define DXMarketCashOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO 1
#define INCLUDE_DXAbstractCashOrderValidationParamsTO 1
#include "DXAbstractCashOrderValidationParamsTO.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMarketCashOrderValidationParamsTO : DXAbstractCashOrderValidationParamsTO
@property (readonly, class, strong) DXMarketCashOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarketCashOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarketCashOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarketCashOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXMarketCashOrderValidationParamsTO)

inline DXMarketCashOrderValidationParamsTO *DXMarketCashOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketCashOrderValidationParamsTO *DXMarketCashOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketCashOrderValidationParamsTO, EMPTY, DXMarketCashOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXMarketCashOrderValidationParamsTO_init(DXMarketCashOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXMarketCashOrderValidationParamsTO *new_DXMarketCashOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketCashOrderValidationParamsTO *create_DXMarketCashOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketCashOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO DXMarketCashOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashMarketCashOrderValidationParamsTO")
