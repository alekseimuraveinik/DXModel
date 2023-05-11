
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuotesSearchRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO || defined(INCLUDE_DXQuotesSearchRequestTO))
#define DXQuotesSearchRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentsSearchTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXQuotesSearchRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXQuotesSearchRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXQuotesSearchRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXQuotesSearchRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXQuotesSearchRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXInstrumentsSearchTypeEnum *)getSearchType;

- (NSString *)getSubstring;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSearchTypeWithDXInstrumentsSearchTypeEnum:(DXInstrumentsSearchTypeEnum *)searchType;

- (void)setSubstringWithNSString:(NSString *)substring;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXQuotesSearchRequestTO)

inline DXQuotesSearchRequestTO *DXQuotesSearchRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuotesSearchRequestTO *DXQuotesSearchRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuotesSearchRequestTO, EMPTY, DXQuotesSearchRequestTO *)

FOUNDATION_EXPORT void DXQuotesSearchRequestTO_init(DXQuotesSearchRequestTO *self);

FOUNDATION_EXPORT DXQuotesSearchRequestTO *new_DXQuotesSearchRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesSearchRequestTO *create_DXQuotesSearchRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuotesSearchRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO DXQuotesSearchRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesSearchRequestTO")
