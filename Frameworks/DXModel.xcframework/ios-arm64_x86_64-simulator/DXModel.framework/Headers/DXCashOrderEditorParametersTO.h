
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCashOrderEditorParametersTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO || defined(INCLUDE_DXCashOrderEditorParametersTO))
#define DXCashOrderEditorParametersTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCashOrderEditorParametersTO : PSBaseTransferObject
@property (readonly, class, strong) DXCashOrderEditorParametersTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCashOrderEditorParametersTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCashOrderEditorParametersTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCashOrderEditorParametersTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getAvailableFundsBase;

- (jlong)getAvailableFundsQuote;

- (NSString *)getBaseCurrencyName;

- (NSString *)getQuoteCurrencyName;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAvailableFundsBaseWithLong:(jlong)availableFundsBase;

- (void)setAvailableFundsQuoteWithLong:(jlong)availableFundsQuote;

- (void)setBaseCurrencyNameWithNSString:(NSString *)baseCurrencyName;

- (void)setQuoteCurrencyNameWithNSString:(NSString *)quoteCurrencyName;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCashOrderEditorParametersTO)

inline DXCashOrderEditorParametersTO *DXCashOrderEditorParametersTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCashOrderEditorParametersTO *DXCashOrderEditorParametersTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCashOrderEditorParametersTO, EMPTY, DXCashOrderEditorParametersTO *)

FOUNDATION_EXPORT void DXCashOrderEditorParametersTO_init(DXCashOrderEditorParametersTO *self);

FOUNDATION_EXPORT DXCashOrderEditorParametersTO *new_DXCashOrderEditorParametersTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCashOrderEditorParametersTO *create_DXCashOrderEditorParametersTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCashOrderEditorParametersTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO DXCashOrderEditorParametersTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderEditorParametersTO")
