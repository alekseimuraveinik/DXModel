
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXRiskyOrderWarningParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO || defined(INCLUDE_DXRiskyOrderWarningParamsTO))
#define DXRiskyOrderWarningParamsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXRiskyOrderWarningParamsTO : PSBaseTransferObject
@property (readonly, class, strong) DXRiskyOrderWarningParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXRiskyOrderWarningParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXRiskyOrderWarningParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXRiskyOrderWarningParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getAccountCurrency;

- (NSString *)getInstrumentSymbol;

- (NSString *)getInstrumentType;

- (NSString *)getTradeCost;

- (NSUInteger)hash;

- (jboolean)isConvenient;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountCurrencyWithNSString:(NSString *)accountCurrency;

- (void)setConvenientWithBoolean:(jboolean)isConvenient;

- (void)setInstrumentSymbolWithNSString:(NSString *)instrumentSymbol;

- (void)setInstrumentTypeWithNSString:(NSString *)instrumentType;

- (void)setTradeCostWithNSString:(NSString *)tradeCost;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXRiskyOrderWarningParamsTO)

inline DXRiskyOrderWarningParamsTO *DXRiskyOrderWarningParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXRiskyOrderWarningParamsTO *DXRiskyOrderWarningParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXRiskyOrderWarningParamsTO, EMPTY, DXRiskyOrderWarningParamsTO *)

FOUNDATION_EXPORT void DXRiskyOrderWarningParamsTO_init(DXRiskyOrderWarningParamsTO *self);

FOUNDATION_EXPORT DXRiskyOrderWarningParamsTO *new_DXRiskyOrderWarningParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXRiskyOrderWarningParamsTO *create_DXRiskyOrderWarningParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXRiskyOrderWarningParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO DXRiskyOrderWarningParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderWarningParamsTO")
