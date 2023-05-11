
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketDepthResultTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO || defined(INCLUDE_DXMarketDepthResultTO))
#define DXMarketDepthResultTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXQuoteTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXMarketDepthResultTO : PSBaseTransferObject
@property (readonly, class, strong) DXMarketDepthResultTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarketDepthResultTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarketDepthResultTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarketDepthResultTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getAskSide;

- (PSListTO *)getBidSide;

- (DXQuoteTO *)getQuote;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAskSideWithPSListTO:(PSListTO *)askSide;

- (void)setBidSideWithPSListTO:(PSListTO *)bidSide;

- (void)setQuoteWithDXQuoteTO:(DXQuoteTO *)quote;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarketDepthResultTO)

inline DXMarketDepthResultTO *DXMarketDepthResultTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketDepthResultTO *DXMarketDepthResultTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketDepthResultTO, EMPTY, DXMarketDepthResultTO *)

FOUNDATION_EXPORT void DXMarketDepthResultTO_init(DXMarketDepthResultTO *self);

FOUNDATION_EXPORT DXMarketDepthResultTO *new_DXMarketDepthResultTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketDepthResultTO *create_DXMarketDepthResultTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketDepthResultTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO DXMarketDepthResultTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResultTO")
