
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXToggleInFavoritesResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO || defined(INCLUDE_DXToggleInFavoritesResponseTO))
#define DXToggleInFavoritesResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXToggleInFavoritesResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXToggleInFavoritesResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXToggleInFavoritesResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (instancetype __nonnull)initWithNSString:(NSString *)symbol
                               withBoolean:(jboolean)isInFavorites;

- (DXToggleInFavoritesResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXToggleInFavoritesResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getErrorTO;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (jboolean)isInFavorites;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorTOWithPSErrorTO:(PSErrorTO *)errorTO;

- (void)setInFavoritesWithBoolean:(jboolean)isInFavorites;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXToggleInFavoritesResponseTO)

inline DXToggleInFavoritesResponseTO *DXToggleInFavoritesResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXToggleInFavoritesResponseTO *DXToggleInFavoritesResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXToggleInFavoritesResponseTO, EMPTY, DXToggleInFavoritesResponseTO *)

FOUNDATION_EXPORT void DXToggleInFavoritesResponseTO_initWithPSErrorTO_(DXToggleInFavoritesResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXToggleInFavoritesResponseTO *new_DXToggleInFavoritesResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXToggleInFavoritesResponseTO *create_DXToggleInFavoritesResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXToggleInFavoritesResponseTO_initWithNSString_withBoolean_(DXToggleInFavoritesResponseTO *self, NSString *symbol, jboolean isInFavorites);

FOUNDATION_EXPORT DXToggleInFavoritesResponseTO *new_DXToggleInFavoritesResponseTO_initWithNSString_withBoolean_(NSString *symbol, jboolean isInFavorites) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXToggleInFavoritesResponseTO *create_DXToggleInFavoritesResponseTO_initWithNSString_withBoolean_(NSString *symbol, jboolean isInFavorites);

FOUNDATION_EXPORT void DXToggleInFavoritesResponseTO_init(DXToggleInFavoritesResponseTO *self);

FOUNDATION_EXPORT DXToggleInFavoritesResponseTO *new_DXToggleInFavoritesResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXToggleInFavoritesResponseTO *create_DXToggleInFavoritesResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXToggleInFavoritesResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO DXToggleInFavoritesResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesResponseTO")
