
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistCopyResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO || defined(INCLUDE_DXWatchlistCopyResponseTO))
#define DXWatchlistCopyResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXWatchlistCopyResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistCopyResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistCopyResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistTO:(DXWatchlistTO *)watchlist
                                  withPSErrorTO:(PSErrorTO *)error;

- (DXWatchlistCopyResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistCopyResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (DXWatchlistTO *)getWatchlist;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setWatchlistWithDXWatchlistTO:(DXWatchlistTO *)watchlist;

- (jboolean)success;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistCopyResponseTO)

inline DXWatchlistCopyResponseTO *DXWatchlistCopyResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistCopyResponseTO *DXWatchlistCopyResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistCopyResponseTO, EMPTY, DXWatchlistCopyResponseTO *)

FOUNDATION_EXPORT void DXWatchlistCopyResponseTO_initWithDXWatchlistTO_withPSErrorTO_(DXWatchlistCopyResponseTO *self, DXWatchlistTO *watchlist, PSErrorTO *error);

FOUNDATION_EXPORT DXWatchlistCopyResponseTO *new_DXWatchlistCopyResponseTO_initWithDXWatchlistTO_withPSErrorTO_(DXWatchlistTO *watchlist, PSErrorTO *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCopyResponseTO *create_DXWatchlistCopyResponseTO_initWithDXWatchlistTO_withPSErrorTO_(DXWatchlistTO *watchlist, PSErrorTO *error);

FOUNDATION_EXPORT void DXWatchlistCopyResponseTO_init(DXWatchlistCopyResponseTO *self);

FOUNDATION_EXPORT DXWatchlistCopyResponseTO *new_DXWatchlistCopyResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCopyResponseTO *create_DXWatchlistCopyResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistCopyResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO DXWatchlistCopyResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyResponseTO")
