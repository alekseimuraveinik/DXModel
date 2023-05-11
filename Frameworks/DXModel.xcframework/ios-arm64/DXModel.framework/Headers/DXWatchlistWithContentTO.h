
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistWithContentTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO || defined(INCLUDE_DXWatchlistWithContentTO))
#define DXWatchlistWithContentTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXWatchlistWithContentTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistWithContentTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistWithContentTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistTO:(DXWatchlistTO *)watchlist
                             withPSStringListTO:(PSStringListTO *)content;

- (DXWatchlistWithContentTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistWithContentTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSStringListTO *)getContent;

- (DXWatchlistTO *)getWatchlist;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setContentWithPSStringListTO:(PSStringListTO *)content;

- (void)setWatchlistWithDXWatchlistTO:(DXWatchlistTO *)watchlist;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistWithContentTO)

inline DXWatchlistWithContentTO *DXWatchlistWithContentTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistWithContentTO *DXWatchlistWithContentTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistWithContentTO, EMPTY, DXWatchlistWithContentTO *)

FOUNDATION_EXPORT void DXWatchlistWithContentTO_initWithDXWatchlistTO_withPSStringListTO_(DXWatchlistWithContentTO *self, DXWatchlistTO *watchlist, PSStringListTO *content);

FOUNDATION_EXPORT DXWatchlistWithContentTO *new_DXWatchlistWithContentTO_initWithDXWatchlistTO_withPSStringListTO_(DXWatchlistTO *watchlist, PSStringListTO *content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistWithContentTO *create_DXWatchlistWithContentTO_initWithDXWatchlistTO_withPSStringListTO_(DXWatchlistTO *watchlist, PSStringListTO *content);

FOUNDATION_EXPORT void DXWatchlistWithContentTO_init(DXWatchlistWithContentTO *self);

FOUNDATION_EXPORT DXWatchlistWithContentTO *new_DXWatchlistWithContentTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistWithContentTO *create_DXWatchlistWithContentTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistWithContentTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO DXWatchlistWithContentTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentTO")
