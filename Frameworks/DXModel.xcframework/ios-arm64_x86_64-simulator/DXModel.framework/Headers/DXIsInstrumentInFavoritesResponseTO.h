
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXIsInstrumentInFavoritesResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO || defined(INCLUDE_DXIsInstrumentInFavoritesResponseTO))
#define DXIsInstrumentInFavoritesResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXIsInstrumentInFavoritesResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXIsInstrumentInFavoritesResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXIsInstrumentInFavoritesResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithBoolean:(jboolean)isInstrumentInFavorites;

- (DXIsInstrumentInFavoritesResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXIsInstrumentInFavoritesResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)isInstrumentInFavorites;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentInFavoritesWithBoolean:(jboolean)isInstrumentInFavorites;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXIsInstrumentInFavoritesResponseTO)

inline DXIsInstrumentInFavoritesResponseTO *DXIsInstrumentInFavoritesResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXIsInstrumentInFavoritesResponseTO *DXIsInstrumentInFavoritesResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXIsInstrumentInFavoritesResponseTO, EMPTY, DXIsInstrumentInFavoritesResponseTO *)

FOUNDATION_EXPORT void DXIsInstrumentInFavoritesResponseTO_initWithBoolean_(DXIsInstrumentInFavoritesResponseTO *self, jboolean isInstrumentInFavorites);

FOUNDATION_EXPORT DXIsInstrumentInFavoritesResponseTO *new_DXIsInstrumentInFavoritesResponseTO_initWithBoolean_(jboolean isInstrumentInFavorites) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXIsInstrumentInFavoritesResponseTO *create_DXIsInstrumentInFavoritesResponseTO_initWithBoolean_(jboolean isInstrumentInFavorites);

FOUNDATION_EXPORT void DXIsInstrumentInFavoritesResponseTO_init(DXIsInstrumentInFavoritesResponseTO *self);

FOUNDATION_EXPORT DXIsInstrumentInFavoritesResponseTO *new_DXIsInstrumentInFavoritesResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXIsInstrumentInFavoritesResponseTO *create_DXIsInstrumentInFavoritesResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXIsInstrumentInFavoritesResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO DXIsInstrumentInFavoritesResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesResponseTO")
