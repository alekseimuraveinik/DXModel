
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderValidationDetailsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO || defined(INCLUDE_DXOrderValidationDetailsTO))
#define DXOrderValidationDetailsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCurrencyTO;
@class DXMessageTO;
@class DXOrderValidationParamsTO;
@class DXPriceIncrementsTO;
@class DXQuoteTO;
@class DXRiskyOrderWarningParamsTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXOrderValidationDetailsTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderValidationDetailsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderValidationDetailsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderValidationDetailsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderValidationDetailsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXCurrencyTO *)getAccountMetricsCurrency;

- (PSListTO *)getAvailableAccounts;

- (PSListTO *)getAvailableExpirations;

- (PSListTO *)getAvailableOrderTypes;

- (jlong)getLotSize;

- (DXMessageTO *)getLotSizeMessage;

- (jlong)getMinIncrement;

- (DXOrderValidationParamsTO *)getOrderValidation;

- (DXPriceIncrementsTO *)getPriceIncrements;

- (DXQuoteTO *)getQuote;

- (DXRiskyOrderWarningParamsTO *)getWarningParams;

- (NSUInteger)hash;

- (jboolean)isConfirmationWasRequested;

- (jboolean)isOrderTypeEditable;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountMetricsCurrencyWithDXCurrencyTO:(DXCurrencyTO *)accountMetricsCurrency;

- (void)setAvailableAccountsWithPSListTO:(PSListTO *)availableAccounts;

- (void)setAvailableExpirationsWithPSListTO:(PSListTO *)availableExpirations;

- (void)setAvailableOrderTypesWithPSListTO:(PSListTO *)availableOrderTypes;

- (void)setConfirmationWasRequestedWithBoolean:(jboolean)confirmationWasRequested;

- (void)setLotSizeWithLong:(jlong)lotSize;

- (void)setLotSizeMessageWithDXMessageTO:(DXMessageTO *)lotSizeMessage;

- (void)setMinIncrementWithLong:(jlong)minIncrement;

- (void)setOrderTypeEditableWithBoolean:(jboolean)orderTypeEditable;

- (void)setOrderValidationWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)orderValidation;

- (void)setPriceIncrementsWithDXPriceIncrementsTO:(DXPriceIncrementsTO *)priceIncrements;

- (void)setQuoteWithDXQuoteTO:(DXQuoteTO *)quote;

- (void)setWarningParamsWithDXRiskyOrderWarningParamsTO:(DXRiskyOrderWarningParamsTO *)warningParams;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderValidationDetailsTO)

inline DXOrderValidationDetailsTO *DXOrderValidationDetailsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderValidationDetailsTO *DXOrderValidationDetailsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderValidationDetailsTO, EMPTY, DXOrderValidationDetailsTO *)

FOUNDATION_EXPORT void DXOrderValidationDetailsTO_init(DXOrderValidationDetailsTO *self);

FOUNDATION_EXPORT DXOrderValidationDetailsTO *new_DXOrderValidationDetailsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderValidationDetailsTO *create_DXOrderValidationDetailsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderValidationDetailsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO DXOrderValidationDetailsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderValidationDetailsTO")
