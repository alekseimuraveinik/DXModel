
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistUpdateRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO || defined(INCLUDE_DXWatchlistUpdateRequestTO))
#define DXWatchlistUpdateRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistWithContentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistUpdateRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistUpdateRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistUpdateRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistWithContentTO:(DXWatchlistWithContentTO *)watchlistWithContentTO;

- (DXWatchlistUpdateRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistUpdateRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXWatchlistWithContentTO *)getWatchlistWithContentTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setWatchlistWithContentTOWithDXWatchlistWithContentTO:(DXWatchlistWithContentTO *)watchlistWithContentTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistUpdateRequestTO)

inline DXWatchlistUpdateRequestTO *DXWatchlistUpdateRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistUpdateRequestTO *DXWatchlistUpdateRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistUpdateRequestTO, EMPTY, DXWatchlistUpdateRequestTO *)

FOUNDATION_EXPORT void DXWatchlistUpdateRequestTO_initWithDXWatchlistWithContentTO_(DXWatchlistUpdateRequestTO *self, DXWatchlistWithContentTO *watchlistWithContentTO);

FOUNDATION_EXPORT DXWatchlistUpdateRequestTO *new_DXWatchlistUpdateRequestTO_initWithDXWatchlistWithContentTO_(DXWatchlistWithContentTO *watchlistWithContentTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistUpdateRequestTO *create_DXWatchlistUpdateRequestTO_initWithDXWatchlistWithContentTO_(DXWatchlistWithContentTO *watchlistWithContentTO);

FOUNDATION_EXPORT void DXWatchlistUpdateRequestTO_init(DXWatchlistUpdateRequestTO *self);

FOUNDATION_EXPORT DXWatchlistUpdateRequestTO *new_DXWatchlistUpdateRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistUpdateRequestTO *create_DXWatchlistUpdateRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistUpdateRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO DXWatchlistUpdateRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateRequestTO")
