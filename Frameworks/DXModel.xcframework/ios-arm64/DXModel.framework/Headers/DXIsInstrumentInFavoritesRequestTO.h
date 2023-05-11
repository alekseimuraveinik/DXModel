
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXIsInstrumentInFavoritesRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO || defined(INCLUDE_DXIsInstrumentInFavoritesRequestTO))
#define DXIsInstrumentInFavoritesRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXIsInstrumentInFavoritesRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXIsInstrumentInFavoritesRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXIsInstrumentInFavoritesRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXIsInstrumentInFavoritesRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXIsInstrumentInFavoritesRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getInstrumentSymbol;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentSymbolWithNSString:(NSString *)instrumentSymbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXIsInstrumentInFavoritesRequestTO)

inline DXIsInstrumentInFavoritesRequestTO *DXIsInstrumentInFavoritesRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXIsInstrumentInFavoritesRequestTO *DXIsInstrumentInFavoritesRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXIsInstrumentInFavoritesRequestTO, EMPTY, DXIsInstrumentInFavoritesRequestTO *)

FOUNDATION_EXPORT void DXIsInstrumentInFavoritesRequestTO_init(DXIsInstrumentInFavoritesRequestTO *self);

FOUNDATION_EXPORT DXIsInstrumentInFavoritesRequestTO *new_DXIsInstrumentInFavoritesRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXIsInstrumentInFavoritesRequestTO *create_DXIsInstrumentInFavoritesRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXIsInstrumentInFavoritesRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO DXIsInstrumentInFavoritesRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistIsInstrumentInFavoritesRequestTO")
