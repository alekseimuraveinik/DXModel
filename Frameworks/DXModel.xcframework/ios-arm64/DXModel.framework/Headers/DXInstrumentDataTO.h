
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentDataTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO || defined(INCLUDE_DXInstrumentDataTO))
#define DXInstrumentDataTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCurrencyTO;
@class DXInstrumentDataValueTO;
@class DXListValuesMapTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXInstrumentDataTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentDataTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentDataTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentDataTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentDataTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getCurrencies;

- (DXCurrencyTO *)getCurrencyWithDXInstrumentDataValueTO:(DXInstrumentDataValueTO *)dataValueTO;

- (DXListValuesMapTO *)getData;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCurrenciesWithPSListTO:(PSListTO *)currencies;

- (void)setDataWithDXListValuesMapTO:(DXListValuesMapTO *)data;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentDataTO)

inline DXInstrumentDataTO *DXInstrumentDataTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentDataTO *DXInstrumentDataTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentDataTO, EMPTY, DXInstrumentDataTO *)

FOUNDATION_EXPORT void DXInstrumentDataTO_init(DXInstrumentDataTO *self);

FOUNDATION_EXPORT DXInstrumentDataTO *new_DXInstrumentDataTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentDataTO *create_DXInstrumentDataTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentDataTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO DXInstrumentDataTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataTO")
