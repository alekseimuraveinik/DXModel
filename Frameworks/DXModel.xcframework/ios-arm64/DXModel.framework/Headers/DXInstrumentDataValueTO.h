
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentDataValueTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO || defined(INCLUDE_DXInstrumentDataValueTO))
#define DXInstrumentDataValueTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXInstrumentDataValueTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentDataValueTO *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, class) jint INSTRUMENT_DATA_NO_CURRENCY NS_SWIFT_NAME(INSTRUMENT_DATA_NO_CURRENCY);

+ (DXInstrumentDataValueTO *)EMPTY;

+ (jint)INSTRUMENT_DATA_NO_CURRENCY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithLong:(jlong)value
                               withInt:(jint)currencyToken;

- (DXInstrumentDataValueTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentDataValueTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getCurrencyToken;

- (jlong)getValue;

- (NSUInteger)hash;

- (jboolean)isCurrencyValue;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCurrencyTokenWithInt:(jint)currencyToken;

- (void)setValueWithLong:(jlong)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentDataValueTO)

inline DXInstrumentDataValueTO *DXInstrumentDataValueTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentDataValueTO *DXInstrumentDataValueTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentDataValueTO, EMPTY, DXInstrumentDataValueTO *)

inline jint DXInstrumentDataValueTO_get_INSTRUMENT_DATA_NO_CURRENCY(void);
#define DXInstrumentDataValueTO_INSTRUMENT_DATA_NO_CURRENCY -1
J2OBJC_STATIC_FIELD_CONSTANT(DXInstrumentDataValueTO, INSTRUMENT_DATA_NO_CURRENCY, jint)

FOUNDATION_EXPORT void DXInstrumentDataValueTO_init(DXInstrumentDataValueTO *self);

FOUNDATION_EXPORT DXInstrumentDataValueTO *new_DXInstrumentDataValueTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentDataValueTO *create_DXInstrumentDataValueTO_init(void);

FOUNDATION_EXPORT void DXInstrumentDataValueTO_initWithLong_withInt_(DXInstrumentDataValueTO *self, jlong value, jint currencyToken);

FOUNDATION_EXPORT DXInstrumentDataValueTO *new_DXInstrumentDataValueTO_initWithLong_withInt_(jlong value, jint currencyToken) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentDataValueTO *create_DXInstrumentDataValueTO_initWithLong_withInt_(jlong value, jint currencyToken);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentDataValueTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO DXInstrumentDataValueTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentDataValueTO")
