
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountTO || defined(INCLUDE_DXAccountTO))
#define DXAccountTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountCashTypeEnum;
@class DXAccountKeyTO;
@class DXCurrencyTO;
@class DXStakeTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAccountTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAccountTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)formatCurrencyWithLong:(jlong)value;

- (PSListTO *)getAccMetrics;

- (jlong)getAccountCreationTime;

- (jlong)getBuyingPower;

- (jlong)getCash;

- (DXAccountCashTypeEnum *)getCashType;

- (NSString *)getClearingCode;

- (DXCurrencyTO *)getCurrency;

- (jlong)getEquity;

- (jlong)getFpl;

- (DXAccountKeyTO *)getKey;

- (jlong)getMargin;

- (DXCurrencyTO *)getMetricsCurrency;

- (PSListTO *)getMultiCurrencyAccountMetrics;

- (jdouble)getReverseRiskLevel;

- (DXStakeTypeEnum *)getStakeType;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccMetricsWithPSListTO:(PSListTO *)accMetrics;

- (void)setAccountCreationTimeWithLong:(jlong)accountCreationTime;

- (void)setBuyingPowerWithLong:(jlong)buyingPower;

- (void)setCashWithLong:(jlong)cash;

- (void)setCashTypeWithDXAccountCashTypeEnum:(DXAccountCashTypeEnum *)cashType;

- (void)setClearingCodeWithNSString:(NSString *)clearingCode;

- (void)setCurrencyWithDXCurrencyTO:(DXCurrencyTO *)currency;

- (void)setEquityWithLong:(jlong)equity;

- (void)setFplWithLong:(jlong)fpl;

- (void)setKeyWithDXAccountKeyTO:(DXAccountKeyTO *)key;

- (void)setMarginWithLong:(jlong)margin;

- (void)setMetricsCurrencyWithDXCurrencyTO:(DXCurrencyTO *)metricsCurrency;

- (void)setMultiCurrencyAccountMetricsWithPSListTO:(PSListTO *)multiCurrencyAccountMetrics;

- (void)setReverseRiskLevelWithDouble:(jdouble)reverseRiskLevel;

- (void)setStakeTypeWithDXStakeTypeEnum:(DXStakeTypeEnum *)stakeType;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountTO)

inline DXAccountTO *DXAccountTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountTO *DXAccountTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountTO, EMPTY, DXAccountTO *)

FOUNDATION_EXPORT void DXAccountTO_init(DXAccountTO *self);

FOUNDATION_EXPORT DXAccountTO *new_DXAccountTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountTO *create_DXAccountTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountTO DXAccountTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountTO")
