
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistCreateRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO || defined(INCLUDE_DXWatchlistCreateRequestTO))
#define DXWatchlistCreateRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistWithContentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistCreateRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistCreateRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistCreateRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistWithContentTO:(DXWatchlistWithContentTO *)watchlistWithContentTO;

- (DXWatchlistCreateRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistCreateRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXWatchlistCreateRequestTO)

inline DXWatchlistCreateRequestTO *DXWatchlistCreateRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistCreateRequestTO *DXWatchlistCreateRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistCreateRequestTO, EMPTY, DXWatchlistCreateRequestTO *)

FOUNDATION_EXPORT void DXWatchlistCreateRequestTO_initWithDXWatchlistWithContentTO_(DXWatchlistCreateRequestTO *self, DXWatchlistWithContentTO *watchlistWithContentTO);

FOUNDATION_EXPORT DXWatchlistCreateRequestTO *new_DXWatchlistCreateRequestTO_initWithDXWatchlistWithContentTO_(DXWatchlistWithContentTO *watchlistWithContentTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCreateRequestTO *create_DXWatchlistCreateRequestTO_initWithDXWatchlistWithContentTO_(DXWatchlistWithContentTO *watchlistWithContentTO);

FOUNDATION_EXPORT void DXWatchlistCreateRequestTO_init(DXWatchlistCreateRequestTO *self);

FOUNDATION_EXPORT DXWatchlistCreateRequestTO *new_DXWatchlistCreateRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCreateRequestTO *create_DXWatchlistCreateRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistCreateRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO DXWatchlistCreateRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateRequestTO")
