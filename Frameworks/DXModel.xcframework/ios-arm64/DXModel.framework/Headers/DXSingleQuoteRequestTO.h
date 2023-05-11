
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSingleQuoteRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO || defined(INCLUDE_DXSingleQuoteRequestTO))
#define DXSingleQuoteRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXSingleQuoteRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXSingleQuoteRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSingleQuoteRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)symbol;

- (instancetype __nonnull)initWithNSString:(NSString *)symbol
                                  withLong:(jlong)quantity
                                  withLong:(jlong)lotSize;

- (DXSingleQuoteRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSingleQuoteRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getLotSize;

- (jdouble)getQuantity;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLotSizeWithLong:(jlong)lotSize;

- (void)setQuantityWithDouble:(jdouble)quantity;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSingleQuoteRequestTO)

inline DXSingleQuoteRequestTO *DXSingleQuoteRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSingleQuoteRequestTO *DXSingleQuoteRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSingleQuoteRequestTO, EMPTY, DXSingleQuoteRequestTO *)

FOUNDATION_EXPORT void DXSingleQuoteRequestTO_initWithNSString_(DXSingleQuoteRequestTO *self, NSString *symbol);

FOUNDATION_EXPORT DXSingleQuoteRequestTO *new_DXSingleQuoteRequestTO_initWithNSString_(NSString *symbol) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingleQuoteRequestTO *create_DXSingleQuoteRequestTO_initWithNSString_(NSString *symbol);

FOUNDATION_EXPORT void DXSingleQuoteRequestTO_initWithNSString_withLong_withLong_(DXSingleQuoteRequestTO *self, NSString *symbol, jlong quantity, jlong lotSize);

FOUNDATION_EXPORT DXSingleQuoteRequestTO *new_DXSingleQuoteRequestTO_initWithNSString_withLong_withLong_(NSString *symbol, jlong quantity, jlong lotSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingleQuoteRequestTO *create_DXSingleQuoteRequestTO_initWithNSString_withLong_withLong_(NSString *symbol, jlong quantity, jlong lotSize);

FOUNDATION_EXPORT void DXSingleQuoteRequestTO_init(DXSingleQuoteRequestTO *self);

FOUNDATION_EXPORT DXSingleQuoteRequestTO *new_DXSingleQuoteRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingleQuoteRequestTO *create_DXSingleQuoteRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSingleQuoteRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO DXSingleQuoteRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteRequestTO")
