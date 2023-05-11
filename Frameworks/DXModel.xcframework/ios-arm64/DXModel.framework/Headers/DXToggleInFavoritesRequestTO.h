
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXToggleInFavoritesRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO || defined(INCLUDE_DXToggleInFavoritesRequestTO))
#define DXToggleInFavoritesRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXToggleInFavoritesRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXToggleInFavoritesRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXToggleInFavoritesRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXToggleInFavoritesRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXToggleInFavoritesRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXToggleInFavoritesRequestTO)

inline DXToggleInFavoritesRequestTO *DXToggleInFavoritesRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXToggleInFavoritesRequestTO *DXToggleInFavoritesRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXToggleInFavoritesRequestTO, EMPTY, DXToggleInFavoritesRequestTO *)

FOUNDATION_EXPORT void DXToggleInFavoritesRequestTO_init(DXToggleInFavoritesRequestTO *self);

FOUNDATION_EXPORT DXToggleInFavoritesRequestTO *new_DXToggleInFavoritesRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXToggleInFavoritesRequestTO *create_DXToggleInFavoritesRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXToggleInFavoritesRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO DXToggleInFavoritesRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesRequestTO")
