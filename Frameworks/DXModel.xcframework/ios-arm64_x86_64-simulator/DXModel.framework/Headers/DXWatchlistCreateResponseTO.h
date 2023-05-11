
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistCreateResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO || defined(INCLUDE_DXWatchlistCreateResponseTO))
#define DXWatchlistCreateResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXWatchlistCreateResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistCreateResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistCreateResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistTO:(DXWatchlistTO *)watchlist
                                  withPSErrorTO:(PSErrorTO *)error;

- (DXWatchlistCreateResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistCreateResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXWatchlistCreateResponseTO)

inline DXWatchlistCreateResponseTO *DXWatchlistCreateResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistCreateResponseTO *DXWatchlistCreateResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistCreateResponseTO, EMPTY, DXWatchlistCreateResponseTO *)

FOUNDATION_EXPORT void DXWatchlistCreateResponseTO_initWithDXWatchlistTO_withPSErrorTO_(DXWatchlistCreateResponseTO *self, DXWatchlistTO *watchlist, PSErrorTO *error);

FOUNDATION_EXPORT DXWatchlistCreateResponseTO *new_DXWatchlistCreateResponseTO_initWithDXWatchlistTO_withPSErrorTO_(DXWatchlistTO *watchlist, PSErrorTO *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCreateResponseTO *create_DXWatchlistCreateResponseTO_initWithDXWatchlistTO_withPSErrorTO_(DXWatchlistTO *watchlist, PSErrorTO *error);

FOUNDATION_EXPORT void DXWatchlistCreateResponseTO_init(DXWatchlistCreateResponseTO *self);

FOUNDATION_EXPORT DXWatchlistCreateResponseTO *new_DXWatchlistCreateResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCreateResponseTO *create_DXWatchlistCreateResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistCreateResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO DXWatchlistCreateResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateResponseTO")
