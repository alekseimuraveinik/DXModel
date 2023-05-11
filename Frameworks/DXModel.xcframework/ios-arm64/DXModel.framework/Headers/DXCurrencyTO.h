
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUtilCurrencyTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUtilCurrencyTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCurrencyTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyTO || defined(INCLUDE_DXCurrencyTO))
#define DXCurrencyTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCurrencyTO : PSBaseTransferObject
@property (readonly, class, strong) DXCurrencyTO *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, copy, class) NSString *CURRENCY_FORMAT_MARKER NS_SWIFT_NAME(CURRENCY_FORMAT_MARKER);

+ (DXCurrencyTO *)EMPTY;

+ (NSString *)CURRENCY_FORMAT_MARKER;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)currencyCode;

- (instancetype __nonnull)initWithNSString:(NSString *)currencyCode
                              withNSString:(NSString *)currencyDescription
                                   withInt:(jint)precision
                              withNSString:(NSString *)currencyFormat;

- (DXCurrencyTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCurrencyTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)formatCurrencyWithLong:(jlong)value;

- (NSString *)getCurrencyCode;

- (NSString *)getCurrencyDescription;

- (NSString *)getCurrencyFormat;

- (jint)getPrecision;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCurrencyCodeWithNSString:(NSString *)currencyCode;

- (void)setCurrencyDescriptionWithNSString:(NSString *)currencyDescription;

- (void)setCurrencyFormatWithNSString:(NSString *)currencyFormat;

- (void)setPrecisionWithInt:(jint)precision;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCurrencyTO)

inline DXCurrencyTO *DXCurrencyTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCurrencyTO *DXCurrencyTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCurrencyTO, EMPTY, DXCurrencyTO *)

inline NSString *DXCurrencyTO_get_CURRENCY_FORMAT_MARKER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXCurrencyTO_CURRENCY_FORMAT_MARKER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCurrencyTO, CURRENCY_FORMAT_MARKER, NSString *)

FOUNDATION_EXPORT void DXCurrencyTO_initWithNSString_withNSString_withInt_withNSString_(DXCurrencyTO *self, NSString *currencyCode, NSString *currencyDescription, jint precision, NSString *currencyFormat);

FOUNDATION_EXPORT DXCurrencyTO *new_DXCurrencyTO_initWithNSString_withNSString_withInt_withNSString_(NSString *currencyCode, NSString *currencyDescription, jint precision, NSString *currencyFormat) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCurrencyTO *create_DXCurrencyTO_initWithNSString_withNSString_withInt_withNSString_(NSString *currencyCode, NSString *currencyDescription, jint precision, NSString *currencyFormat);

FOUNDATION_EXPORT void DXCurrencyTO_initWithNSString_(DXCurrencyTO *self, NSString *currencyCode);

FOUNDATION_EXPORT DXCurrencyTO *new_DXCurrencyTO_initWithNSString_(NSString *currencyCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCurrencyTO *create_DXCurrencyTO_initWithNSString_(NSString *currencyCode);

FOUNDATION_EXPORT void DXCurrencyTO_init(DXCurrencyTO *self);

FOUNDATION_EXPORT DXCurrencyTO *new_DXCurrencyTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCurrencyTO *create_DXCurrencyTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCurrencyTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUtilCurrencyTO DXCurrencyTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyTO")
