
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO || defined(INCLUDE_DXWatchlistsRequestTO))
#define DXWatchlistsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXWatchlistsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXWatchlistsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXWatchlistsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXWatchlistsRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXWatchlistsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXWatchlistsRequestTO)

inline DXWatchlistsRequestTO *DXWatchlistsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistsRequestTO *DXWatchlistsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistsRequestTO, EMPTY, DXWatchlistsRequestTO *)

FOUNDATION_EXPORT void DXWatchlistsRequestTO_init(DXWatchlistsRequestTO *self);

FOUNDATION_EXPORT DXWatchlistsRequestTO *new_DXWatchlistsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistsRequestTO *create_DXWatchlistsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO DXWatchlistsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsRequestTO")
