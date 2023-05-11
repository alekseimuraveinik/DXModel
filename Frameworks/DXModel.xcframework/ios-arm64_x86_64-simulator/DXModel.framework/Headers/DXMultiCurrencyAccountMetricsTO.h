
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMultiCurrencyAccountMetricsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO || defined(INCLUDE_DXMultiCurrencyAccountMetricsTO))
#define DXMultiCurrencyAccountMetricsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMultiCurrencyAccountMetricsTO : PSBaseTransferObject
@property (readonly, class, strong) DXMultiCurrencyAccountMetricsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMultiCurrencyAccountMetricsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMultiCurrencyAccountMetricsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMultiCurrencyAccountMetricsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jdouble)getAllocatedFunds;

- (jdouble)getAvailableBalanceForWithdrawal;

- (jdouble)getAvailableFunds;

- (jdouble)getBalance;

- (NSString *)getCurrency;

- (jint)getCurrencyPrecision;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAllocatedFundsWithDouble:(jdouble)allocatedFunds;

- (void)setAvailableBalanceForWithdrawalWithDouble:(jdouble)availableBalanceForWithdrawal;

- (void)setAvailableFundsWithDouble:(jdouble)availableFunds;

- (void)setBalanceWithDouble:(jdouble)balance;

- (void)setCurrencyWithNSString:(NSString *)currency;

- (void)setCurrencyPrecisionWithInt:(jint)currencyPrecision;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMultiCurrencyAccountMetricsTO)

inline DXMultiCurrencyAccountMetricsTO *DXMultiCurrencyAccountMetricsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMultiCurrencyAccountMetricsTO *DXMultiCurrencyAccountMetricsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMultiCurrencyAccountMetricsTO, EMPTY, DXMultiCurrencyAccountMetricsTO *)

FOUNDATION_EXPORT void DXMultiCurrencyAccountMetricsTO_init(DXMultiCurrencyAccountMetricsTO *self);

FOUNDATION_EXPORT DXMultiCurrencyAccountMetricsTO *new_DXMultiCurrencyAccountMetricsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMultiCurrencyAccountMetricsTO *create_DXMultiCurrencyAccountMetricsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMultiCurrencyAccountMetricsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO DXMultiCurrencyAccountMetricsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountMultiCurrencyAccountMetricsTO")
