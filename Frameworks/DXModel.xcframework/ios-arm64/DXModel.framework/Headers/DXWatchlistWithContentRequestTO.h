
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistWithContentRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO || defined(INCLUDE_DXWatchlistWithContentRequestTO))
#define DXWatchlistWithContentRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistWithContentRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistWithContentRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistWithContentRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistTO:(DXWatchlistTO *)watchlistTO;

- (DXWatchlistWithContentRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistWithContentRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXWatchlistTO *)getWatchlistTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setWatchlistTOWithDXWatchlistTO:(DXWatchlistTO *)watchlistTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXWatchlistWithContentRequestTO)

inline DXWatchlistWithContentRequestTO *DXWatchlistWithContentRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistWithContentRequestTO *DXWatchlistWithContentRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistWithContentRequestTO, EMPTY, DXWatchlistWithContentRequestTO *)

FOUNDATION_EXPORT void DXWatchlistWithContentRequestTO_initWithDXWatchlistTO_(DXWatchlistWithContentRequestTO *self, DXWatchlistTO *watchlistTO);

FOUNDATION_EXPORT DXWatchlistWithContentRequestTO *new_DXWatchlistWithContentRequestTO_initWithDXWatchlistTO_(DXWatchlistTO *watchlistTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistWithContentRequestTO *create_DXWatchlistWithContentRequestTO_initWithDXWatchlistTO_(DXWatchlistTO *watchlistTO);

FOUNDATION_EXPORT void DXWatchlistWithContentRequestTO_init(DXWatchlistWithContentRequestTO *self);

FOUNDATION_EXPORT DXWatchlistWithContentRequestTO *new_DXWatchlistWithContentRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistWithContentRequestTO *create_DXWatchlistWithContentRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistWithContentRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO DXWatchlistWithContentRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistWithContentRequestTO")
