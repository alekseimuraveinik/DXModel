
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuotesCacheResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO || defined(INCLUDE_DXQuotesCacheResponseTO))
#define DXQuotesCacheResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXQuoteTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXQuotesCacheResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXQuotesCacheResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXQuotesCacheResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSListTO:(PSListTO *)quotesList;

- (DXQuotesCacheResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXQuotesCacheResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getQuotesList;

- (NSUInteger)hash;

- (DXQuoteTO *)lookupWithNSString:(NSString *)key;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setQuotesListWithPSListTO:(PSListTO *)quotesList;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXQuotesCacheResponseTO)

inline DXQuotesCacheResponseTO *DXQuotesCacheResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuotesCacheResponseTO *DXQuotesCacheResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuotesCacheResponseTO, EMPTY, DXQuotesCacheResponseTO *)

FOUNDATION_EXPORT void DXQuotesCacheResponseTO_initWithPSListTO_(DXQuotesCacheResponseTO *self, PSListTO *quotesList);

FOUNDATION_EXPORT DXQuotesCacheResponseTO *new_DXQuotesCacheResponseTO_initWithPSListTO_(PSListTO *quotesList) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesCacheResponseTO *create_DXQuotesCacheResponseTO_initWithPSListTO_(PSListTO *quotesList);

FOUNDATION_EXPORT void DXQuotesCacheResponseTO_init(DXQuotesCacheResponseTO *self);

FOUNDATION_EXPORT DXQuotesCacheResponseTO *new_DXQuotesCacheResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesCacheResponseTO *create_DXQuotesCacheResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuotesCacheResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO DXQuotesCacheResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheResponseTO")
