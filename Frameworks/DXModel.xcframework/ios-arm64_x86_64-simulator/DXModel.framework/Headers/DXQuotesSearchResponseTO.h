
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuotesSearchResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO || defined(INCLUDE_DXQuotesSearchResponseTO))
#define DXQuotesSearchResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXQuotesSearchResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXQuotesSearchResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXQuotesSearchResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXQuotesSearchResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXQuotesSearchResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXQuotesSearchResponseTO)

inline DXQuotesSearchResponseTO *DXQuotesSearchResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuotesSearchResponseTO *DXQuotesSearchResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuotesSearchResponseTO, EMPTY, DXQuotesSearchResponseTO *)

FOUNDATION_EXPORT void DXQuotesSearchResponseTO_init(DXQuotesSearchResponseTO *self);

FOUNDATION_EXPORT DXQuotesSearchResponseTO *new_DXQuotesSearchResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesSearchResponseTO *create_DXQuotesSearchResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuotesSearchResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO DXQuotesSearchResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchResponseTO")
