
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO || defined(INCLUDE_DXAccountsResponseTO))
#define DXAccountsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCurrencyTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAccountsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAccountsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getAccounts;

- (PSListTO *)getAvailableMetricsDisplayCurrencies;

- (DXCurrencyTO *)getDisplayMetricsCurrency;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountsWithPSListTO:(PSListTO *)accounts;

- (void)setAvailableMetricsDisplayCurrenciesWithPSListTO:(PSListTO *)availableMetricsDisplayCurrencies;

- (void)setDisplayMetricsCurrencyWithDXCurrencyTO:(DXCurrencyTO *)displayMetricsCurrency;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountsResponseTO)

inline DXAccountsResponseTO *DXAccountsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountsResponseTO *DXAccountsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountsResponseTO, EMPTY, DXAccountsResponseTO *)

FOUNDATION_EXPORT void DXAccountsResponseTO_init(DXAccountsResponseTO *self);

FOUNDATION_EXPORT DXAccountsResponseTO *new_DXAccountsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountsResponseTO *create_DXAccountsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO DXAccountsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsResponseTO")
