
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO || defined(INCLUDE_DXWatchlistsResponseTO))
#define DXWatchlistsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistsTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistsTO:(DXWatchlistsTO *)watchlistsTO;

- (DXWatchlistsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXWatchlistsTO *)getWatchlistsTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setWatchlistsTOWithDXWatchlistsTO:(DXWatchlistsTO *)watchlistsTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistsResponseTO)

inline DXWatchlistsResponseTO *DXWatchlistsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistsResponseTO *DXWatchlistsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistsResponseTO, EMPTY, DXWatchlistsResponseTO *)

FOUNDATION_EXPORT void DXWatchlistsResponseTO_initWithDXWatchlistsTO_(DXWatchlistsResponseTO *self, DXWatchlistsTO *watchlistsTO);

FOUNDATION_EXPORT DXWatchlistsResponseTO *new_DXWatchlistsResponseTO_initWithDXWatchlistsTO_(DXWatchlistsTO *watchlistsTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistsResponseTO *create_DXWatchlistsResponseTO_initWithDXWatchlistsTO_(DXWatchlistsTO *watchlistsTO);

FOUNDATION_EXPORT void DXWatchlistsResponseTO_init(DXWatchlistsResponseTO *self);

FOUNDATION_EXPORT DXWatchlistsResponseTO *new_DXWatchlistsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistsResponseTO *create_DXWatchlistsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO DXWatchlistsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsResponseTO")
