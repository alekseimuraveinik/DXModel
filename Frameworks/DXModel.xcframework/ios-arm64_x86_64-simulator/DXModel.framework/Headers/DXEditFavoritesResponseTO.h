
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEditFavoritesResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO || defined(INCLUDE_DXEditFavoritesResponseTO))
#define DXEditFavoritesResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXEditFavoritesResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXEditFavoritesResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXEditFavoritesResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXEditFavoritesResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXEditFavoritesResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getErrorTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorTOWithPSErrorTO:(PSErrorTO *)errorTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXEditFavoritesResponseTO)

inline DXEditFavoritesResponseTO *DXEditFavoritesResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEditFavoritesResponseTO *DXEditFavoritesResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEditFavoritesResponseTO, EMPTY, DXEditFavoritesResponseTO *)

FOUNDATION_EXPORT void DXEditFavoritesResponseTO_initWithPSErrorTO_(DXEditFavoritesResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXEditFavoritesResponseTO *new_DXEditFavoritesResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEditFavoritesResponseTO *create_DXEditFavoritesResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXEditFavoritesResponseTO_init(DXEditFavoritesResponseTO *self);

FOUNDATION_EXPORT DXEditFavoritesResponseTO *new_DXEditFavoritesResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEditFavoritesResponseTO *create_DXEditFavoritesResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEditFavoritesResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO DXEditFavoritesResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesResponseTO")
