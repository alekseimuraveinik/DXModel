
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEditFavoritesRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO || defined(INCLUDE_DXEditFavoritesRequestTO))
#define DXEditFavoritesRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXEditFavoritesRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXEditFavoritesRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXEditFavoritesRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXEditFavoritesRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXEditFavoritesRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSStringListTO *)getSymbols;

- (NSUInteger)hash;

- (jboolean)isToRemove;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSymbolsWithPSStringListTO:(PSStringListTO *)symbols;

- (void)setToRemoveWithBoolean:(jboolean)toRemove;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXEditFavoritesRequestTO)

inline DXEditFavoritesRequestTO *DXEditFavoritesRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEditFavoritesRequestTO *DXEditFavoritesRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEditFavoritesRequestTO, EMPTY, DXEditFavoritesRequestTO *)

FOUNDATION_EXPORT void DXEditFavoritesRequestTO_init(DXEditFavoritesRequestTO *self);

FOUNDATION_EXPORT DXEditFavoritesRequestTO *new_DXEditFavoritesRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEditFavoritesRequestTO *create_DXEditFavoritesRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEditFavoritesRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO DXEditFavoritesRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesRequestTO")
