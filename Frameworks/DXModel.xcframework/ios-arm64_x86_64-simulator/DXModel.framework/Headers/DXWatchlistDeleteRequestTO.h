
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistDeleteRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO || defined(INCLUDE_DXWatchlistDeleteRequestTO))
#define DXWatchlistDeleteRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXWatchlistTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistDeleteRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistDeleteRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistDeleteRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXWatchlistTO:(DXWatchlistTO *)watchlistTO;

- (DXWatchlistDeleteRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistDeleteRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXWatchlistDeleteRequestTO)

inline DXWatchlistDeleteRequestTO *DXWatchlistDeleteRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistDeleteRequestTO *DXWatchlistDeleteRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistDeleteRequestTO, EMPTY, DXWatchlistDeleteRequestTO *)

FOUNDATION_EXPORT void DXWatchlistDeleteRequestTO_initWithDXWatchlistTO_(DXWatchlistDeleteRequestTO *self, DXWatchlistTO *watchlistTO);

FOUNDATION_EXPORT DXWatchlistDeleteRequestTO *new_DXWatchlistDeleteRequestTO_initWithDXWatchlistTO_(DXWatchlistTO *watchlistTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistDeleteRequestTO *create_DXWatchlistDeleteRequestTO_initWithDXWatchlistTO_(DXWatchlistTO *watchlistTO);

FOUNDATION_EXPORT void DXWatchlistDeleteRequestTO_init(DXWatchlistDeleteRequestTO *self);

FOUNDATION_EXPORT DXWatchlistDeleteRequestTO *new_DXWatchlistDeleteRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistDeleteRequestTO *create_DXWatchlistDeleteRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistDeleteRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO DXWatchlistDeleteRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteRequestTO")
