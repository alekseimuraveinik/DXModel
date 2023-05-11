
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuotesRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO || defined(INCLUDE_DXQuotesRequestTO))
#define DXQuotesRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXQuotesRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXQuotesRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXQuotesRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXQuotesRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXQuotesRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSStringListTO *)getInstruments;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentsWithPSStringListTO:(PSStringListTO *)instruments;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXQuotesRequestTO)

inline DXQuotesRequestTO *DXQuotesRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuotesRequestTO *DXQuotesRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuotesRequestTO, EMPTY, DXQuotesRequestTO *)

FOUNDATION_EXPORT void DXQuotesRequestTO_init(DXQuotesRequestTO *self);

FOUNDATION_EXPORT DXQuotesRequestTO *new_DXQuotesRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesRequestTO *create_DXQuotesRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuotesRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO DXQuotesRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesRequestTO")
