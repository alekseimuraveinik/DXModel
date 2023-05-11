
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuotesResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO || defined(INCLUDE_DXQuotesResponseTO))
#define DXQuotesResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXQuotesResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXQuotesResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXQuotesResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSListTO:(PSListTO *)quotes;

- (DXQuotesResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXQuotesResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getQuotes;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setQuotesWithPSListTO:(PSListTO *)quotes;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXQuotesResponseTO)

inline DXQuotesResponseTO *DXQuotesResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuotesResponseTO *DXQuotesResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuotesResponseTO, EMPTY, DXQuotesResponseTO *)

FOUNDATION_EXPORT void DXQuotesResponseTO_initWithPSListTO_(DXQuotesResponseTO *self, PSListTO *quotes);

FOUNDATION_EXPORT DXQuotesResponseTO *new_DXQuotesResponseTO_initWithPSListTO_(PSListTO *quotes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesResponseTO *create_DXQuotesResponseTO_initWithPSListTO_(PSListTO *quotes);

FOUNDATION_EXPORT void DXQuotesResponseTO_init(DXQuotesResponseTO *self);

FOUNDATION_EXPORT DXQuotesResponseTO *new_DXQuotesResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesResponseTO *create_DXQuotesResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuotesResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO DXQuotesResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesResponseTO")
